/* eslint-disable camelcase */

module.exports = grammar({
  name: 'kdl',

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.identifier,

  rules: {
    document: ($) => repeat($.node),

    node: ($) =>
      prec.right(
        seq(
          choice($.identifier, $.node_type),
          optional('\\'),
          repeat($.argument),
          repeat($.property),
          // Nodes without children are terminated by a newline, a semicolon, or the end of a file stream:
          // optional(choice($.children, choice(';', $.newline))),
          optional(choice($.children, ';')),
        ),
      ),

    property: ($) =>
      seq(
        alias(
          choice(
            $.identifier,
            $._string_literal,
          ),
          $.property_name,
        ),
        '=',
        $.argument,
      ),

    children: ($) =>
      seq(
        '{',
        repeat($.node),
        '}',
      ),

    node_type: ($) => seq('(', optional($._type), ')'),

    argument: ($) =>
      seq(
        optional(seq('(', optional($._type), ')')),
        choice(
          $.number,
          $.float,
          $.boolean,
          $.null,
          $._string_literal,
          $._raw_string_literal,

          $.identifier,
        )),

    number: ($) => {
      const hex_literal = seq(
        optional(choice('-', '+')),
        alias('0x', $.hex_prefix),
        /[\da-fA-F](_?[\da-fA-F])*(_?)/,
      );

      const octal_literal = seq(
        optional(choice('-', '+')),
        alias('0o', $.octal_prefix),
        /[0-7](_?[0-7])*(_?)/,
      );

      const binary_literal = seq(
        optional(choice('-', '+')),
        alias('0b', $.binary_prefix),
        /[0-1](_?[0-1])*(_?)/,
      );

      const decimal_digits = /\d(_?\d)*/;
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits);

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits))),
      );

      const decimal_literal = choice(
        seq(optional(choice('-', '+')), decimal_integer_literal),
        decimal_digits,
        signed_integer,
      );

      return token(choice(
        hex_literal,
        octal_literal,
        binary_literal,
        decimal_literal,
      ));
    },

    float: () => /[+-]?(\d+(\.\d+)?|\.\d+)([Ee][+-]?\d+)?/,

    boolean: ($) => choice($.true, $.false),
    true: () => 'true',
    false: () => 'false',

    null: () => 'null',

    _string_literal: ($) => alias(/"([^"\\]|\\.)*"|'([^'\\]|\\.)*'/, $.string_literal),
    // raw_string_literal
    // defines a raw string literal as starting with the character U+0072 (r), followed by zero or more of the character U+0023 (#) and a U+0022 (double-quote) character. The raw string body can contain any sequence of Unicode characters and is terminated only by another U+0022 (double-quote) character, followed by the same number of U+0023 (#) characters that preceded the opening U+0022 (double-quote) character.5
    // Escape characters in the raw string body are not processed.
    // no lookahead regex so no using ? or ! in the regex
    _raw_string_literal: ($) =>
      alias(
        seq(/r#*"/, /[^"]*/, /"/, /#*/),
        $.raw_string_literal,
      ),

    // multiline string literals start and end with " and can span multiple lines
    multiline_string_literal: ($) =>
      token(
        seq(
          '"',
          /[^"]*/,
          '"',
        ),
      ),

    // identifier: () => /[A-Za-z_][A-Za-z0-9_]*/,
    // backslash is a valid character in an identifier
    // identifier: () => /[A-Za-z_][A-Za-z0-9_\\]*/,
    // emojis are valid characters in an identifier
    // so anything but a space, newline, or a special character
    // identifier: () => /[^\s\[\]\{\}\(\)=,;\\]+/,
    // there can be commas
    // identifier: () => /[^\s\[\]\{\}\(\)=;\\]+/,
    // identifier cannot be /- but can be --
    // identifier: () => /[^\s\[\]\{\}\(\)=;\\\/-]+/,
    // cannot have /- together, but - or / can be alone
    // identifier: () => /[^\s\[\]\{\}\(\)=;\\]+/,
    identifier: () => /(?:(?!\/-)(?!\/\*)(?!\/\/)[^\s\[\]\{\}\(\)=;\\\/])+/,
    _type: ($) => alias($.identifier, $.type),

    newline: () => token(choice('\r\n', '\n', '\r')),

    comment: () =>
      token(
        choice(
          seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
          // On top of that, KDL supports /- "slashdash" comments, which can be used to comment out individual nodes, arguments, or children:
          // seq('/-', /(\\(.|\r?\n)|[^\\\n])*/),
          // /- either lasts until the end of the line or until the next }
          // seq('/-', /(\\(.|\r?\n)|[^\\\n])*}/),
          // this fails for
          // node /- key="value" "arg"
          // need to ignore space and quotes in /- too
          // this can also start in the middle of a line so account for that
          seq('/-', /(\\(.|\r?\n)|[^\\\n])*}/),
        ),
      ),
  },
});
