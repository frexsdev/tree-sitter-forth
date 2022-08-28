module.exports = grammar({
  name: 'forth',

  rules: {
    source_file: $ => repeat(
      choice(
        seq($._expression, optional($.comment)),
        $.comment
      )
    ),

    _expression: $ => choice(
      $.function_definition,
      $.constant_definition,
      $.variable_definition,
      $.include_statement,
      $._word,
    ),

    variable_definition: $ => seq(
      choice("variable", "2variable", "create"),
      field('name', choice($.identifier, $.comment)),
    ),

    constant_definition: $ => seq(
      choice("constant", "2constant"),
      field('name', choice($.identifier, $.comment)),
    ),

    function_definition: $ => seq(
      ':',
      field('name', choice($.identifier, $.comment)),
      repeat(choice($._word, $.comment)),
      ';'
    ),

    include_statement: $ => seq(
      'include',
      field('file', choice($.identifier, $.comment))
    ),

    _word: $ => choice($.keyword, $.identifier, $.string),

    keyword: () => choice(
      'if',
      'endif',
      'to',
      'else',
      'then',
      'case',
      'endcase',
      'of',
      'endof',
      'begin',
      'while',
      'repeat',
      'until',
      'again',
      'do',
      '?do',
      'loop',
      'leave',
      'unloop',
      '+do',
      '+loop',
      '-do',
      '-loop',
      'for',
      'next',
      'next-case',
      '?of',
      'contof',
      'ahead',
      'cs-pick',
      'cs-roll',
      'cs-drop',
      '?dup-if',
      '?dup-0=-if',
      'u+do',
      'u-do',
      '?leave',
      'defer',
      'is',
      'recursive',
      'recurse',
      'throw',
      'exception',
      'catch',
      'executes',
      'nothrow',
      'try',
      'endtry',
      'iferror',
      'restore',
      'endtry-iferror',
      'recover',
      'abort"',
      'abort',
      'warning"',
      'warnings'
    ),

    comment: () => choice(/\( (.*) \)/, /[\\] ([^\n]*)/),
    identifier: () => /\S+/,
    string: () => /[\.s]" (.*)"/
  }
});

