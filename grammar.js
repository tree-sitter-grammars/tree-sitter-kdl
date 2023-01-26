/* eslint-disable camelcase */

const PREC = {
  ws: 1,
  bare_identifier: 2,

  node_space: 8,
  node_terminator: 8,

  node: 9,

  linespace: 10,

  value: 11,
  prop: 12,

  identifier: 13,
};

const KEYWORDS = ['true', 'false', 'null'];

const ANNOTATION_BUILTINS = [
  'i8',
  'i16',
  'i32',
  'i64',
  'u8',
  'u16',
  'u32',
  'u64',
  'isize',
  'usize',
  'f32',
  'f64',
  'decimal64',
  'decimal128',
  'date-time',
  'time',
  'date',
  'duration',
  'decimal',
  'currency',
  'country-2',
  'country-3',
  'country-subdivision',
  'email',
  'idn-email',
  'hostname',
  'idn-hostname',
  'ipv4',
  'ipv6',
  'url',
  'url-reference',
  'irl',
  'iri-reference',
  'url-template',
  'uuid',
  'regex',
  'base64',
];

module.exports = grammar({
  name: 'kdl',

  conflicts: ($) => [
    [$._node_space, $._linespace],
    [$.document],
    [$._node_space],
    [$.node_children],
  ],

  extras: ($) => [$.single_line_comment, $.multi_line_comment],

  externals: ($) => [$._eof],

  word: ($) => $._normal_bare_identifier,

  rules: {
    // nodes := linespace* (node nodes?)? linespace*
    document: ($) =>
      field(
        'nodes', seq(
          repeat($._linespace),
          optional(seq($.node, repeat(seq(repeat($._linespace), $.node)))),
          repeat($._linespace),
        ),
      ),

    // node := ('/-' node-space*)? type? identifier (node-space+ node-prop-or-arg)* (node-space* node-children ws*)? node-space* node-terminator
    node: ($) => prec(PREC.node,
      seq(
        optional(seq('/-', repeat($._node_space))),
        optional($.type),
        $.identifier,
        repeat(seq(repeat1($._node_space), $._node_prop_or_arg)),
        optional(seq(repeat($._node_space), field('children', $.node_children), repeat($._ws))),
        repeat($._node_space),
        $._node_terminator,
      ),
    ),

    // node-prop-or-arg := ('/-' node-space*)? (prop | value)
    _node_prop_or_arg: ($) =>
      seq(
        optional(seq('/-', repeat($._node_space))),
        choice($.prop, $.value),
      ),
    // node-children := ('/-' node-space*)? '{' nodes '}'
    node_children: ($) =>
      seq(
        optional(seq('/-', repeat($._node_space))),
        alias('{', $.start_bracket),
        seq(
          repeat($._linespace),
          optional(seq($.node, repeat(seq(repeat($._linespace), $.node)))),
          repeat($._linespace),
        ),
        alias('}', $.end_bracket),
      ),
    // node-space := ws* escline ws* | ws+
    _node_space: ($) =>
      choice(
        seq(repeat($._ws), $._escline, repeat($._ws)),
        repeat1($._ws),
      ),
    // node-terminator := single-line-comment | newline | ';' | eof
    _node_terminator: ($) => prec(PREC.node_terminator,
      choice($.single_line_comment, $._newline, ';', $._eof),
    ),

    // identifier := string | bare-identifier
    identifier: ($) => prec(PREC.identifier, choice($.string, $._bare_identifier)),
    // bare-identifier := ((identifier-char - digit - sign) identifier-char* | sign ((identifier-char - digit) identifier-char*)?) - keyword
    _bare_identifier: ($) => prec.right(PREC.bare_identifier,
      choice(
        $._normal_bare_identifier,
        seq($._sign, optional(seq($.__identifier_char_no_digit, repeat($._identifier_char)))),
      ),
    ),
    // _normal_bare_identifier: ($) => $.__identifier_char_no_digit_sign,
    _normal_bare_identifier: () => token(
      seq(
        /[\p{L}\p{M}\p{N}\p{Emoji}_~!@#\$%\^&\*.:'\|\?+&&[^\s\d\/(){}<>;\[\]=,"]]/,
        /[\p{L}\p{M}\p{N}\p{Emoji}_~!@#\$%\^&\*.:'\|\?+&&[^\s\/(){}<>;\[\]=,"]]*/,
      ),
    ),
    // identifier-char := unicode - linespace - [\/(){}<>;[]=,"]
    _identifier_char: () => token(
      prec.right(
        PREC.identifier,
        /[\p{L}\p{M}\p{N}_~!@#\$%\^&\*.:'\|\?+&&[^\s\/(){}<>;\[\]=,"]]/,
      ),
    ),

    // can't start with a digit
    __identifier_char_no_digit: () => token(
      prec.right(
        PREC.identifier,
        /[\p{L}\p{M}\p{N}_~!@#\$%\^&\*.:'\|\?+&&[^\s\d\/(){}<>;\[\]=,"]]/,
      ),
    ),

    // can't start with a digit or sign
    __identifier_char_no_digit_sign: () => token(
      prec.right(
        PREC.identifier,
        /[\p{L}\p{M}\p{N}_~!@#\$%\^&\*.:'\|\?+&&[^\s\d\+\-\/(){}<>;\[\]=,"]]/,
      ),
    ),


    // keyword := boolean | 'null'
    keyword: () => choice(...KEYWORDS),
    // type annotations
    annotation_type: () => choice(...ANNOTATION_BUILTINS),
    // prop := identifier '=' value
    prop: ($) => seq($.identifier, '=', $.value),
    // value := type? (string | number | keyword)
    value: ($) => seq(optional($.type), choice($.string, $.number, $.keyword)),
    // type := '(' identifier ')'
    type: ($) => seq('(', choice($.identifier, $.annotation_type), ')'),

    // String
    // string := raw-string | escaped-string
    string: ($) => choice($.raw_string, $.escaped_string),
    // escaped-string := '"' character* '"'
    escaped_string: ($) => seq('"', repeat(choice($._escape, /[^"]/)), '"'),
    // character := '\' escape | [^\"]
    _character: ($) => choice($._escape, /[^"]/),
    // escape := ["\\/bfnrt] | 'u{' hex-digit{1, 6} '}'
    _escape: () => /\\\\|\\"|\\\/|\\b|\\f|\\n|\\r|\\t|\\u\{[0-9a-fA-F]{1,6}\}/,
    // hex-digit := [0-9a-fA-F]
    _hex_digit: () => /[0-9a-fA-F]/,

    // // raw-string := 'r' raw-string-hash
    // raw_string: ($) => seq('r', $._raw_string_hash),
    // // raw-string-hash := '#' raw-string-hash '#' | raw-string-quotes
    // _raw_string_hash: ($) => choice(seq('#', $._raw_string_hash, '#'), $._raw_string_quotes),
    // // raw-string-quotes := '"' .* '"'
    // _raw_string_quotes: () => seq('"', /.*/, '"'),
    raw_string: () =>
      seq(
        choice(
          // raw-string-hash := '#' raw-string-hash '#' | raw-string-quotes
          seq(token.immediate(seq('r', repeat1('#'))), '"', /.*/, '"', repeat1('#')),
          // raw-string-quotes := '"' .* '"'
          seq(token.immediate(seq('r', '"')), /.*/, '"'),
        ),
      ),

    // number := decimal | hex | octal | binary
    number: ($) => choice($._decimal, $._hex, $._octal, $._binary),

    // decimal := sign? integer ('.' integer)? exponent?
    _decimal: ($) =>
      seq(
        optional($._sign),
        $._integer,
        optional(seq('.', $._integer)),
        optional($._exponent),
      ),
    // exponent := ('e' | 'E') sign? integer
    _exponent: ($) => seq(choice('e', 'E'), optional($._sign), $._integer),
    // integer := digit (digit | '_')*
    _integer: ($) => seq($._digit, repeat(choice($._digit, '_'))),
    // digit := [0-9]
    _digit: () => /[0-9]/,
    // sign := '+' | '-'
    _sign: () => choice('+', '-'),

    // hex := sign? '0x' hex-digit (hex-digit | '_')*
    _hex: ($) => seq(optional($._sign), '0x', $._hex_digit, repeat(choice($._hex_digit, '_'))),
    // octal := sign? '0o' [0-7] [0-7_]*
    _octal: ($) => seq(optional($._sign), '0o', /[0-7]/, repeat(choice(/[0-7]/, '_'))),
    // binary := sign? '0b' ('0' | '1') ('0' | '1' | '_')*
    _binary: ($) => seq(optional($._sign), '0b', choice('0', '1'), repeat(choice('0', '1', '_'))),

    // boolean := 'true' | 'false'
    boolean: () => choice('true', 'false'),

    // escline := '\\' ws* (single-line-comment | newline)
    _escline: ($) => seq('\\', repeat($._ws), choice($.single_line_comment, $._newline)),

    // linespace := newline | ws | single-line-comment
    _linespace: ($) => choice($._newline, $._ws, $.single_line_comment),

    // newline := See Table (All line-break white_space)
    // Newline
    // The following characters should be treated as new lines:
    //
    // ╭──────────────────────────────────────────────────────────╮
    // │  Acronym  Name                           Code Pt         │
    // │  CR       Carriage Return                U+000D          │
    // │  LF       Line Feed                      U+000A          │
    // │  CRLF     Carriage Return and Line Feed  U+000D + U+000A │
    // │  NEL      Next Line                      U+0085          │
    // │  FF       Form Feed                      U+000C          │
    // │  LS       Line Separator                 U+2028          │
    // │  PS       Paragraph Separator            U+2029          │
    // ╰──────────────────────────────────────────────────────────╯
    // Note that for the purpose of new lines, CRLF is considered a single newline.
    _newline: () => choice('\r', '\n', '\r\n', '\u0085', '\u000C', '\u2028', '\u2029'),

    // ws := bom | unicode-space | multi-line-comment
    _ws: ($) => choice($._bom, $._unicode_space, $.multi_line_comment),

    // bom := '\u{FEFF}'
    _bom: () => '\u{FEFF}',

    // unicode-space := See Table (All White_Space unicode characters which are not `newline`)
    // Whitespace
    // The following characters should be treated as non-Newline white space:
    //
    // ╭────────────────────────────────────╮
    // │  Name                      Code Pt │
    // │  Character Tabulation      U+0009  │
    // │  Space                     U+0020  │
    // │  No-Break Space            U+00A0  │
    // │  Ogham Space Mark          U+1680  │
    // │  En Quad                   U+2000  │
    // │  Em Quad                   U+2001  │
    // │  En Space                  U+2002  │
    // │  Em Space                  U+2003  │
    // │  Three-Per-Em Space        U+2004  │
    // │  Four-Per-Em Space         U+2005  │
    // │  Six-Per-Em Space          U+2006  │
    // │  Figure Space              U+2007  │
    // │  Punctuation Space         U+2008  │
    // │  Thin Space                U+2009  │
    // │  Hair Space                U+200A  │
    // │  Narrow No-Break Space     U+202F  │
    // │  Medium Mathematical Space U+205F  │
    // │  Ideographic Space         U+3000  │
    // ╰────────────────────────────────────╯
    _unicode_space: () => choice(
      '\u0009', '\u0020', '\u00A0', '\u1680', '\u2000', '\u2001',
      '\u2002', '\u2003', '\u2004', '\u2005', '\u2006', '\u2007',
      '\u2008', '\u2009', '\u200A', '\u202F', '\u205F', '\u3000',
    ),

    // single-line-comment := '//' ^newline+ (newline | eof)
    single_line_comment: ($) =>
      seq(
        '//',
        // deno-lint-ignore no-control-regex
        repeat1(/[^\r\n\u0085\u000C\u2028\u2029]/),
        choice($._newline, $._eof),
      ),
    // multi-line-comment := '/*' commented-block
    multi_line_comment: ($) => seq('/*', $.commented_block),
    // commented-block := '*/' | (multi-line-comment | '*' | '/' | [^*/]+) commented-block
    commented_block: ($) =>
      choice(
        '*/',
        seq(choice($.multi_line_comment, '*', '/', /[^*/]+/), $.commented_block),
      ),
    // _eof: () => prec(-1, token.immediate('\0')),
  },
});
