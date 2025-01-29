/**
 * @file Test of Cola
 * @author Edgar Tsang
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cola",

  rules: {
contract: $ => (repeat1(alias($.start, $.clause))
),

start: $ => ((seq($.user, 'has', alias($.discount, $.statement), 'if', optional($.negated), alias($.conditional, $.condition), '.')
)
),

user: $ => ($.string
),

negated: $ => ((seq('it', 'is', 'not', 'true', 'that')
)
),

discount: $ => (seq($.num, '%', optional(choice(
	'discount'
	,'off'
)))
),

conditional: $ => choice(
	$.condition1
	,$.condition2
	,$.condition3
),

condition1: $ => ((seq('they', 'are', 'a', 'member')
)
),

condition2: $ => ((seq('they', 'are', 'male')
)
),

condition3: $ => ((seq('they', 'are', 'female')
)
),

string: $ => (/[a-zA-Z]+/
),

num: $ => (/[0-9]+/
),

  }
});
