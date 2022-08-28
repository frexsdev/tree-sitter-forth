(function_definition
  name: (identifier) @function)

(variable_definition) @keyword
(variable_definition
  name: (identifier) @variable)

(constant_definition) @keyword
(constant_definition
  name: (identifier) @constant)
  
(include_statement) @keyword
(include_statement
  file: (identifier) @string)

(keyword) @keyword

(comment) @comment

(string) @string
