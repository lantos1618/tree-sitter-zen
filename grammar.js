module.exports = grammar({
    name: 'Zen',

    rules: {
        // This is the entry point for the grammar.
        source_file: $ => repeat($._expression),

        // This rule matches any single expression in the language.
        _expression: $ => choice(
            $.atom,
            $.unary,
            $.binary,
            $.ternary,
            $.group,
            // Add more rules here.
        ),

        atom: $ => choice(
            $.identifier,
            $.literal,
            // $.end_of_file
        ),

        unary: $ => prec(3, seq(
            choice($.unary_op, $.identifier),
            $._expression
        )),

        binary: $ => choice(
            $.binary_symbolic,
            $.binary_assignment,
            $.binary_access,
        ),

        binary_assignment: $ => prec.left(2, seq(
            $._expression,
            ":",
            $._expression
        )),

        binary_access: $ => prec.left(seq(
            $._expression,
            ".",
            $._expression
        )),

        binary_symbolic: $ => prec.left(seq(
            $._expression,
            $.binary_op,
            $._expression
        )),

        ternary: $ => choice(
            $.ternary_if,
            $.ternary_functional_def,
            $.ternary_functional_stmt,
        ),

        ternary_functional_stmt: $ => prec(1, seq(
            $.identifier,
            $.group_paren,
            $.group_brace_stmt
        )),

        ternary_functional_def: $ => prec(1, seq(
            $.identifier,
            $.group_paren,
            $.group_brace_def
        )),

        ternary_if: $ => prec(1, seq(
            $._expression,
            "?",
            $._expression,
            ":",
            $._expression
        )),

        group: $ => choice(
            $.group_paren,
            // $.group_bracket,
            $.group_brace_def,
            //     $.group_brace_stmt
        ),

        group_paren: $ => seq(
            "(",
            optional($._expression),
            ")"
        ),

        // group_bracket: $ => seq(
        //     "[",
        //     $._expression,
        //     "]"
        // ),

        group_brace_def: $ => prec(1, seq(
            "{",
            optional(seq($.binary_assignment)),
            "}"
        )),

        group_brace_stmt: $ => seq(
            "{",
            optional($._expression),
            "}"
        ),

        // Add more rules here.
        literal: $ => choice(
            $.integer_literal,
            $.float_literal,
            $.bool_literal,
            $.char_literal,
            $.octal_literal,
            $.hex_literal,
            $.binary_literal,
            $.string_literal
        ),

        integer_literal: $ => /\d+/,

        float_literal: $ => /\d+\.\d+/,

        bool_literal: $ => choice('true', 'false'),

        char_literal: $ => seq(
            "'",
            choice(
                /[^'\\]/,
                seq('\\', /./)
            ),
            "'"
        ),

        octal_literal: $ => /0o[0-7]+/,

        hex_literal: $ => /0x[0-9a-fA-F]+/,

        binary_literal: $ => /0b[01]+/,

        string_literal: $ => choice(
            seq('"', '"'),
            seq('"', $.string_content, '"')
        ),

        string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"\n]+/)),
            $.escape_sequence
        )),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            /(\"|\\|\/|b|f|n|r|t|u)/
        )),


        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,


        unary_op: $ => choice(
            '!',
            '...'
        ),

        binary_op: $ => choice(
            '==',
            '!=',
            '<',
            '<=',
            '>',
            '>=',
            '&&',
            '||',
            '+',
            '-',
            '*',
            '/',
            '%',
            '&',
            '|',
            '^',
            '~',
            '<<',
            '>>'
        ),
    },

    extras: $ => [
        /\s/, // whitespace
        /\/\/.*/, // line comment
        // comma
        /,/,

    ],


});
