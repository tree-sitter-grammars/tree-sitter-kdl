# Changelog

## 2.0.0

* Add support for KDL 2 syntax while retaining backwards compatibility
* Update bindings and metadata for current Tree-sitter releases
* Emit `escape` and `escaped_whitespace` as siblings of `string_fragment` in
  quoted strings.
* Reject disallowed literal code points and surrogate escapes written with
  leading zeros
* Expose the body of every raw string as a `string_fragment`

## [1.1.0](https://github.com/amaanq/tree-sitter-kdl/compare/v1.0.3...v1.1.0) (2023-05-13)


### Features

* add release action ([245f6e0](https://github.com/amaanq/tree-sitter-kdl/commit/245f6e0ba4f7a5c81ca0e1075dfc875ff9f4edd0))


### Bug Fixes

* add lint script to package.json ([e36f054](https://github.com/amaanq/tree-sitter-kdl/commit/e36f054a60c4d9e5ae29567d439fdb8790b53b30))
* rename EOF to _EOF to avoid conflicts with stdio.h ([d118f93](https://github.com/amaanq/tree-sitter-kdl/commit/d118f9376ef4f0461975289302fe74a28f073876))
