/**
 * @file Test of Cola
 * @author Edgar Tsang
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cola",

  extras: ($) => [
		$.comment,
		/\s|\\\r?\n/,
	],

  rules: {
contract: $ => (repeat1(alias($.start, $.clause))
),

start: $ => ((seq(choice(
	$.user
	,$.name
), 'has', $.discount, '.')
)
),

user: $ => prec(7,($.string
)),

name: $ => ($.string
),

negation: $ => ((seq('it', 'is', 'not', 'true', 'that')
)
),

discount: $ => (seq(alias($.discount_specific, $.statement), repeat((seq("and", alias($.discount_specific, $.statement))
)), 'if', $.conditional, optional((seq($.else, alias($.discount_specific, $.statement), repeat((seq("and", alias($.discount_specific, $.statement))
)))
)))
),

discount_specific: $ => choice(
	seq($.num, '%', optional(choice(
	'discount'
	,'off'
)))
	,seq('$', $.num, 'off')
),

else: $ => ("else"
),

conditional_upper: $ => (seq($.bracketopen, $.conditional, $.bracketclose)
),

bracketopen: $ => ('['
),

bracketclose: $ => (']'
),

conditional: $ => choice(
	alias($.conditional_upper, $.bracket)
	,$.conditional_and
	,$.conditional_or
	,alias($.condition_n, $.condition)
),

conditional_and: $ => (seq(choice(
	alias($.conditional_upper, $.bracket)
	,alias($.condition_n, $.condition)
), repeat1((seq(alias($.and_connect, $.and_expression), choice(
	alias($.conditional_upper, $.bracket)
	,alias($.condition_n, $.condition)
))
)))
),

and_connect: $ => ('and'
),

conditional_or: $ => (seq(choice(
	alias($.conditional_upper, $.bracket)
	,alias($.condition_n, $.condition)
), repeat1((seq(alias($.or_connect, $.or_expression), choice(
	alias($.conditional_upper, $.bracket)
	,alias($.condition_n, $.condition)
))
)))
),

or_connect: $ => ('or'
),

condition_n: $ => (seq(optional($.negation), repeat1(($.string
)), optional($.time_holder), ";")
),

time_holder: $ => choice(
	$._pre_time
	,seq($._pre_time, choice(
	$.time_and
	,$.time_or
), $._pre_time)
),

_pre_time: $ => (seq(choice(
	$.time_before
	,$.time_after
	,$.time_on
), $.time)
),

time_and: $ => ("and"
),

time_or: $ => ("or"
),

time_before: $ => (seq("before", optional("the"))
),

time_after: $ => (seq("after", optional("the"))
),

time_on: $ => (seq("on", optional("the"))
),

time: $ => choice(
	seq($.day, "-", $.month, "-", $.year)
	,seq($.year, "-", $.month, "-", $.day)
),

day: $ => choice(
	"1st"
	,"2nd"
	,"3rd"
	,"4th"
	,"5th"
	,"6th"
	,"7th"
	,"8th"
	,"9th"
	,"10th"
	,"11th"
	,"12th"
	,"13th"
	,"14th"
	,"15th"
	,"16th"
	,"17th"
	,"18th"
	,"19th"
	,"20th"
	,"21st"
	,"22nd"
	,"23rd"
	,"24th"
	,"25th"
	,"26th"
	,"27th"
	,"28th"
	,"29th"
	,"30th"
	,"31st"
	,seq($._numSingle, $._numSingle)
),

month: $ => choice(
	"January"
	,"February"
	,"March"
	,"April"
	,"May"
	,"June"
	,"July"
	,"August"
	,"September"
	,"October"
	,"November"
	,"December"
	,seq($._numSingle, $._numSingle)
),

year: $ => (seq($._numSingle, $._numSingle, $._numSingle, $._numSingle)
),

string: $ => (/[a-zA-Z]+/
),

num: $ => (/[0-9]+/
),

_numSingle: $ => (/[0-9]/
),

    comment: (_$) =>
			token(choice(
				seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
				seq(
					"/*",
					/[^*]*\*+([^/*][^*]*\*+)*/,
					"/",
				),
			)),

  }
});
