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
contract: $ => choice(
	$.component
	,seq($.component, 'C-AND', $.contract)
),

component: $ => choice(
	$.definition
	,$.conditional_definition
	,$.statement
	,$.conditional_statement
),

definition: $ => choice(
	$.simple_definition
	,seq($.simple_definition, 'AND', $.definition)
),

simple_definition: $ => choice(
	seq($.identity, $.subject, 'IS', $.subject)
	,seq($.identity, $.subject, 'EQUALS', $.numerical_expression)
),

numerical_expression: $ => choice(
	$.num
	,$.numerical_object
	,seq($.numerical_object, $.operator, $.numerical_expression)
),

operator: $ => choice(
	'PLUS'
	,'MINUS'
	,'TIMES'
	,'DIVIDE'
),

conditional_definition: $ => choice(
	seq($.definition, 'IF', $.condition)
	,seq('IF', $.condition, 'THEN', $.definition)
),

statement: $ => choice(
	$.simple_statement
	,seq($.simple_statement, 'OR', $.statement)
	,seq($.simple_statement, 'AND', $.statement)
),

conditional_statement: $ => choice(
	seq($.statement, 'IF', $.condition)
	,seq('IF', $.condition, 'THEN', $.statement)
),

simple_statement: $ => choice(
	seq($.identity, optional($.holds), $.subject, $.modal_verb, $.verb, $.object, $.date)
	,seq($.identity, optional($.holds), $.subject, $.date, $.modal_verb, $.verb, $.object)
	,seq($.identity, optional($.holds), $.date, $.subject, $.modal_verb, $.verb, $.object)
),

condition: $ => choice(
	$.simple_condition
	,seq($.simple_condition, 'OR', $.condition)
	,seq($.simple_condition, 'AND', $.condition)
),

simple_condition: $ => choice(
	seq($.identity, optional($.holds), $.subject, $.verb_status, $.object, $.date)
	,seq($.identity, optional($.holds), $.subject, $.date, $.verb_status, $.object)
	,seq($.identity, optional($.holds), $.date, $.subject, $.verb_status, $.object)
	,seq($.identity, optional($.holds), $.subject, $.modal_verb, $.verb, $.object, $.date)
	,seq($.identity, optional($.holds), $.boolean_expression)
),

boolean_expression: $ => (seq($.subject, $.verb_status, $.comparison, $.subject)
),

identity: $ => choice(
	seq("[", $.num, "]")
	,seq("[", $.num, "(", $.num, ")", "]")
),

holds: $ => choice(
	"it is the case that"
	,"it is not the case that"
),

subject: $ => ($.string
),

verb: $ => choice(
	'DELIVER'
	,'deliver'
	,'PAY'
	,'pay'
	,'CHARGE'
	,'charge'
),

verb_status: $ => choice(
	'DELIVERED'
	,'delivered'
	,'PAID'
	,'paid'
	,'CHARGED'
	,'charged'
),

comparison: $ => choice(
	seq('LESS', 'THAN')
	,seq('less', 'than')
	,seq('EQUAL', 'TO')
	,'equals'
	,seq('equal', 'to')
	,seq('MORE', 'THAN')
	,seq('more', 'than')
	,seq('greater', 'than')
),

modal_verb: $ => choice(
	'OBLIGATION'
	,'shall'
	,'must'
	,'PERMISSION'
	,'may'
	,'PROHIBITION'
	,seq('is', 'forbidden', 'to')
),

date: $ => choice(
	seq("on the", $.num, $.month, $.num)
	,seq("on", 'ANYDATE')
	,seq("on", 'ADATE')
	,seq("on", 'THEDATE')
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
),

object: $ => choice(
	$.numerical_object
	,$.nonnumerical_object
),

numerical_object: $ => choice(
	seq(choice(
	'POUNDS'
	,'GBP'
	,'pounds'
	,'quid'
), $.num)
	,seq(choice(
	'DOLLARS'
	,'USD'
	,'dollars'
	,'bucks'
), $.num)
	,seq(choice(
	'EUROS'
	,'EUR'
	,'euros'
), $.num)
	,seq('AMOUNT', $.subject)
),

nonnumerical_object: $ => choice(
	seq('SOMECURRENCY', $.string)
	,seq('REPORT', $.string)
	,seq('NAMEDOBJECT', $.string)
	,seq('OTHEROBJECT', $.string)
),

string: $ => (/[a-zA-Z\-.]+/
),

num: $ => (/[0-9]+/
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
