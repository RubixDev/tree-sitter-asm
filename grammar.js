module.exports = grammar({
    name: 'asm',
    extras: $ => [
        / |\t|\r/,
        $.line_comment,
        $.block_comment,
    ],

    rules: {
        program: $ => sep(repeat1('\n'), $._item),
        _item: $ =>
            choice(
                $.meta,
                $.label,
                $.instruction,
            ),

        meta: $ =>
            seq(
                field('kind', $.meta_ident),
                optional(choice(
                    $.ident,
                    seq($.int, repeat(seq(',', $.int))),
                    seq($.float, repeat(seq(',', $.float))),
                )),
            ),
        label: $ => seq($.ident, ':', optional(seq('(', $.ident, ')'))),
        instruction: $ => seq(field('kind', $.word), sep(',', $._expr)),

        _expr: $ => choice($.ptr, $.ident, $.int, $.string, $.float),
        ptr: $ =>
            choice(
                seq(
                    optional(seq(choice('byte', 'word', 'dword', 'qword'), 'ptr')),
                    '[',
                    $.reg,
                    optional(seq(choice('+', '-'), choice($.int, $.ident))),
                    ']',
                ),
                seq(
                    optional($.int),
                    '(',
                    $.reg,
                    ')',
                ),
                seq(
                    '*',
                    'rel',
                    '[',
                    $.int,
                    ']',
                ),
            ),

        int: $ => /-?([0-9][0-9_]*|0x[0-9A-Fa-f][0-9A-Fa-f_]*)/,
        float: $ => /-?[0-9][0-9_]*\.([0-9][0-9_]*)?/,
        string: $ => /"[^"]*"/,

        word: $ => /[a-zA-Z0-9_]+/,
        _reg: $ => /%?[a-z0-9]+/,
        reg: $ => choice($._reg, $.word),
        meta_ident: $ => /\.[a-z_]+/,
        _ident: $ => /[a-zA-Z_0-9.]+/,
        ident: $ => choice($._ident, $.meta_ident, $.reg),

        line_comment: $ => /(\/\/|#|;).*/,
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
