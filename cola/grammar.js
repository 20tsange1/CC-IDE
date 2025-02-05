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
contract: $ => (seq('contract', repeat1($.string), '{', $.parties, $.obligations, optional($.conditions), optional($.termination), optional($.signatures), '}')
),

parties: $ => (seq('parties', '{', repeat1($.party), '}')
),

party: $ => (seq($.identifier, ":", repeat1($.string), ",")
),

obligations: $ => (seq('obligations', '{', repeat1((alias($.obligation, $.clause)
)), '}')
),

obligation: $ => (alias($.obligate, $.statement)
),

obligate: $ => choice(
	seq($.identifier, 'delivers', repeat1($.string), 'by', $.date, ",")
	,seq($.identifier, 'pays', $.identifier, $.amount, 'upon', repeat1($.string), ",")
),

conditions: $ => (seq('conditions', '{', repeat1(alias($.condition_check, $.clause)), '}')
),

condition_check: $ => (seq('if', $.condition, 'then', $.statement, ',')
),

condition: $ => (seq(repeat1($.string), optional($.date))
),

statement: $ => (seq(repeat1($.string), optional($.amount))
),

termination: $ => (seq('termination', '{', repeat1(alias($.termination_clause, $.clause)), '}')
),

termination_clause: $ => choice(
	seq('contract', 'expires', 'on', $.date, ',')
	,seq('if', $.condition, 'then', $.statement, ',')
),

signatures: $ => (seq('signatures', 'required', 'from', $.identifier, repeat((seq(',', $.identifier)
)))
),

amount: $ => (seq('$', $.num, repeat($.string))
),

date: $ => (seq($.num, "-", $.num, "-", $.num)
),

identifier: $ => (/[a-zA-Z_][a-zA-Z0-9_]*/
),

string: $ => (/[a-zA-Z]+/
),

num: $ => (/[0-9]+/
),

  }
});
