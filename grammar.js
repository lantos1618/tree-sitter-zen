
// function def
// myFunction: Function{
//    args    : {
//      x: Int.i32
//    }
//    return  : Int.i32
//    body    : {
//       do something
//    }
// }

module.exports = grammar({

  name: 'zen',
  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $_assignment,
    ),

    block: $ => seq(
      '{',
      repeat($._statement), 
      '}'
    ),
    assignment_pattern:  $ => seq(
      field('name', $.identifier),
      ':',
      field('right', $.expression)
    ),

    _statement: $ => choice(
        // todo
    ),
    _expression: $=> choice(
        $.identifier,
        $.literal,
    ),
    unary_expression: $ => prec.left(
      field('operator', $.unary_operator),
      field('expression', $.expression)
    ),
    unary_operator: $ => choice('!', '...'),
    literal: $ => choice(
        $.string_literal,
        $.integer_literal,
        $.float_literal,
    ),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    digit: $=> /\d+/,
    integer_literal: $ => seq($.digit),
    float_literal: $ => seq($.digit, '.', $.digit),
    // strings
    string: $ => choice(
      '"',
      repeat(choice(
        // either is escaped or not
        $.string_fragment,
        $.escape_sequence,
      )),
      '"'
    ),
    string_fragment: $ => token.immediate(prec(1, /[^'\\']+/)),
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),
    comment: $=> token(
      seq('//', /.*/)
    ),
  }
})
