[
  (single_line_comment)
  (multi_line_comment)
] @comment

; A type annotation names the value's type
((value
   type: (type name: (identifier) @injection.language)
   value: (string (multi_line_string (string_fragment) @injection.content)))
  (#set! injection.combined))

((value
   type: (type name: (identifier) @injection.language)
   value: (string (string_fragment) @injection.content)))
