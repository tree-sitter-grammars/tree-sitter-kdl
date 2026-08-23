; Types

(node (identifier) @type)
(node (identifier (string) @string))

(type) @type

(annotation_type) @type.builtin

; Properties

(prop (identifier) @property)

; Variables

(identifier) @variable

; Operators
[
 "="
 "+"
 "-"
] @operator

; Literals

(string) @string

(multi_line_string) @string

(string_fragment) @string

(escape) @string.escape

(escaped_whitespace) @string.escape

(number) @number

(keyword_number) @number

(number (decimal) @float)
(number (exponent) @float)

(boolean) @boolean

"null" @constant.builtin
"#null" @constant.builtin

; Punctuation

["{" "}"] @punctuation.bracket

["(" ")"] @punctuation.bracket

[
  ";"
] @punctuation.delimiter

; Comments

[
  (single_line_comment)
  (multi_line_comment)
] @comment @spell

(node (node_comment) (#set! "priority" 105)) @comment
(node (node_field (node_field_comment) (#set! "priority" 105)) @comment)
(node_children (node_children_comment) (#set! "priority" 105)) @comment
