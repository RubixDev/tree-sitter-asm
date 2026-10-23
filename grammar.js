module.exports = grammar({
    name: 'asm',
    extras: $ => [
        / |\t|\r|\f|\v/,
        $.line_comment,
        $.block_comment,
    ],
    conflicts: $ => [
        [
            $._expr,
            $._tc_expr,
        ],
    ],

    rules: {
        program: $ => seq(repeat('\n'), sep(repeat1('\n'), $._item)),
        _item: $ =>
            choice(
                $.star_comment,
                $.masm_data,
                $.preproc,
                $.meta,
                $.label,
                $.const,
                $.instruction,
            ),

        // MASM data definition: the name carries no colon, so this is not a
        // `label` and the bare `instruction` rule cannot express it either
        // (its operands are comma-separated, and `name dd 1, 2` has none
        // between the name and the directive).
        masm_data: $ =>
            prec(2, seq(
                field('name', $.word),
                field('kind', choice('db', 'dw', 'dd', 'dq', 'dt', 'df', 'dp')),
                $._expr,
                repeat(seq(',', $._expr)),
            )),

        // NASM preprocessor. `%include` is the import edge; the rest are listed
        // explicitly so a GAS register (`%eax`) can never match here.
        preproc: $ =>
            prec.right(seq(
                field('kind', $.preproc_ident),
                optional(seq($._expr, repeat(seq(optional(','), $._expr)))),
            )),
        preproc_ident: $ =>
            token(seq('%', choice(
                'include', 'define', 'xdefine', 'undef', 'assign', 'strlen',
                'macro', 'endmacro', 'rep', 'endrep', 'if', 'ifdef', 'ifndef',
                'elif', 'else', 'endif', 'error', 'warning', 'line', 'push', 'pop',
            ))),

        meta: $ =>
            prec.right(seq(
                field('kind', $.meta_ident),
                optional(seq($._expr, repeat(seq(optional(','), $._expr)))),
            )),
        label: $ =>
            choice(
                seq(
                    choice($.meta_ident, alias($.word, $.ident), alias($._ident, $.ident)),
                    ':',
                    optional(choice(seq('(', $.ident, ')'), $.meta, $.instruction)),
                ),
                // A label declared through a macro, which is how the GAS side of
                // a hand-written x86 renderer names every symbol so one source
                // serves platforms that differ on the leading underscore:
                //
                //     C(d_zistepv):   .single 0
                //
                // The symbol is the macro's ARGUMENT, so it is the `name` field;
                // the parenthesis is immediate, which is what keeps this from
                // claiming `Label equ (Other+4)`.
                prec(2, seq(
                    alias($.word, $.ident),
                    token.immediate('('),
                    field('name', $.ident),
                    ')',
                    ':',
                    optional(choice($.meta, $.instruction)),
                )),
                seq(
                    'label',
                    field('name', $.word),
                ),
            ),
        const: $ => seq('const', field('name', $.word), field('value', $._tc_expr)),
        instruction: $ => seq(field('kind', $.word), choice(sep(',', $._expr), repeat($._tc_expr))),
        _expr: $ => choice($.ptr, $.ident, $.int, $.string, $.float, $.list, $.expr, $.far_ptr, $.immediate, $.angle_arg, $.bitfield),

        // An immediate that is not a bare literal: `#Sym`, `#Sym+4`,
        // `#(SIZEX+SIZEY+2)/4-1`. A bare `#42` stays an `int` (its `#` form
        // takes an immediate literal token, which none of these can match), so
        // the two never overlap.
        // `prec.right` so the whole arithmetic tail belongs to the immediate:
        // `#Sym+4-2` is one operand, not an immediate followed by `-2`.
        immediate: $ => prec.right(6, seq('#', choice($.ident, $.expr, $.ptr, $.string, $.angle_arg))),

        // 68020 bit-field operand: `bfextu d0{d1:4},d2`, `bfins d3,8(a0){2:6}`.
        // The offset and width are a register or a literal, never a general
        // expression, which keeps the `:` from colliding with `far_ptr`.
        bitfield: $ => prec(12, seq(
            choice($.ptr, $.ident, $.int),
            token.immediate('{'),
            choice($.reg, $.int),
            ':',
            choice($.reg, $.int),
            '}',
        )),

        // `<(PMB_AWM+7)/8>` — angle brackets group a macro argument that
        // contains commas or operators, which is how the Amiga NDK passes a
        // computed size to `STRUCT`.
        angle_arg: $ => seq('<', $._expr, '>'),

        far_ptr: $ => prec(6, seq(field('seg', choice($.int, $.ident)), ':', field('off', choice($.int, $.ident)))),

        // Assembler-time arithmetic: `-(A + B)`, `(end - start) / 4`, `511*8`,
        // `sym+8`. Precedence mirrors the C operators an assembler accepts.
        expr: $ =>
            choice(
                prec(4, seq(choice('-', '+', '~'), $._expr)),
                prec.left(3, seq(field('lhs', $._expr), field('op', choice('*', '/', '%')), field('rhs', $._expr))),
                prec.left(2, seq(field('lhs', $._expr), field('op', choice('+', '-')), field('rhs', $._expr))),
                prec.left(1, seq(field('lhs', $._expr), field('op', choice('<<', '>>', '|', '^', '&', '!')), field('rhs', $._expr))),
                // A parenthesised sub-expression, optionally with a 68000 size
                // on the result: `(Table+2).w`, `(Data&$FFFFFF).l` — how a
                // vasm source writes an absolute address computed at assembly
                // time. The bare `(Sym).l` stays a `ptr` (higher precedence).
                prec(5, seq('(', $._expr, ')', optional($.size_suffix))),
            ),

        // ARMv7
        list: $ =>
            seq(
                '{',
                optional(seq($.reg, repeat(seq(choice(',', '-'), $.reg)), optional(','))),
                '}'
            ),

        ptr: $ =>
            choice(
                prec(11, seq(
                    optional(seq(choice('ds', 'es', 'cs', 'ss', 'fs', 'gs'), ':')),
                    optional(seq(choice('byte', 'word', 'dword', 'qword'), optional('ptr'))),
                    '[',
                    optional('rel'),
                    choice($.reg, $.meta_ident),
                    optional(seq(choice('+', '-'), $._expr)),
                    ']',
                )),
                // Motorola 68000 addressing. `(An)`, `d(An)` and the absolute
                // `(Sym).l` were already here; the rest are the modes real
                // vasm/Devpac sources are written in and the parser rejected:
                //
                //   (An)+            post-increment      `move.w (a2)+,d0`
                //   d(An,Dn.w)       indexed             `move.w 2(a2,d0.w),d1`
                //   Sym(pc,Dn.w)     PC-relative indexed `jmp Table(pc,d0.w)`
                //   Sym+$10E(pc,Dn)  a displacement that is an expression
                //
                // With a displacement: `d(An)`, `d(An,Dn.w)`, `Sym(pc,Dn.w)`,
                // `Sym+$10E(pc,Dn.w)`. NOT post-increment — `d(An)+` is not a
                // 68000 mode, while `C(sym)+4` (the GAS `C()` macro plus a
                // struct offset) is extremely common, so a `+` after a
                // displaced parenthesis is always assembler addition.
                prec.right(10, seq(
                    choice($.int, $.ident, $.expr),
                    // Immediate: a displaced parenthesis is written tight
                    // (`OBJ_X(a0)`, `2(a2,d0.w)`, `C(sym)`). With a space it is
                    // not addressing at all — `Label  equ  (Other+4)` is a
                    // directive whose operand happens to be parenthesised.
                    token.immediate('('),
                    choice($.reg, $.int),
                    // The 68020 index may carry a scale: `(a0,d1.w*4)`.
                    optional(seq(',', $.reg, optional(seq('*', $.int)))),
                    ')',
                    optional($.size_suffix),
                )),
                // Without a displacement: `(An)`, `(An)+`, `(Sym).l`.
                prec.right(10, seq(
                    '(',
                    choice($.reg, $.int),
                    optional(seq(',', $.reg, optional(seq('*', $.int)))),
                    ')',
                    optional(choice($.size_suffix, '+')),
                )),
                // `-(An)` pre-decrement. Outranks the unary minus in `_expr` so
                // the tree says "address register indirect", not "negate".
                prec(13, seq('-', '(', $.reg, ')')),
                // Absolute short/long written without parentheses, which is how
                // 68000 sources address hardware and scratch RAM: `$ffffdb58.w`.
                prec(12, seq($.int, $.size_suffix)),
                seq(
                    '*',
                    'rel',
                    '[',
                    $.int,
                    ']',
                ),
                // Aarch64. The write-back `!` is immediate (`[x0, #8]!`) so it
                // cannot be confused with `!`, which is bitwise OR in the
                // Motorola assemblers.
                seq(
                    '[',
                    $.reg,
                    optional(seq(',', $.int)),
                    ']',
                    optional(token.immediate('!')),
                ),
            ),
        // Turing Complete
        _tc_expr: $ =>
            choice(
                $.ident,
                $.int,
                $.string,
                $.tc_infix,
                // `Label  equ  (Other+4)` — operands separated by whitespace
                // rather than commas, one of which is parenthesised. Only the
                // parenthesised form is admitted here: a full `expr` would make
                // `word _tc_expr '-'` ambiguous with `tc_infix`.
                $.paren_expr,
            ),

        paren_expr: $ => seq('(', $._expr, ')', optional($.size_suffix)),
        tc_infix: $ =>
            choice(
                ...[
                    ['+', 0],
                    ['-', 0],
                    ['*', 1],
                    ['/', 1],
                    ['%', 1],
                    ['|', 2],
                    ['!', 2],
                    ['^', 3],
                    ['&', 4],
                    ['<<', 5],
                    ['>>', 5],
                ].map(([op, p]) =>
                    prec.left(
                        p,
                        seq(field('lhs', $._tc_expr), field('op', op), field('rhs', $._tc_expr)),
                    )
                ),
            ),

        int: $ => {
            const _int = /-?([0-9][0-9A-Fa-f_]*[hH]|[0-7][0-7_]*[oOqQ]|[01][01_]*[bB]|[0-9][0-9_]*[dD]|[0-9][0-9_]*|(0x|\$)[0-9A-Fa-f][0-9A-Fa-f_]*|0b[01][01_]*)/
            return choice(
                seq('#', token.immediate(_int)),
                _int,
            )
        },
        float: $ => /-?[0-9][0-9_]*\.([0-9][0-9_]*)?/,
        string: $ =>
            choice(
                /"[^"]*"/,
                /'[^']*'/
	    ),

        word: $ => /[a-zA-Z0-9_]+(\.[bwlsBWLS])?/,  // trailing .b/.w/.l/.s is a 68000 size suffix
        _reg: $ => /%?[a-z0-9]+/,
        // GAS `=sym`; NASM `$` / `$$`; Motorola `*` (the current address, as in
        // `bra *-$10`) and a bare `=` (`_LVOOpen = -$1e`, the Amiga library
        // vector-offset idiom). `*` is only an address where an OPERAND can
        // start — after an expression it is still multiplication.
        address: $ => choice(/[=\$][a-zA-Z0-9_]+/, '$$', '$', '*', '='),
        reg: $ => choice($._reg, $.word, $.address, $.macro_arg),

        // Macro parameter substitution inside a macro body: `\1`, `\2`, `\@`
        // (the unique-label counter), `\0` (the size suffix). Part of `reg` so
        // it is usable everywhere an operand or a base register can appear —
        // `dc.w \1`, `move.l (\1),\2`.
        macro_arg: $ => /\\[0-9a-zA-Z@#?.]+/,
        size_suffix: $ => token(prec(2, /\.[bwlsBWLS]/)),  // 68000 `(Name).l`
        meta_ident: $ => /\.[a-z_0-9][a-zA-Z0-9_]*/,  // lowercase or digit start: `.text`, `.code32`, MASM `.386P`/`.model`.
        // An uppercase start stays a plain ident so GAS local labels (`.L5`) are unaffected.
        _ident: $ => /[a-zA-Z_0-9.]+/,
        ident: $ => choice($._ident, $.meta_ident, $.reg),

        // Motorola/Devpac/ASM-One: a `*` in column 0 starts a comment, and whole
        // banner lines of `*` are the house style. It is an `_item` rather than
        // an `extras` token so it is only ever matched where an item can begin;
        // `511*8` keeps parsing as multiplication.
        star_comment: $ => /\*[^\n]*/,

        line_comment: $ =>
            choice(
                seq('#', token.immediate(/.*/)),
                /(\/\/|;).*/,
            ),
        block_comment: $ =>
            token(seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            )),
    },
})

function sep(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
