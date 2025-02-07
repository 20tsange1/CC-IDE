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
contract: $ => (seq(alias($.component, $.clause), repeat((seq('C-AND', alias($.component, $.clause))
)))
),

component: $ => choice(
	$.component_definition
	,$.conditional_definition
	,$.component_statement
	,$.conditional_statement
),

component_definition: $ => (seq($.definition, repeat((seq('AND', $.definition)
)))
),

definition: $ => choice(
	seq($.ID, $.subject, 'IS', $.subject)
	,seq($.ID, $.subject, 'EQUALS', $.numerical_expression)
),

numerical_expression: $ => prec.left(choice(
	$.num
	,$.numerical_object
	,seq($.numerical_expression, $.operator, $.numerical_expression)
)),

operator: $ => choice(
	'PLUS'
	,'MINUS'
	,'TIMES'
	,'DIVIDE'
),

conditional_definition: $ => choice(
	seq($.component_definition, 'IF', $.component_condition)
	,seq('IF', $.component_condition, 'THEN', $.component_definition)
	,seq($.component_definition, 'IF', $.component_condition, $.else, $.component_definition)
	,seq('IF', $.component_condition, 'THEN', $.component_definition, $.else, $.component_definition)
),

component_statement: $ => (seq($.statement, repeat((seq('AND', $.statement)
)), repeat((seq('OR', $.statement)
)))
),

conditional_statement: $ => choice(
	seq($.component_statement, 'IF', $.condition)
	,seq('IF', $.component_condition, 'THEN', $.component_statement)
	,seq($.component_statement, 'IF', $.component_condition, $.else, $.component_statement)
	,seq('IF', $.component_condition, 'THEN', $.component_statement, $.else, $.component_statement)
),

else: $ => (choice(
	'ELSE'
	,'OTHERWISE'
)
),

statement: $ => prec.right(choice(
	seq($.ID, optional($.holds), $.subject, $.modal_verb, $.verb, $.object, $.receiver, $.date)
	,seq($.ID, optional($.holds), $.subject, $.date, $.modal_verb, $.verb, $.object, $.receiver)
	,seq($.ID, optional($.holds), $.date, $.subject, $.modal_verb, $.verb, $.object, $.receiver)
	,seq($.ID, optional($.holds), $.subject, $.verb_status, $.object, $.receiver, $.date)
)),

component_condition: $ => prec.right(choice(
	seq($.condition, repeat((seq($.or, $.condition)
)))
	,seq($.condition, repeat((seq($.and, $.condition)
)))
)),

and: $ => ('AND'
),

or: $ => ('OR'
),

condition: $ => prec.right(choice(
	seq($.ID, optional($.holds), $.subject, $.verb_status, $.object, $.receiver, $.date)
	,seq($.ID, optional($.holds), $.subject, $.date, $.verb_status, $.object, $.receiver)
	,seq($.ID, optional($.holds), $.date, $.subject, $.verb_status, $.object, $.receiver)
	,seq($.ID, optional($.holds), $.subject, $.modal_verb, $.verb, $.object, $.receiver, $.date)
	,seq($.ID, optional($.holds), $.boolean_expression)
)),

boolean_expression: $ => (seq($.subject, $.verb_status, $.comparison, $.subject)
),

ID: $ => prec.right(choice(
	seq('[', $.num, ']')
	,seq('[', $.num, ($.num
), ']')
)),

holds: $ => choice(
	seq('it', 'is', 'the', 'case', 'that')
	,seq('it', 'is', 'not', 'the', 'case', 'that')
),

subject: $ => ($.string
),

verb: $ => choice(
	'deliver'
	,'pay'
	,'charge'
	,'refund'
),

verb_status: $ => choice(
	'delivered'
	,'paid'
	,'charged'
	,'refunded'
),

comparison: $ => choice(
	seq('less', 'than')
	,$.equal
	,$.more_than
),

equal: $ => choice(
	'equals'
	,seq('equal', 'to')
),

more_than: $ => choice(
	seq('more', 'than')
	,seq('greater', 'than')
),

modal_verb: $ => choice(
	$.obligation
	,'may'
	,seq('is', 'forbidden', 'to')
),

obligation: $ => choice(
	'shall'
	,'must'
),

date: $ => choice(
	$.specific_date
	,seq('on', 'ANYDATE')
	,seq('on', 'SOMEDATE', $.subject)
	,seq('on', 'THEDATE', $.subject)
	,seq($.temporal_quantifier, $.num, $.month, $.num)
	,seq($.temporal_quantifier, 'SOMEDATE', $.subject)
	,seq($.temporal_quantifier, 'THEDATE', $.subject)
	,seq($.temporal_offset, $.temporal_quantifier, 'SOMEDATE', $.subject)
	,seq($.temporal_offset, $.temporal_quantifier, 'THEDATE', $.subject)
	,seq($.temporal_quantifier, $.temporal_offset, $.temporal_quantifier, 'SOMEDATE', $.subject)
	,seq($.temporal_quantifier, $.temporal_offset, $.temporal_quantifier, 'THEDATE', $.subject)
),

temporal_quantifier: $ => choice(
	'before'
	,'after'
),

specific_date: $ => choice(
	seq('on', 'the', $.num, $.month, $.num)
	,seq('on', $.num, $.month, $.num)
),

temporal_offset: $ => choice(
	seq($.num, 'day')
	,seq($.num, 'week')
	,seq($.num, 'year')
	,seq($.num, 'days')
	,seq($.num, 'weeks')
	,seq($.num, 'years')
),

month: $ => choice(
	'January'
	,'February'
	,'March'
	,'April'
	,'May'
	,'June'
	,'July'
	,'August'
	,'September'
	,'October'
	,'November'
	,'December'
),

object: $ => choice(
	$.numerical_object
	,$.nonnumerical_object
),

numerical_object: $ => choice(
	seq($.pounds, $.num)
	,seq($.dollars, $.num)
	,seq($.euros, $.num)
	,seq('AMOUNT', $.subject)
),

nonnumerical_object: $ => choice(
	seq('SOMECURRENCY', $.string)
	,seq('REPORT', $.string)
	,seq('NAMEDOBJECT', $.string)
	,seq('OTHEROBJECT', $.string)
),

pounds: $ => choice(
	'GBP'
	,'POUNDS'
	,'quid'
),

dollars: $ => choice(
	'USD'
	,'DOLLARS'
	,'buck'
),

euros: $ => choice(
	'EUR'
	,'EUROS'
),

receiver: $ => (seq('to', $.subject)
),

string: $ => (/[a-zA-Z]+/
),

num: $ => (/[0-9]+/
),

  }
});
