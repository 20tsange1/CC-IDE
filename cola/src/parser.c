#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_C_DASHAND = 1,
  anon_sym_AND = 2,
  anon_sym_IS = 3,
  anon_sym_EQUALS = 4,
  anon_sym_PLUS = 5,
  anon_sym_MINUS = 6,
  anon_sym_TIMES = 7,
  anon_sym_DIVIDE = 8,
  anon_sym_IF = 9,
  anon_sym_THEN = 10,
  anon_sym_OR = 11,
  anon_sym_ELSE = 12,
  anon_sym_OTHERWISE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_it = 16,
  anon_sym_is = 17,
  anon_sym_the = 18,
  anon_sym_case = 19,
  anon_sym_that = 20,
  anon_sym_not = 21,
  anon_sym_deliver = 22,
  anon_sym_pay = 23,
  anon_sym_charge = 24,
  anon_sym_refund = 25,
  anon_sym_delivered = 26,
  anon_sym_paid = 27,
  anon_sym_charged = 28,
  anon_sym_refunded = 29,
  anon_sym_less = 30,
  anon_sym_than = 31,
  anon_sym_equals = 32,
  anon_sym_equal = 33,
  anon_sym_to = 34,
  anon_sym_more = 35,
  anon_sym_greater = 36,
  anon_sym_may = 37,
  anon_sym_forbidden = 38,
  anon_sym_shall = 39,
  anon_sym_must = 40,
  anon_sym_on = 41,
  anon_sym_ANYDATE = 42,
  anon_sym_SOMEDATE = 43,
  anon_sym_THEDATE = 44,
  anon_sym_before = 45,
  anon_sym_after = 46,
  anon_sym_day = 47,
  anon_sym_week = 48,
  anon_sym_year = 49,
  anon_sym_days = 50,
  anon_sym_weeks = 51,
  anon_sym_years = 52,
  anon_sym_January = 53,
  anon_sym_February = 54,
  anon_sym_March = 55,
  anon_sym_April = 56,
  anon_sym_May = 57,
  anon_sym_June = 58,
  anon_sym_July = 59,
  anon_sym_August = 60,
  anon_sym_September = 61,
  anon_sym_October = 62,
  anon_sym_November = 63,
  anon_sym_December = 64,
  anon_sym_AMOUNT = 65,
  anon_sym_SOMECURRENCY = 66,
  anon_sym_REPORT = 67,
  anon_sym_NAMEDOBJECT = 68,
  anon_sym_OTHEROBJECT = 69,
  anon_sym_GBP = 70,
  anon_sym_POUNDS = 71,
  anon_sym_quid = 72,
  anon_sym_USD = 73,
  anon_sym_DOLLARS = 74,
  anon_sym_buck = 75,
  anon_sym_EUR = 76,
  anon_sym_EUROS = 77,
  sym_string = 78,
  sym_num = 79,
  sym_contract = 80,
  sym_component = 81,
  sym_component_definition = 82,
  sym_definition = 83,
  sym_numerical_expression = 84,
  sym_operator = 85,
  sym_conditional_definition = 86,
  sym_component_statement = 87,
  sym_conditional_statement = 88,
  sym_else = 89,
  sym_statement = 90,
  sym_component_condition = 91,
  sym_and = 92,
  sym_or = 93,
  sym_condition = 94,
  sym_boolean_expression = 95,
  sym_ID = 96,
  sym_holds = 97,
  sym_subject = 98,
  sym_verb = 99,
  sym_verb_status = 100,
  sym_comparison = 101,
  sym_equal = 102,
  sym_more_than = 103,
  sym_modal_verb = 104,
  sym_obligation = 105,
  sym_date = 106,
  sym_temporal_quantifier = 107,
  sym_specific_date = 108,
  sym_temporal_offset = 109,
  sym_month = 110,
  sym_object = 111,
  sym_numerical_object = 112,
  sym_nonnumerical_object = 113,
  sym_pounds = 114,
  sym_dollars = 115,
  sym_euros = 116,
  sym_receiver = 117,
  aux_sym_contract_repeat1 = 118,
  aux_sym_component_definition_repeat1 = 119,
  aux_sym_component_statement_repeat1 = 120,
  aux_sym_component_statement_repeat2 = 121,
  aux_sym_component_condition_repeat1 = 122,
  aux_sym_component_condition_repeat2 = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_C_DASHAND] = "C-AND",
  [anon_sym_AND] = "AND",
  [anon_sym_IS] = "IS",
  [anon_sym_EQUALS] = "EQUALS",
  [anon_sym_PLUS] = "PLUS",
  [anon_sym_MINUS] = "MINUS",
  [anon_sym_TIMES] = "TIMES",
  [anon_sym_DIVIDE] = "DIVIDE",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_OR] = "OR",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_OTHERWISE] = "OTHERWISE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_the] = "the",
  [anon_sym_case] = "case",
  [anon_sym_that] = "that",
  [anon_sym_not] = "not",
  [anon_sym_deliver] = "deliver",
  [anon_sym_pay] = "pay",
  [anon_sym_charge] = "charge",
  [anon_sym_refund] = "refund",
  [anon_sym_delivered] = "delivered",
  [anon_sym_paid] = "paid",
  [anon_sym_charged] = "charged",
  [anon_sym_refunded] = "refunded",
  [anon_sym_less] = "less",
  [anon_sym_than] = "than",
  [anon_sym_equals] = "equals",
  [anon_sym_equal] = "equal",
  [anon_sym_to] = "to",
  [anon_sym_more] = "more",
  [anon_sym_greater] = "greater",
  [anon_sym_may] = "may",
  [anon_sym_forbidden] = "forbidden",
  [anon_sym_shall] = "shall",
  [anon_sym_must] = "must",
  [anon_sym_on] = "on",
  [anon_sym_ANYDATE] = "ANYDATE",
  [anon_sym_SOMEDATE] = "SOMEDATE",
  [anon_sym_THEDATE] = "THEDATE",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_day] = "day",
  [anon_sym_week] = "week",
  [anon_sym_year] = "year",
  [anon_sym_days] = "days",
  [anon_sym_weeks] = "weeks",
  [anon_sym_years] = "years",
  [anon_sym_January] = "January",
  [anon_sym_February] = "February",
  [anon_sym_March] = "March",
  [anon_sym_April] = "April",
  [anon_sym_May] = "May",
  [anon_sym_June] = "June",
  [anon_sym_July] = "July",
  [anon_sym_August] = "August",
  [anon_sym_September] = "September",
  [anon_sym_October] = "October",
  [anon_sym_November] = "November",
  [anon_sym_December] = "December",
  [anon_sym_AMOUNT] = "AMOUNT",
  [anon_sym_SOMECURRENCY] = "SOMECURRENCY",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_NAMEDOBJECT] = "NAMEDOBJECT",
  [anon_sym_OTHEROBJECT] = "OTHEROBJECT",
  [anon_sym_GBP] = "GBP",
  [anon_sym_POUNDS] = "POUNDS",
  [anon_sym_quid] = "quid",
  [anon_sym_USD] = "USD",
  [anon_sym_DOLLARS] = "DOLLARS",
  [anon_sym_buck] = "buck",
  [anon_sym_EUR] = "EUR",
  [anon_sym_EUROS] = "EUROS",
  [sym_string] = "string",
  [sym_num] = "num",
  [sym_contract] = "contract",
  [sym_component] = "clause",
  [sym_component_definition] = "component_definition",
  [sym_definition] = "definition",
  [sym_numerical_expression] = "numerical_expression",
  [sym_operator] = "operator",
  [sym_conditional_definition] = "conditional_definition",
  [sym_component_statement] = "component_statement",
  [sym_conditional_statement] = "conditional_statement",
  [sym_else] = "else",
  [sym_statement] = "statement",
  [sym_component_condition] = "component_condition",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_condition] = "condition",
  [sym_boolean_expression] = "boolean_expression",
  [sym_ID] = "ID",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_comparison] = "comparison",
  [sym_equal] = "equal",
  [sym_more_than] = "more_than",
  [sym_modal_verb] = "modal_verb",
  [sym_obligation] = "obligation",
  [sym_date] = "date",
  [sym_temporal_quantifier] = "temporal_quantifier",
  [sym_specific_date] = "specific_date",
  [sym_temporal_offset] = "temporal_offset",
  [sym_month] = "month",
  [sym_object] = "object",
  [sym_numerical_object] = "numerical_object",
  [sym_nonnumerical_object] = "nonnumerical_object",
  [sym_pounds] = "pounds",
  [sym_dollars] = "dollars",
  [sym_euros] = "euros",
  [sym_receiver] = "receiver",
  [aux_sym_contract_repeat1] = "contract_repeat1",
  [aux_sym_component_definition_repeat1] = "component_definition_repeat1",
  [aux_sym_component_statement_repeat1] = "component_statement_repeat1",
  [aux_sym_component_statement_repeat2] = "component_statement_repeat2",
  [aux_sym_component_condition_repeat1] = "component_condition_repeat1",
  [aux_sym_component_condition_repeat2] = "component_condition_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_C_DASHAND] = anon_sym_C_DASHAND,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_EQUALS] = anon_sym_EQUALS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_MINUS] = anon_sym_MINUS,
  [anon_sym_TIMES] = anon_sym_TIMES,
  [anon_sym_DIVIDE] = anon_sym_DIVIDE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_OTHERWISE] = anon_sym_OTHERWISE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_the] = anon_sym_the,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_pay] = anon_sym_pay,
  [anon_sym_charge] = anon_sym_charge,
  [anon_sym_refund] = anon_sym_refund,
  [anon_sym_delivered] = anon_sym_delivered,
  [anon_sym_paid] = anon_sym_paid,
  [anon_sym_charged] = anon_sym_charged,
  [anon_sym_refunded] = anon_sym_refunded,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_than] = anon_sym_than,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_equal] = anon_sym_equal,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_more] = anon_sym_more,
  [anon_sym_greater] = anon_sym_greater,
  [anon_sym_may] = anon_sym_may,
  [anon_sym_forbidden] = anon_sym_forbidden,
  [anon_sym_shall] = anon_sym_shall,
  [anon_sym_must] = anon_sym_must,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ANYDATE] = anon_sym_ANYDATE,
  [anon_sym_SOMEDATE] = anon_sym_SOMEDATE,
  [anon_sym_THEDATE] = anon_sym_THEDATE,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_January] = anon_sym_January,
  [anon_sym_February] = anon_sym_February,
  [anon_sym_March] = anon_sym_March,
  [anon_sym_April] = anon_sym_April,
  [anon_sym_May] = anon_sym_May,
  [anon_sym_June] = anon_sym_June,
  [anon_sym_July] = anon_sym_July,
  [anon_sym_August] = anon_sym_August,
  [anon_sym_September] = anon_sym_September,
  [anon_sym_October] = anon_sym_October,
  [anon_sym_November] = anon_sym_November,
  [anon_sym_December] = anon_sym_December,
  [anon_sym_AMOUNT] = anon_sym_AMOUNT,
  [anon_sym_SOMECURRENCY] = anon_sym_SOMECURRENCY,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_NAMEDOBJECT] = anon_sym_NAMEDOBJECT,
  [anon_sym_OTHEROBJECT] = anon_sym_OTHEROBJECT,
  [anon_sym_GBP] = anon_sym_GBP,
  [anon_sym_POUNDS] = anon_sym_POUNDS,
  [anon_sym_quid] = anon_sym_quid,
  [anon_sym_USD] = anon_sym_USD,
  [anon_sym_DOLLARS] = anon_sym_DOLLARS,
  [anon_sym_buck] = anon_sym_buck,
  [anon_sym_EUR] = anon_sym_EUR,
  [anon_sym_EUROS] = anon_sym_EUROS,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [sym_contract] = sym_contract,
  [sym_component] = sym_component,
  [sym_component_definition] = sym_component_definition,
  [sym_definition] = sym_definition,
  [sym_numerical_expression] = sym_numerical_expression,
  [sym_operator] = sym_operator,
  [sym_conditional_definition] = sym_conditional_definition,
  [sym_component_statement] = sym_component_statement,
  [sym_conditional_statement] = sym_conditional_statement,
  [sym_else] = sym_else,
  [sym_statement] = sym_statement,
  [sym_component_condition] = sym_component_condition,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_condition] = sym_condition,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_ID] = sym_ID,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_comparison] = sym_comparison,
  [sym_equal] = sym_equal,
  [sym_more_than] = sym_more_than,
  [sym_modal_verb] = sym_modal_verb,
  [sym_obligation] = sym_obligation,
  [sym_date] = sym_date,
  [sym_temporal_quantifier] = sym_temporal_quantifier,
  [sym_specific_date] = sym_specific_date,
  [sym_temporal_offset] = sym_temporal_offset,
  [sym_month] = sym_month,
  [sym_object] = sym_object,
  [sym_numerical_object] = sym_numerical_object,
  [sym_nonnumerical_object] = sym_nonnumerical_object,
  [sym_pounds] = sym_pounds,
  [sym_dollars] = sym_dollars,
  [sym_euros] = sym_euros,
  [sym_receiver] = sym_receiver,
  [aux_sym_contract_repeat1] = aux_sym_contract_repeat1,
  [aux_sym_component_definition_repeat1] = aux_sym_component_definition_repeat1,
  [aux_sym_component_statement_repeat1] = aux_sym_component_statement_repeat1,
  [aux_sym_component_statement_repeat2] = aux_sym_component_statement_repeat2,
  [aux_sym_component_condition_repeat1] = aux_sym_component_condition_repeat1,
  [aux_sym_component_condition_repeat2] = aux_sym_component_condition_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_C_DASHAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIVIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OTHERWISE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refund] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delivered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refunded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_more] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANYDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOMEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_January] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_February] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_March] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_April] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_June] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_July] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_August] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_September] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_October] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_November] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_December] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMOUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOMECURRENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAMEDOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OTHEROBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GBP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUROS] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_component_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_component_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_holds] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_status] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_more_than] = {
    .visible = true,
    .named = true,
  },
  [sym_modal_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_obligation] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_specific_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_nonnumerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pounds] = {
    .visible = true,
    .named = true,
  },
  [sym_dollars] = {
    .visible = true,
    .named = true,
  },
  [sym_euros] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_contract_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_condition_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 98,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 118,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 133,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 136,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 147,
  [167] = 167,
  [168] = 168,
  [169] = 164,
  [170] = 165,
  [171] = 168,
  [172] = 172,
  [173] = 28,
  [174] = 24,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 26,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 25,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 23,
  [192] = 192,
  [193] = 193,
  [194] = 2,
  [195] = 195,
  [196] = 89,
  [197] = 197,
  [198] = 198,
  [199] = 82,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 177,
  [213] = 206,
  [214] = 214,
  [215] = 208,
  [216] = 200,
  [217] = 210,
  [218] = 27,
  [219] = 219,
  [220] = 22,
  [221] = 221,
  [222] = 219,
  [223] = 223,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(295);
      ADVANCE_MAP(
        'A', 62,
        'C', 1,
        'D', 48,
        'E', 56,
        'F', 155,
        'G', 9,
        'I', 42,
        'J', 121,
        'M', 50,
        'N', 2,
        'O', 80,
        'P', 59,
        'R', 35,
        'S', 76,
        'T', 43,
        'U', 89,
        '[', 309,
        ']', 310,
        'a', 190,
        'b', 164,
        'c', 115,
        'd', 116,
        'e', 238,
        'f', 233,
        'g', 254,
        'i', 262,
        'l', 165,
        'm', 122,
        'n', 235,
        'o', 225,
        'p', 117,
        'q', 275,
        'r', 167,
        's', 201,
        't', 200,
        'w', 171,
        'y', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(297);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(297);
      if (lookahead == 'Y') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(375);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(296);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(305);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(344);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(298);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'H') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'J') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'J') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'Q') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'Q') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 61:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 63:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(305);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead == 'W') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(372);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(378);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(300);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(379);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(301);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(302);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(373);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(376);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(367);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(369);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(370);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(371);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'U') ADVANCE(5);
      END_STATE();
    case 107:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 111:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'V') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'W') ADVANCE(52);
      END_STATE();
    case 114:
      if (lookahead == 'Y') ADVANCE(368);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(385);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'o') ADVANCE(385);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(144);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 212:
      if (lookahead == 'k') ADVANCE(377);
      END_STATE();
    case 213:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 224:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 238:
      if (lookahead == 'q') ADVANCE(277);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(359);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 287:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 289:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(361);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 293:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 294:
      if (eof) ADVANCE(295);
      ADVANCE_MAP(
        'A', 71,
        'C', 1,
        'D', 47,
        'E', 55,
        'I', 42,
        'M', 49,
        'O', 81,
        'P', 58,
        'T', 45,
        'a', 190,
        'b', 163,
        'c', 202,
        'd', 188,
        'i', 261,
        'm', 123,
        'o', 225,
        'p', 132,
        'r', 185,
        's', 201,
        't', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_OTHERWISE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_charge);
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_refund);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_refund);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_refunded);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_buck);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 294},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 294},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 294},
  [8] = {.lex_state = 294},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 294},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 294},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 294},
  [23] = {.lex_state = 294},
  [24] = {.lex_state = 294},
  [25] = {.lex_state = 294},
  [26] = {.lex_state = 294},
  [27] = {.lex_state = 294},
  [28] = {.lex_state = 294},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 119},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 119},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 120},
  [92] = {.lex_state = 144},
  [93] = {.lex_state = 144},
  [94] = {.lex_state = 144},
  [95] = {.lex_state = 144},
  [96] = {.lex_state = 294},
  [97] = {.lex_state = 144},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 294},
  [100] = {.lex_state = 144},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 144},
  [106] = {.lex_state = 144},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 144},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 293},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 293},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 293},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 293},
  [144] = {.lex_state = 293},
  [145] = {.lex_state = 293},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 293},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 293},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 293},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 293},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 293},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 293},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 293},
  [167] = {.lex_state = 293},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 293},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 293},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 293},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 293},
  [182] = {.lex_state = 293},
  [183] = {.lex_state = 293},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 293},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 293},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 293},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 293},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 293},
  [204] = {.lex_state = 293},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 293},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 293},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 293},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_C_DASHAND] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_EQUALS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_MINUS] = ACTIONS(1),
    [anon_sym_TIMES] = ACTIONS(1),
    [anon_sym_DIVIDE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_OTHERWISE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_pay] = ACTIONS(1),
    [anon_sym_charge] = ACTIONS(1),
    [anon_sym_refund] = ACTIONS(1),
    [anon_sym_delivered] = ACTIONS(1),
    [anon_sym_paid] = ACTIONS(1),
    [anon_sym_charged] = ACTIONS(1),
    [anon_sym_refunded] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_equal] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_more] = ACTIONS(1),
    [anon_sym_greater] = ACTIONS(1),
    [anon_sym_may] = ACTIONS(1),
    [anon_sym_forbidden] = ACTIONS(1),
    [anon_sym_shall] = ACTIONS(1),
    [anon_sym_must] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ANYDATE] = ACTIONS(1),
    [anon_sym_SOMEDATE] = ACTIONS(1),
    [anon_sym_THEDATE] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_January] = ACTIONS(1),
    [anon_sym_February] = ACTIONS(1),
    [anon_sym_March] = ACTIONS(1),
    [anon_sym_April] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_June] = ACTIONS(1),
    [anon_sym_July] = ACTIONS(1),
    [anon_sym_August] = ACTIONS(1),
    [anon_sym_September] = ACTIONS(1),
    [anon_sym_October] = ACTIONS(1),
    [anon_sym_November] = ACTIONS(1),
    [anon_sym_December] = ACTIONS(1),
    [anon_sym_AMOUNT] = ACTIONS(1),
    [anon_sym_SOMECURRENCY] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_NAMEDOBJECT] = ACTIONS(1),
    [anon_sym_OTHEROBJECT] = ACTIONS(1),
    [anon_sym_GBP] = ACTIONS(1),
    [anon_sym_POUNDS] = ACTIONS(1),
    [anon_sym_quid] = ACTIONS(1),
    [anon_sym_USD] = ACTIONS(1),
    [anon_sym_DOLLARS] = ACTIONS(1),
    [anon_sym_buck] = ACTIONS(1),
    [anon_sym_EUR] = ACTIONS(1),
    [anon_sym_EUROS] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(209),
    [sym_component] = STATE(124),
    [sym_component_definition] = STATE(122),
    [sym_definition] = STATE(78),
    [sym_conditional_definition] = STATE(159),
    [sym_component_statement] = STATE(132),
    [sym_conditional_statement] = STATE(159),
    [sym_statement] = STATE(50),
    [sym_ID] = STATE(37),
    [anon_sym_IF] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 27,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IS,
      anon_sym_EQUALS,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_to,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [30] = 15,
    ACTIONS(9), 1,
      anon_sym_less,
    ACTIONS(11), 1,
      anon_sym_equals,
    ACTIONS(13), 1,
      anon_sym_equal,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(134), 1,
      sym_comparison,
    STATE(135), 1,
      sym_object,
    ACTIONS(15), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(182), 2,
      sym_equal,
      sym_more_than,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [88] = 15,
    ACTIONS(9), 1,
      anon_sym_less,
    ACTIONS(11), 1,
      anon_sym_equals,
    ACTIONS(13), 1,
      anon_sym_equal,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(134), 1,
      sym_comparison,
    STATE(150), 1,
      sym_object,
    ACTIONS(15), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(182), 2,
      sym_equal,
      sym_more_than,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [146] = 16,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(11), 1,
      sym_verb_status,
    STATE(23), 1,
      sym_specific_date,
    STATE(79), 1,
      sym_date,
    STATE(100), 1,
      sym_modal_verb,
    STATE(109), 1,
      sym_obligation,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [200] = 4,
    STATE(213), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [228] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(3), 1,
      sym_verb_status,
    STATE(23), 1,
      sym_specific_date,
    STATE(93), 1,
      sym_modal_verb,
    STATE(99), 1,
      sym_date,
    STATE(109), 1,
      sym_obligation,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [276] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(11), 1,
      sym_verb_status,
    STATE(23), 1,
      sym_specific_date,
    STATE(79), 1,
      sym_date,
    STATE(100), 1,
      sym_modal_verb,
    STATE(109), 1,
      sym_obligation,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [324] = 4,
    STATE(206), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [352] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(13), 1,
      sym_verb_status,
    STATE(23), 1,
      sym_specific_date,
    STATE(85), 1,
      sym_date,
    STATE(92), 1,
      sym_modal_verb,
    STATE(109), 1,
      sym_obligation,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [400] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(163), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [438] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(4), 1,
      sym_verb_status,
    STATE(23), 1,
      sym_specific_date,
    STATE(95), 1,
      sym_modal_verb,
    STATE(96), 1,
      sym_date,
    STATE(109), 1,
      sym_obligation,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [486] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(140), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [524] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(150), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [562] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(151), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [600] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(153), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [638] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(161), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [676] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(157), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [714] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(158), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [752] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(155), 1,
      sym_object,
    STATE(202), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [790] = 2,
    ACTIONS(55), 2,
      anon_sym_equal,
      anon_sym_EUR,
    ACTIONS(53), 16,
      anon_sym_less,
      anon_sym_equals,
      anon_sym_more,
      anon_sym_greater,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [813] = 1,
    ACTIONS(57), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [832] = 1,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [851] = 1,
    ACTIONS(61), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [870] = 1,
    ACTIONS(63), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [889] = 1,
    ACTIONS(65), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [908] = 1,
    ACTIONS(67), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [927] = 1,
    ACTIONS(69), 16,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [946] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    ACTIONS(71), 1,
      sym_num,
    STATE(44), 1,
      sym_numerical_expression,
    STATE(49), 1,
      sym_numerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [980] = 9,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    ACTIONS(71), 1,
      sym_num,
    STATE(43), 1,
      sym_numerical_expression,
    STATE(49), 1,
      sym_numerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [1014] = 2,
    STATE(215), 1,
      sym_month,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [1032] = 2,
    STATE(177), 1,
      sym_month,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [1050] = 12,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(42), 1,
      sym_holds,
    STATE(65), 1,
      sym_boolean_expression,
    STATE(115), 1,
      sym_temporal_quantifier,
    STATE(118), 1,
      sym_temporal_offset,
    STATE(167), 1,
      sym_date,
    STATE(191), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1088] = 2,
    STATE(208), 1,
      sym_month,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [1106] = 2,
    STATE(212), 1,
      sym_month,
    ACTIONS(51), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [1124] = 2,
    ACTIONS(83), 1,
      anon_sym_EUR,
    ACTIONS(81), 12,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [1142] = 11,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(5), 1,
      sym_subject,
    STATE(47), 1,
      sym_holds,
    STATE(115), 1,
      sym_temporal_quantifier,
    STATE(118), 1,
      sym_temporal_offset,
    STATE(156), 1,
      sym_date,
    STATE(191), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1177] = 11,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(8), 1,
      sym_subject,
    STATE(47), 1,
      sym_holds,
    STATE(115), 1,
      sym_temporal_quantifier,
    STATE(118), 1,
      sym_temporal_offset,
    STATE(156), 1,
      sym_date,
    STATE(191), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1212] = 1,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1227] = 1,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
      anon_sym_to,
  [1241] = 7,
    ACTIONS(91), 1,
      anon_sym_AND,
    ACTIONS(93), 1,
      anon_sym_OR,
    STATE(60), 1,
      aux_sym_component_condition_repeat2,
    STATE(61), 1,
      aux_sym_component_condition_repeat1,
    STATE(120), 1,
      sym_and,
    STATE(129), 1,
      sym_or,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1267] = 10,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(12), 1,
      sym_subject,
    STATE(64), 1,
      sym_boolean_expression,
    STATE(115), 1,
      sym_temporal_quantifier,
    STATE(118), 1,
      sym_temporal_offset,
    STATE(141), 1,
      sym_date,
    STATE(191), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1299] = 2,
    STATE(30), 1,
      sym_operator,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1315] = 3,
    STATE(30), 1,
      sym_operator,
    ACTIONS(99), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1333] = 9,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(50), 1,
      sym_statement,
    STATE(78), 1,
      sym_definition,
    STATE(122), 1,
      sym_component_definition,
    STATE(132), 1,
      sym_component_statement,
    STATE(137), 1,
      sym_component,
    STATE(159), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1362] = 2,
    ACTIONS(103), 1,
      anon_sym_EUR,
    ACTIONS(101), 9,
      anon_sym_AMOUNT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
      sym_num,
  [1377] = 9,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(10), 1,
      sym_subject,
    STATE(115), 1,
      sym_temporal_quantifier,
    STATE(118), 1,
      sym_temporal_offset,
    STATE(143), 1,
      sym_date,
    STATE(191), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1406] = 8,
    ACTIONS(91), 1,
      anon_sym_AND,
    ACTIONS(93), 1,
      anon_sym_OR,
    STATE(60), 1,
      aux_sym_component_condition_repeat2,
    STATE(61), 1,
      aux_sym_component_condition_repeat1,
    STATE(120), 1,
      sym_and,
    STATE(129), 1,
      sym_or,
    ACTIONS(89), 2,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1433] = 1,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1446] = 5,
    ACTIONS(111), 1,
      anon_sym_AND,
    ACTIONS(113), 1,
      anon_sym_OR,
    STATE(51), 1,
      aux_sym_component_statement_repeat1,
    STATE(73), 1,
      aux_sym_component_statement_repeat2,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1466] = 5,
    ACTIONS(111), 1,
      anon_sym_AND,
    ACTIONS(113), 1,
      anon_sym_OR,
    STATE(52), 1,
      aux_sym_component_statement_repeat1,
    STATE(70), 1,
      aux_sym_component_statement_repeat2,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1486] = 3,
    ACTIONS(119), 1,
      anon_sym_AND,
    STATE(52), 1,
      aux_sym_component_statement_repeat1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1501] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(72), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1524] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(74), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1547] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(63), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1570] = 4,
    ACTIONS(124), 1,
      anon_sym_AND,
    STATE(56), 1,
      aux_sym_component_condition_repeat2,
    STATE(120), 1,
      sym_and,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1587] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(76), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1610] = 4,
    ACTIONS(129), 1,
      anon_sym_OR,
    STATE(58), 1,
      aux_sym_component_condition_repeat1,
    STATE(129), 1,
      sym_or,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1627] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(75), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1650] = 4,
    ACTIONS(91), 1,
      anon_sym_AND,
    STATE(56), 1,
      aux_sym_component_condition_repeat2,
    STATE(120), 1,
      sym_and,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1667] = 4,
    ACTIONS(93), 1,
      anon_sym_OR,
    STATE(58), 1,
      aux_sym_component_condition_repeat1,
    STATE(129), 1,
      sym_or,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1684] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(23), 1,
      sym_specific_date,
    STATE(77), 1,
      sym_date,
    STATE(114), 1,
      sym_temporal_quantifier,
    STATE(128), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1707] = 1,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1717] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1727] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1737] = 3,
    ACTIONS(142), 1,
      anon_sym_AND,
    STATE(67), 1,
      aux_sym_component_definition_repeat1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1751] = 3,
    ACTIONS(146), 1,
      anon_sym_AND,
    STATE(67), 1,
      aux_sym_component_definition_repeat1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1765] = 1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1775] = 1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1785] = 3,
    ACTIONS(113), 1,
      anon_sym_OR,
    STATE(71), 1,
      aux_sym_component_statement_repeat2,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1799] = 3,
    ACTIONS(155), 1,
      anon_sym_OR,
    STATE(71), 1,
      aux_sym_component_statement_repeat2,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1813] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1823] = 3,
    ACTIONS(113), 1,
      anon_sym_OR,
    STATE(71), 1,
      aux_sym_component_statement_repeat2,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1837] = 1,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1847] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1857] = 1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1867] = 1,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1877] = 3,
    ACTIONS(142), 1,
      anon_sym_AND,
    STATE(66), 1,
      aux_sym_component_definition_repeat1,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1891] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(94), 1,
      sym_modal_verb,
    STATE(109), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1908] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(50), 1,
      sym_statement,
    STATE(78), 1,
      sym_definition,
    STATE(101), 1,
      sym_component_definition,
    STATE(102), 1,
      sym_component_statement,
  [1927] = 1,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1936] = 2,
    ACTIONS(172), 1,
      sym_num,
    ACTIONS(170), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1947] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1956] = 1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1965] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(97), 1,
      sym_modal_verb,
    STATE(109), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1982] = 1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [1991] = 2,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [2002] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [2011] = 2,
    ACTIONS(176), 1,
      sym_num,
    ACTIONS(174), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [2022] = 3,
    STATE(116), 1,
      sym_else,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
    ACTIONS(180), 2,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [2034] = 2,
    ACTIONS(184), 1,
      sym_num,
    ACTIONS(182), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [2044] = 2,
    STATE(16), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2054] = 2,
    STATE(14), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2064] = 2,
    STATE(20), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2074] = 2,
    STATE(18), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2084] = 2,
    STATE(19), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [2094] = 2,
    STATE(17), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2104] = 4,
    ACTIONS(188), 1,
      anon_sym_the,
    ACTIONS(190), 1,
      anon_sym_ANYDATE,
    ACTIONS(194), 1,
      sym_num,
    ACTIONS(192), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2118] = 2,
    STATE(15), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [2128] = 2,
    STATE(13), 1,
      sym_verb,
    ACTIONS(186), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2138] = 3,
    STATE(112), 1,
      sym_else,
    ACTIONS(180), 2,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2150] = 3,
    STATE(113), 1,
      sym_else,
    ACTIONS(180), 2,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2162] = 4,
    ACTIONS(200), 1,
      anon_sym_the,
    ACTIONS(202), 1,
      anon_sym_ANYDATE,
    ACTIONS(206), 1,
      sym_num,
    ACTIONS(204), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2176] = 2,
    ACTIONS(210), 1,
      sym_num,
    ACTIONS(208), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [2186] = 1,
    ACTIONS(212), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2193] = 1,
    ACTIONS(214), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2200] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(41), 1,
      sym_condition,
    STATE(192), 1,
      sym_component_condition,
  [2213] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(50), 1,
      sym_statement,
    STATE(139), 1,
      sym_component_statement,
  [2226] = 1,
    ACTIONS(216), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2233] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(41), 1,
      sym_condition,
    STATE(90), 1,
      sym_component_condition,
  [2246] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(48), 1,
      sym_condition,
    STATE(123), 1,
      sym_component_condition,
  [2259] = 4,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_definition,
    STATE(148), 1,
      sym_component_definition,
    STATE(152), 1,
      sym_ID,
  [2272] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(50), 1,
      sym_statement,
    STATE(172), 1,
      sym_component_statement,
  [2285] = 3,
    ACTIONS(220), 1,
      sym_num,
    STATE(131), 1,
      sym_temporal_offset,
    ACTIONS(204), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2296] = 3,
    ACTIONS(222), 1,
      sym_num,
    STATE(126), 1,
      sym_temporal_offset,
    ACTIONS(192), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2307] = 4,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_definition,
    STATE(138), 1,
      sym_component_definition,
    STATE(152), 1,
      sym_ID,
  [2320] = 3,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_C_DASHAND,
    STATE(117), 1,
      aux_sym_contract_repeat1,
  [2330] = 2,
    STATE(165), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2338] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_C_DASHAND,
    STATE(117), 1,
      aux_sym_contract_repeat1,
  [2348] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(86), 1,
      sym_condition,
  [2358] = 1,
    ACTIONS(233), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [2364] = 2,
    ACTIONS(237), 1,
      anon_sym_IF,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2372] = 2,
    STATE(108), 1,
      sym_else,
    ACTIONS(180), 2,
      anon_sym_ELSE,
      anon_sym_OTHERWISE,
  [2380] = 3,
    ACTIONS(231), 1,
      anon_sym_C_DASHAND,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      aux_sym_contract_repeat1,
  [2390] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(68), 1,
      sym_statement,
  [2400] = 2,
    STATE(168), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2408] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(83), 1,
      sym_statement,
  [2418] = 2,
    STATE(170), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2426] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(88), 1,
      sym_condition,
  [2436] = 3,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_definition,
    STATE(152), 1,
      sym_ID,
  [2446] = 2,
    STATE(171), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2454] = 2,
    ACTIONS(241), 1,
      anon_sym_IF,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2462] = 2,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(245), 1,
      sym_num,
  [2469] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(69), 1,
      sym_subject,
  [2476] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(54), 1,
      sym_receiver,
  [2483] = 2,
    ACTIONS(251), 1,
      sym_string,
    STATE(174), 1,
      sym_subject,
  [2490] = 1,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2495] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2500] = 1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2505] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(55), 1,
      sym_receiver,
  [2512] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(96), 1,
      sym_subject,
  [2519] = 1,
    ACTIONS(257), 2,
      anon_sym_before,
      anon_sym_after,
  [2524] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(85), 1,
      sym_subject,
  [2531] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(84), 1,
      sym_subject,
  [2538] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(39), 1,
      sym_subject,
  [2545] = 2,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
  [2552] = 2,
    ACTIONS(251), 1,
      sym_string,
    STATE(173), 1,
      sym_subject,
  [2559] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2564] = 2,
    ACTIONS(261), 1,
      anon_sym_the,
    ACTIONS(263), 1,
      anon_sym_not,
  [2571] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(59), 1,
      sym_receiver,
  [2578] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(74), 1,
      sym_receiver,
  [2585] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(146), 1,
      sym_subject,
  [2592] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(57), 1,
      sym_receiver,
  [2599] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      sym_num,
  [2606] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(63), 1,
      sym_receiver,
  [2613] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(79), 1,
      sym_subject,
  [2620] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(62), 1,
      sym_receiver,
  [2627] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(75), 1,
      sym_receiver,
  [2634] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2639] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(40), 1,
      sym_subject,
  [2646] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(76), 1,
      sym_receiver,
  [2653] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(24), 1,
      sym_subject,
  [2660] = 2,
    ACTIONS(249), 1,
      anon_sym_to,
    STATE(53), 1,
      sym_receiver,
  [2667] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(25), 1,
      sym_subject,
  [2674] = 1,
    ACTIONS(269), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2679] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [2686] = 2,
    ACTIONS(247), 1,
      sym_string,
    STATE(99), 1,
      sym_subject,
  [2693] = 1,
    ACTIONS(271), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2698] = 2,
    ACTIONS(251), 1,
      sym_string,
    STATE(183), 1,
      sym_subject,
  [2705] = 1,
    ACTIONS(273), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2710] = 1,
    ACTIONS(275), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2715] = 1,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2720] = 1,
    ACTIONS(69), 1,
      sym_string,
  [2724] = 1,
    ACTIONS(61), 1,
      sym_string,
  [2728] = 1,
    ACTIONS(279), 1,
      anon_sym_to,
  [2732] = 1,
    ACTIONS(281), 1,
      sym_num,
  [2736] = 1,
    ACTIONS(283), 1,
      sym_num,
  [2740] = 1,
    ACTIONS(65), 1,
      sym_string,
  [2744] = 1,
    ACTIONS(285), 1,
      anon_sym_is,
  [2748] = 1,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
  [2752] = 1,
    ACTIONS(289), 1,
      sym_string,
  [2756] = 1,
    ACTIONS(291), 1,
      sym_string,
  [2760] = 1,
    ACTIONS(63), 1,
      sym_string,
  [2764] = 1,
    ACTIONS(293), 1,
      anon_sym_than,
  [2768] = 1,
    ACTIONS(295), 1,
      anon_sym_that,
  [2772] = 1,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
  [2776] = 1,
    ACTIONS(299), 1,
      sym_num,
  [2780] = 1,
    ACTIONS(301), 1,
      sym_num,
  [2784] = 1,
    ACTIONS(303), 1,
      anon_sym_case,
  [2788] = 1,
    ACTIONS(305), 1,
      sym_num,
  [2792] = 1,
    ACTIONS(59), 1,
      sym_string,
  [2796] = 1,
    ACTIONS(307), 1,
      anon_sym_THEN,
  [2800] = 1,
    ACTIONS(309), 1,
      sym_num,
  [2804] = 1,
    ACTIONS(7), 1,
      sym_string,
  [2808] = 1,
    ACTIONS(311), 1,
      anon_sym_to,
  [2812] = 1,
    ACTIONS(176), 1,
      sym_string,
  [2816] = 1,
    ACTIONS(313), 1,
      anon_sym_to,
  [2820] = 1,
    ACTIONS(315), 1,
      anon_sym_forbidden,
  [2824] = 1,
    ACTIONS(172), 1,
      sym_string,
  [2828] = 1,
    ACTIONS(317), 1,
      sym_num,
  [2832] = 1,
    ACTIONS(319), 1,
      sym_string,
  [2836] = 1,
    ACTIONS(321), 1,
      anon_sym_to,
  [2840] = 1,
    ACTIONS(323), 1,
      sym_string,
  [2844] = 1,
    ACTIONS(325), 1,
      sym_string,
  [2848] = 1,
    ACTIONS(327), 1,
      anon_sym_case,
  [2852] = 1,
    ACTIONS(329), 1,
      sym_num,
  [2856] = 1,
    ACTIONS(331), 1,
      anon_sym_the,
  [2860] = 1,
    ACTIONS(333), 1,
      sym_num,
  [2864] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [2868] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
  [2872] = 1,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
  [2876] = 1,
    ACTIONS(341), 1,
      sym_num,
  [2880] = 1,
    ACTIONS(343), 1,
      sym_num,
  [2884] = 1,
    ACTIONS(345), 1,
      anon_sym_that,
  [2888] = 1,
    ACTIONS(347), 1,
      sym_num,
  [2892] = 1,
    ACTIONS(349), 1,
      sym_num,
  [2896] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [2900] = 1,
    ACTIONS(67), 1,
      sym_string,
  [2904] = 1,
    ACTIONS(353), 1,
      sym_num,
  [2908] = 1,
    ACTIONS(57), 1,
      sym_string,
  [2912] = 1,
    ACTIONS(355), 1,
      anon_sym_than,
  [2916] = 1,
    ACTIONS(357), 1,
      sym_num,
  [2920] = 1,
    ACTIONS(359), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 352,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 486,
  [SMALL_STATE(14)] = 524,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 676,
  [SMALL_STATE(19)] = 714,
  [SMALL_STATE(20)] = 752,
  [SMALL_STATE(21)] = 790,
  [SMALL_STATE(22)] = 813,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 851,
  [SMALL_STATE(25)] = 870,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 908,
  [SMALL_STATE(28)] = 927,
  [SMALL_STATE(29)] = 946,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 1014,
  [SMALL_STATE(32)] = 1032,
  [SMALL_STATE(33)] = 1050,
  [SMALL_STATE(34)] = 1088,
  [SMALL_STATE(35)] = 1106,
  [SMALL_STATE(36)] = 1124,
  [SMALL_STATE(37)] = 1142,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1212,
  [SMALL_STATE(40)] = 1227,
  [SMALL_STATE(41)] = 1241,
  [SMALL_STATE(42)] = 1267,
  [SMALL_STATE(43)] = 1299,
  [SMALL_STATE(44)] = 1315,
  [SMALL_STATE(45)] = 1333,
  [SMALL_STATE(46)] = 1362,
  [SMALL_STATE(47)] = 1377,
  [SMALL_STATE(48)] = 1406,
  [SMALL_STATE(49)] = 1433,
  [SMALL_STATE(50)] = 1446,
  [SMALL_STATE(51)] = 1466,
  [SMALL_STATE(52)] = 1486,
  [SMALL_STATE(53)] = 1501,
  [SMALL_STATE(54)] = 1524,
  [SMALL_STATE(55)] = 1547,
  [SMALL_STATE(56)] = 1570,
  [SMALL_STATE(57)] = 1587,
  [SMALL_STATE(58)] = 1610,
  [SMALL_STATE(59)] = 1627,
  [SMALL_STATE(60)] = 1650,
  [SMALL_STATE(61)] = 1667,
  [SMALL_STATE(62)] = 1684,
  [SMALL_STATE(63)] = 1707,
  [SMALL_STATE(64)] = 1717,
  [SMALL_STATE(65)] = 1727,
  [SMALL_STATE(66)] = 1737,
  [SMALL_STATE(67)] = 1751,
  [SMALL_STATE(68)] = 1765,
  [SMALL_STATE(69)] = 1775,
  [SMALL_STATE(70)] = 1785,
  [SMALL_STATE(71)] = 1799,
  [SMALL_STATE(72)] = 1813,
  [SMALL_STATE(73)] = 1823,
  [SMALL_STATE(74)] = 1837,
  [SMALL_STATE(75)] = 1847,
  [SMALL_STATE(76)] = 1857,
  [SMALL_STATE(77)] = 1867,
  [SMALL_STATE(78)] = 1877,
  [SMALL_STATE(79)] = 1891,
  [SMALL_STATE(80)] = 1908,
  [SMALL_STATE(81)] = 1927,
  [SMALL_STATE(82)] = 1936,
  [SMALL_STATE(83)] = 1947,
  [SMALL_STATE(84)] = 1956,
  [SMALL_STATE(85)] = 1965,
  [SMALL_STATE(86)] = 1982,
  [SMALL_STATE(87)] = 1991,
  [SMALL_STATE(88)] = 2002,
  [SMALL_STATE(89)] = 2011,
  [SMALL_STATE(90)] = 2022,
  [SMALL_STATE(91)] = 2034,
  [SMALL_STATE(92)] = 2044,
  [SMALL_STATE(93)] = 2054,
  [SMALL_STATE(94)] = 2064,
  [SMALL_STATE(95)] = 2074,
  [SMALL_STATE(96)] = 2084,
  [SMALL_STATE(97)] = 2094,
  [SMALL_STATE(98)] = 2104,
  [SMALL_STATE(99)] = 2118,
  [SMALL_STATE(100)] = 2128,
  [SMALL_STATE(101)] = 2138,
  [SMALL_STATE(102)] = 2150,
  [SMALL_STATE(103)] = 2162,
  [SMALL_STATE(104)] = 2176,
  [SMALL_STATE(105)] = 2186,
  [SMALL_STATE(106)] = 2193,
  [SMALL_STATE(107)] = 2200,
  [SMALL_STATE(108)] = 2213,
  [SMALL_STATE(109)] = 2226,
  [SMALL_STATE(110)] = 2233,
  [SMALL_STATE(111)] = 2246,
  [SMALL_STATE(112)] = 2259,
  [SMALL_STATE(113)] = 2272,
  [SMALL_STATE(114)] = 2285,
  [SMALL_STATE(115)] = 2296,
  [SMALL_STATE(116)] = 2307,
  [SMALL_STATE(117)] = 2320,
  [SMALL_STATE(118)] = 2330,
  [SMALL_STATE(119)] = 2338,
  [SMALL_STATE(120)] = 2348,
  [SMALL_STATE(121)] = 2358,
  [SMALL_STATE(122)] = 2364,
  [SMALL_STATE(123)] = 2372,
  [SMALL_STATE(124)] = 2380,
  [SMALL_STATE(125)] = 2390,
  [SMALL_STATE(126)] = 2400,
  [SMALL_STATE(127)] = 2408,
  [SMALL_STATE(128)] = 2418,
  [SMALL_STATE(129)] = 2426,
  [SMALL_STATE(130)] = 2436,
  [SMALL_STATE(131)] = 2446,
  [SMALL_STATE(132)] = 2454,
  [SMALL_STATE(133)] = 2462,
  [SMALL_STATE(134)] = 2469,
  [SMALL_STATE(135)] = 2476,
  [SMALL_STATE(136)] = 2483,
  [SMALL_STATE(137)] = 2490,
  [SMALL_STATE(138)] = 2495,
  [SMALL_STATE(139)] = 2500,
  [SMALL_STATE(140)] = 2505,
  [SMALL_STATE(141)] = 2512,
  [SMALL_STATE(142)] = 2519,
  [SMALL_STATE(143)] = 2524,
  [SMALL_STATE(144)] = 2531,
  [SMALL_STATE(145)] = 2538,
  [SMALL_STATE(146)] = 2545,
  [SMALL_STATE(147)] = 2552,
  [SMALL_STATE(148)] = 2559,
  [SMALL_STATE(149)] = 2564,
  [SMALL_STATE(150)] = 2571,
  [SMALL_STATE(151)] = 2578,
  [SMALL_STATE(152)] = 2585,
  [SMALL_STATE(153)] = 2592,
  [SMALL_STATE(154)] = 2599,
  [SMALL_STATE(155)] = 2606,
  [SMALL_STATE(156)] = 2613,
  [SMALL_STATE(157)] = 2620,
  [SMALL_STATE(158)] = 2627,
  [SMALL_STATE(159)] = 2634,
  [SMALL_STATE(160)] = 2639,
  [SMALL_STATE(161)] = 2646,
  [SMALL_STATE(162)] = 2653,
  [SMALL_STATE(163)] = 2660,
  [SMALL_STATE(164)] = 2667,
  [SMALL_STATE(165)] = 2674,
  [SMALL_STATE(166)] = 2679,
  [SMALL_STATE(167)] = 2686,
  [SMALL_STATE(168)] = 2693,
  [SMALL_STATE(169)] = 2698,
  [SMALL_STATE(170)] = 2705,
  [SMALL_STATE(171)] = 2710,
  [SMALL_STATE(172)] = 2715,
  [SMALL_STATE(173)] = 2720,
  [SMALL_STATE(174)] = 2724,
  [SMALL_STATE(175)] = 2728,
  [SMALL_STATE(176)] = 2732,
  [SMALL_STATE(177)] = 2736,
  [SMALL_STATE(178)] = 2740,
  [SMALL_STATE(179)] = 2744,
  [SMALL_STATE(180)] = 2748,
  [SMALL_STATE(181)] = 2752,
  [SMALL_STATE(182)] = 2756,
  [SMALL_STATE(183)] = 2760,
  [SMALL_STATE(184)] = 2764,
  [SMALL_STATE(185)] = 2768,
  [SMALL_STATE(186)] = 2772,
  [SMALL_STATE(187)] = 2776,
  [SMALL_STATE(188)] = 2780,
  [SMALL_STATE(189)] = 2784,
  [SMALL_STATE(190)] = 2788,
  [SMALL_STATE(191)] = 2792,
  [SMALL_STATE(192)] = 2796,
  [SMALL_STATE(193)] = 2800,
  [SMALL_STATE(194)] = 2804,
  [SMALL_STATE(195)] = 2808,
  [SMALL_STATE(196)] = 2812,
  [SMALL_STATE(197)] = 2816,
  [SMALL_STATE(198)] = 2820,
  [SMALL_STATE(199)] = 2824,
  [SMALL_STATE(200)] = 2828,
  [SMALL_STATE(201)] = 2832,
  [SMALL_STATE(202)] = 2836,
  [SMALL_STATE(203)] = 2840,
  [SMALL_STATE(204)] = 2844,
  [SMALL_STATE(205)] = 2848,
  [SMALL_STATE(206)] = 2852,
  [SMALL_STATE(207)] = 2856,
  [SMALL_STATE(208)] = 2860,
  [SMALL_STATE(209)] = 2864,
  [SMALL_STATE(210)] = 2868,
  [SMALL_STATE(211)] = 2872,
  [SMALL_STATE(212)] = 2876,
  [SMALL_STATE(213)] = 2880,
  [SMALL_STATE(214)] = 2884,
  [SMALL_STATE(215)] = 2888,
  [SMALL_STATE(216)] = 2892,
  [SMALL_STATE(217)] = 2896,
  [SMALL_STATE(218)] = 2900,
  [SMALL_STATE(219)] = 2904,
  [SMALL_STATE(220)] = 2908,
  [SMALL_STATE(221)] = 2912,
  [SMALL_STATE(222)] = 2916,
  [SMALL_STATE(223)] = 2920,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_condition, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_condition_repeat2, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_condition_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_condition_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_condition_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_condition, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_definition_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat2, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 7, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 8, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 8, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_definition, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 6, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 6, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pounds, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dollars, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_euros, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_than, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cola(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
