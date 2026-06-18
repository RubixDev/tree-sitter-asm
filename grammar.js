module.exports = grammar({
    name: 'asm',
    extras: $ => [
        / |\t|\r/,
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
        program: $ => repeatSep(repeat1('\n'), $._item),
        _item: $ =>
            choice(
                $.meta,
                $.label,
                $.const,
                $.instruction,
            ),

        meta: $ =>
            seq(
                field('kind', $.meta_ident),
                optional(choice(
                    $.ident,
                    seq($.int, repeat(seq(',', $.int))),
                    seq($.float, repeat(seq(',', $.float))),
                    seq($.string, repeat(seq(',', $.string))),
                )),
            ),
        label: $ =>
            choice(
                seq(
                    choice($.meta_ident, alias($.word, $.ident), alias($._ident, $.ident)),
                    ':',
                    optional(choice(seq('(', $.ident, ')'), $.meta)),
                ),
                seq(
                    'label',
                    field('name', $.word),
                ),
            ),
        const: $ => seq('const', field('name', $.word), field('value', $._tc_expr)),
        instruction: $ => seq(field('kind', $.word), choice(repeatSep(',', $._expr), repeat($._tc_expr))),
        _expr: $ => choice($.ptr, $.ident, $.int, $.string, $.float, $.list),

        // ARMv7
        list: $ =>
            seq(
                '{',
                optional(seq($.reg, repeat(seq(choice(',', '-'), $.reg)), optional(','))),
                '}'
            ),

        ptr: $ =>
            choice(
                // Intel
                seq(
                    optional(seq(choice('byte', 'word', 'dword', 'qword'), 'ptr')),
                    '[',
                    $.reg,
                    optional(seq(choice('+', '-'), choice($.int, $.ident))),
                    ']',
                ),
                // AT&T
                // DISP(BASE, INDEX, SCALE)
                seq(
                    field('disp', optional($.int)),
                    '(',
                    choice(
                      $.reg,
                      sep(',',
                        field('base', optional($.reg)),
                        field('index', $.reg),
                        field('scale', optional(choice('1', '2', '4', '8'))),
                      ),
                    ),
                    ')',
                ),
                seq(
                    '*',
                    'rel',
                    '[',
                    $.int,
                    ']',
                ),
                // Aarch64
                seq(
                    '[',
                    $.reg,
                    optional(seq(',', $.int)),
                    ']',
                    optional('!'),
                ),
            ),
        // Turing Complete
        _tc_expr: $ =>
            choice(
                $.ident,
                $.int,
                $.string,
                $.tc_infix,
            ),
        tc_infix: $ =>
            choice(
                ...[
                    ['+', 0],
                    ['-', 0],
                    ['*', 1],
                    ['/', 1],
                    ['%', 1],
                    ['|', 2],
                    ['^', 3],
                    ['&', 4],
                ].map(([op, p]) =>
                    prec.left(
                        p,
                        seq(field('lhs', $._tc_expr), field('op', op), field('rhs', $._tc_expr)),
                    )
                ),
            ),

        int: $ => {
            const _int = /-?([0-9][0-9_]*|(0x|\$)[0-9A-Fa-f][0-9A-Fa-f_]*|0b[01][01_]*)/
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

        word: $ => /[a-zA-Z0-9_]+/,
        _reg: $ => /%?[a-z0-9]+/,
        address: $ => /[=\$][a-zA-Z0-9_]+/, // GAS x86 address
        reg: $ => choice($._reg, $.word, $.address),
        meta_ident: $ => /\.[a-z_]+/,
        _ident: $ => /[a-zA-Z_0-9.]+/,
        ident: $ => choice($._ident, $.meta_ident, $.reg),

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

function repeatSep(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}

function sep(separator, ...rules) {
  if (rules.length === 0) return optional();
  let parts = [rules[0]];
  for (let i = 1; i < rules.length; i++) {
    parts.push(separator, rules[i]);
  }
  return seq(...parts);
}
