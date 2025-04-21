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
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
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
  anon_sym_ELSE = 11,
  anon_sym_OR = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_it = 15,
  anon_sym_is = 16,
  anon_sym_the = 17,
  anon_sym_case = 18,
  anon_sym_that = 19,
  anon_sym_not = 20,
  anon_sym_deliver = 21,
  anon_sym_pay = 22,
  anon_sym_charge = 23,
  anon_sym_refund = 24,
  anon_sym_delivered = 25,
  anon_sym_paid = 26,
  anon_sym_charged = 27,
  anon_sym_refunded = 28,
  anon_sym_less = 29,
  anon_sym_than = 30,
  anon_sym_equals = 31,
  anon_sym_equal = 32,
  anon_sym_to = 33,
  anon_sym_more = 34,
  anon_sym_greater = 35,
  anon_sym_may = 36,
  anon_sym_forbidden = 37,
  anon_sym_shall = 38,
  anon_sym_must = 39,
  anon_sym_on = 40,
  anon_sym_ANYDATE = 41,
  anon_sym_SOMEDATE = 42,
  anon_sym_THEDATE = 43,
  anon_sym_before = 44,
  anon_sym_after = 45,
  anon_sym_day = 46,
  anon_sym_week = 47,
  anon_sym_year = 48,
  anon_sym_days = 49,
  anon_sym_weeks = 50,
  anon_sym_years = 51,
  anon_sym_January = 52,
  anon_sym_February = 53,
  anon_sym_March = 54,
  anon_sym_April = 55,
  anon_sym_May = 56,
  anon_sym_June = 57,
  anon_sym_July = 58,
  anon_sym_August = 59,
  anon_sym_September = 60,
  anon_sym_October = 61,
  anon_sym_November = 62,
  anon_sym_December = 63,
  anon_sym_AMOUNT = 64,
  anon_sym_SOMECURRENCY = 65,
  anon_sym_REPORT = 66,
  anon_sym_NAMEDOBJECT = 67,
  anon_sym_OTHEROBJECT = 68,
  anon_sym_GBP = 69,
  anon_sym_POUNDS = 70,
  anon_sym_quid = 71,
  anon_sym_USD = 72,
  anon_sym_DOLLARS = 73,
  anon_sym_buck = 74,
  anon_sym_EUR = 75,
  anon_sym_EUROS = 76,
  sym_string = 77,
  sym_num = 78,
  sym_comment = 79,
  sym_contract = 80,
  sym_component = 81,
  sym_definition = 82,
  sym_simple_definition = 83,
  sym_numerical_expression = 84,
  sym_operator = 85,
  sym_conditional_definition = 86,
  sym_statement = 87,
  sym_conditional_statement = 88,
  sym_simple_statement = 89,
  sym_condition = 90,
  sym_simple_condition = 91,
  sym_boolean_expression = 92,
  sym_ID = 93,
  sym_holds = 94,
  sym_subject = 95,
  sym_verb = 96,
  sym_verb_status = 97,
  sym_comparison = 98,
  sym_equal = 99,
  sym_more_than = 100,
  sym_modal_verb = 101,
  sym_obligation = 102,
  sym_date = 103,
  sym_temporal_quantifier = 104,
  sym_specific_date = 105,
  sym_temporal_offset = 106,
  sym_month = 107,
  sym_object = 108,
  sym_numerical_object = 109,
  sym_nonnumerical_object = 110,
  sym_pounds = 111,
  sym_dollars = 112,
  sym_euros = 113,
  sym_receiver = 114,
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
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_OR] = "OR",
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
  [sym_comment] = "comment",
  [sym_contract] = "contract",
  [sym_component] = "component",
  [sym_definition] = "definition",
  [sym_simple_definition] = "simple_definition",
  [sym_numerical_expression] = "numerical_expression",
  [sym_operator] = "operator",
  [sym_conditional_definition] = "conditional_definition",
  [sym_statement] = "statement",
  [sym_conditional_statement] = "conditional_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_condition] = "condition",
  [sym_simple_condition] = "simple_condition",
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
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_OR] = anon_sym_OR,
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
  [sym_comment] = sym_comment,
  [sym_contract] = sym_contract,
  [sym_component] = sym_component,
  [sym_definition] = sym_definition,
  [sym_simple_definition] = sym_simple_definition,
  [sym_numerical_expression] = sym_numerical_expression,
  [sym_operator] = sym_operator,
  [sym_conditional_definition] = sym_conditional_definition,
  [sym_statement] = sym_statement,
  [sym_conditional_statement] = sym_conditional_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_condition] = sym_condition,
  [sym_simple_condition] = sym_simple_condition,
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
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
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
  [sym_comment] = {
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
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_definition] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_condition] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
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
  [34] = 34,
  [35] = 32,
  [36] = 31,
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
  [84] = 72,
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
  [101] = 89,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 111,
  [112] = 112,
  [113] = 104,
  [114] = 114,
  [115] = 115,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
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
  [143] = 117,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 128,
  [148] = 145,
  [149] = 142,
  [150] = 150,
  [151] = 144,
  [152] = 146,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 28,
  [160] = 30,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 24,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 4,
  [174] = 174,
  [175] = 70,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 26,
  [184] = 184,
  [185] = 185,
  [186] = 27,
  [187] = 187,
  [188] = 188,
  [189] = 156,
  [190] = 190,
  [191] = 188,
  [192] = 181,
  [193] = 29,
  [194] = 172,
  [195] = 185,
  [196] = 196,
  [197] = 25,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 196,
  [202] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '/', 10,
        'A', 74,
        'C', 13,
        'D', 61,
        'E', 68,
        'F', 161,
        'G', 25,
        'I', 56,
        'J', 128,
        'M', 63,
        'N', 18,
        'O', 93,
        'P', 71,
        'R', 50,
        'S', 88,
        'T', 57,
        'U', 100,
        '[', 317,
      );
      if (lookahead == '\\') SKIP(300);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'q') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == 'y') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(403);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(402);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'Y') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(383);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(305);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(314);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(352);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(351);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'F') ADVANCE(313);
      if (lookahead == 'S') ADVANCE(307);
      END_STATE();
    case 57:
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'H') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'H') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 65:
      if (lookahead == 'J') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'J') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'Q') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'Q') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 75:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(314);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'P') ADVANCE(380);
      END_STATE();
    case 91:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(316);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(386);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(387);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(310);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(311);
      END_STATE();
    case 105:
      if (lookahead == 'S') ADVANCE(308);
      END_STATE();
    case 106:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 107:
      if (lookahead == 'S') ADVANCE(384);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(375);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(378);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(379);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 123:
      if (lookahead == 'Y') ADVANCE(376);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(284);
      END_STATE();
    case 200:
      if (lookahead == 'f') ADVANCE(287);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 218:
      if (lookahead == 'k') ADVANCE(385);
      END_STATE();
    case 219:
      if (lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 244:
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 289:
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 290:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 291:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 292:
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(357);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 295:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 296:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 299:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(299);
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(303);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(303);
      if (lookahead == '\r') SKIP(301);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '/', 10,
        'A', 83,
        'C', 13,
        'D', 60,
        'E', 67,
        'I', 56,
        'M', 62,
        'O', 92,
        'P', 70,
        'T', 59,
      );
      if (lookahead == '\\') SKIP(302);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_charge);
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_refund);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_refund);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_refunded);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_buck);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 303},
  [5] = {.lex_state = 303},
  [6] = {.lex_state = 303},
  [7] = {.lex_state = 303},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 303},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 303},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 303},
  [25] = {.lex_state = 303},
  [26] = {.lex_state = 303},
  [27] = {.lex_state = 303},
  [28] = {.lex_state = 303},
  [29] = {.lex_state = 303},
  [30] = {.lex_state = 303},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 14},
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
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 303},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 303},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 17},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 17},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 17},
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
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_contract] = STATE(187),
    [sym_component] = STATE(127),
    [sym_definition] = STATE(103),
    [sym_simple_definition] = STATE(78),
    [sym_conditional_definition] = STATE(122),
    [sym_statement] = STATE(108),
    [sym_conditional_statement] = STATE(122),
    [sym_simple_statement] = STATE(57),
    [sym_ID] = STATE(37),
    [anon_sym_IF] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(115), 1,
      sym_comparison,
    STATE(116), 1,
      sym_object,
    ACTIONS(15), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(162), 2,
      sym_equal,
      sym_more_than,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [61] = 16,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(115), 1,
      sym_comparison,
    STATE(131), 1,
      sym_object,
    ACTIONS(15), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(162), 2,
      sym_equal,
      sym_more_than,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 26,
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
      anon_sym_ELSE,
      anon_sym_OR,
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
  [154] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_IS,
    ACTIONS(33), 1,
      anon_sym_EQUALS,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(10), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(59), 1,
      sym_date,
    STATE(77), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [211] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(2), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(80), 1,
      sym_modal_verb,
    STATE(83), 1,
      sym_date,
    STATE(92), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [262] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(10), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(59), 1,
      sym_date,
    STATE(77), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(181), 1,
      sym_month,
    ACTIONS(49), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(51), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(53), 12,
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
  [344] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(13), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(58), 1,
      sym_date,
    STATE(76), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [395] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(114), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [436] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(3), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(74), 1,
      sym_modal_verb,
    STATE(75), 1,
      sym_date,
    STATE(92), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      sym_month,
    ACTIONS(49), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(51), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(53), 12,
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
  [518] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(120), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [559] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(131), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [600] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(132), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [641] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(134), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [682] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(138), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [723] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(137), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [764] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(140), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [805] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    STATE(139), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(19), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_equal,
      anon_sym_EUR,
    ACTIONS(55), 16,
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
  [872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(43), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [909] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMOUNT,
    ACTIONS(25), 1,
      anon_sym_EUR,
    ACTIONS(27), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(46), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(21), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(23), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(169), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym_month,
    ACTIONS(53), 12,
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
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(188), 1,
      sym_month,
    ACTIONS(53), 12,
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
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_EUR,
    ACTIONS(75), 12,
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
  [1156] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(6), 1,
      sym_subject,
    STATE(40), 1,
      sym_holds,
    STATE(63), 1,
      sym_boolean_expression,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(106), 1,
      sym_temporal_offset,
    STATE(133), 1,
      sym_date,
    STATE(167), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(191), 1,
      sym_month,
    ACTIONS(53), 12,
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
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(194), 1,
      sym_month,
    ACTIONS(53), 12,
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
  [1239] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(5), 1,
      sym_subject,
    STATE(44), 1,
      sym_holds,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(106), 1,
      sym_temporal_offset,
    STATE(135), 1,
      sym_date,
    STATE(167), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1277] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(44), 1,
      sym_holds,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(106), 1,
      sym_temporal_offset,
    STATE(135), 1,
      sym_date,
    STATE(167), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1315] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_IF,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(57), 1,
      sym_simple_statement,
    STATE(78), 1,
      sym_simple_definition,
    STATE(103), 1,
      sym_definition,
    STATE(108), 1,
      sym_statement,
    STATE(127), 1,
      sym_component,
    STATE(157), 1,
      sym_contract,
    STATE(122), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1350] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_num,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(64), 1,
      sym_boolean_expression,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(106), 1,
      sym_temporal_offset,
    STATE(153), 1,
      sym_date,
    STATE(167), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_to,
  [1418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_operator,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1438] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_num,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(9), 1,
      sym_subject,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(106), 1,
      sym_temporal_offset,
    STATE(123), 1,
      sym_date,
    STATE(167), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_EUR,
    ACTIONS(95), 9,
      anon_sym_AMOUNT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
      sym_num,
  [1488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_operator,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(65), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1547] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(66), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(62), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1599] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(69), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1625] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(68), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(67), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [1677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [1691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(51), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [1719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    STATE(79), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_obligation,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
  [1753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_is,
    ACTIONS(39), 1,
      anon_sym_may,
    STATE(73), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_obligation,
    ACTIONS(41), 2,
      anon_sym_shall,
      anon_sym_must,
  [1773] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(57), 1,
      sym_simple_statement,
    STATE(78), 1,
      sym_simple_definition,
    STATE(107), 1,
      sym_definition,
    STATE(111), 1,
      sym_statement,
  [1795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_num,
    ACTIONS(133), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_the,
    ACTIONS(139), 1,
      anon_sym_ANYDATE,
    ACTIONS(143), 1,
      sym_num,
    ACTIONS(141), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_verb_status,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_AND,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_num,
    ACTIONS(151), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_num,
    ACTIONS(155), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_verb_status,
    ACTIONS(37), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [2088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_the,
    ACTIONS(161), 1,
      anon_sym_ANYDATE,
    ACTIONS(165), 1,
      sym_num,
    ACTIONS(163), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2115] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(57), 1,
      sym_simple_statement,
    STATE(97), 1,
      sym_statement,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(57), 1,
      sym_simple_statement,
    STATE(130), 1,
      sym_statement,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [2157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_num,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(141), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(54), 1,
      sym_simple_condition,
    STATE(155), 1,
      sym_condition,
  [2187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(54), 1,
      sym_simple_condition,
    STATE(109), 1,
      sym_condition,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_simple_definition,
    STATE(85), 1,
      sym_definition,
    STATE(141), 1,
      sym_ID,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(54), 1,
      sym_simple_condition,
    STATE(88), 1,
      sym_condition,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_simple_definition,
    STATE(129), 1,
      sym_definition,
    STATE(141), 1,
      sym_ID,
  [2291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(54), 1,
      sym_simple_condition,
    STATE(112), 1,
      sym_condition,
  [2307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_simple_definition,
    STATE(118), 1,
      sym_definition,
    STATE(141), 1,
      sym_ID,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_num,
    STATE(113), 1,
      sym_temporal_offset,
    ACTIONS(163), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(57), 1,
      sym_simple_statement,
    STATE(119), 1,
      sym_statement,
  [2353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_IF,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(146), 1,
      sym_temporal_quantifier,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(144), 1,
      sym_temporal_quantifier,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [2395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_ELSE,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_IF,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_ELSE,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_temporal_quantifier,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [2439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_ELSE,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_ELSE,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      sym_temporal_quantifier,
    ACTIONS(45), 2,
      anon_sym_before,
      anon_sym_after,
  [2472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(48), 1,
      sym_receiver,
  [2482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(61), 1,
      sym_subject,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(49), 1,
      sym_receiver,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_string,
    STATE(183), 1,
      sym_subject,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(52), 1,
      sym_receiver,
  [2538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_before,
      anon_sym_after,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(58), 1,
      sym_subject,
  [2564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_IS,
    ACTIONS(33), 1,
      anon_sym_EQUALS,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(71), 1,
      sym_subject,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(41), 1,
      sym_subject,
  [2594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_C_DASHAND,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_string,
    STATE(160), 1,
      sym_subject,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(53), 1,
      sym_receiver,
  [2640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(66), 1,
      sym_receiver,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(83), 1,
      sym_subject,
  [2660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(50), 1,
      sym_receiver,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(59), 1,
      sym_subject,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(42), 1,
      sym_subject,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(68), 1,
      sym_receiver,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(51), 1,
      sym_receiver,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(67), 1,
      sym_receiver,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(62), 1,
      sym_receiver,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(124), 1,
      sym_subject,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      sym_num,
  [2750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(26), 1,
      sym_subject,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(30), 1,
      sym_subject,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_string,
    STATE(159), 1,
      sym_subject,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      sym_num,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_the,
    ACTIONS(243), 1,
      anon_sym_not,
  [2826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_string,
    STATE(75), 1,
      sym_subject,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_forbidden,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_THEN,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_case,
  [2887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_string,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_string,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_num,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_string,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_that,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_num,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_num,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_is,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_string,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_case,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_num,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_to,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_string,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_num,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_string,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_to,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_string,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_the,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_to,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_than,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_string,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_string,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_num,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_string,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_string,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_num,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_num,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_string,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_num,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_that,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_num,
  [3118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_num,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_string,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_num,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_num,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_num,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_string,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_than,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_string,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_to,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_num,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 344,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 436,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 518,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 600,
  [SMALL_STATE(16)] = 641,
  [SMALL_STATE(17)] = 682,
  [SMALL_STATE(18)] = 723,
  [SMALL_STATE(19)] = 764,
  [SMALL_STATE(20)] = 805,
  [SMALL_STATE(21)] = 846,
  [SMALL_STATE(22)] = 872,
  [SMALL_STATE(23)] = 909,
  [SMALL_STATE(24)] = 946,
  [SMALL_STATE(25)] = 967,
  [SMALL_STATE(26)] = 988,
  [SMALL_STATE(27)] = 1009,
  [SMALL_STATE(28)] = 1030,
  [SMALL_STATE(29)] = 1051,
  [SMALL_STATE(30)] = 1072,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1114,
  [SMALL_STATE(33)] = 1135,
  [SMALL_STATE(34)] = 1156,
  [SMALL_STATE(35)] = 1197,
  [SMALL_STATE(36)] = 1218,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1277,
  [SMALL_STATE(39)] = 1315,
  [SMALL_STATE(40)] = 1350,
  [SMALL_STATE(41)] = 1385,
  [SMALL_STATE(42)] = 1402,
  [SMALL_STATE(43)] = 1418,
  [SMALL_STATE(44)] = 1438,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1488,
  [SMALL_STATE(47)] = 1506,
  [SMALL_STATE(48)] = 1521,
  [SMALL_STATE(49)] = 1547,
  [SMALL_STATE(50)] = 1573,
  [SMALL_STATE(51)] = 1599,
  [SMALL_STATE(52)] = 1625,
  [SMALL_STATE(53)] = 1651,
  [SMALL_STATE(54)] = 1677,
  [SMALL_STATE(55)] = 1691,
  [SMALL_STATE(56)] = 1705,
  [SMALL_STATE(57)] = 1719,
  [SMALL_STATE(58)] = 1733,
  [SMALL_STATE(59)] = 1753,
  [SMALL_STATE(60)] = 1773,
  [SMALL_STATE(61)] = 1795,
  [SMALL_STATE(62)] = 1807,
  [SMALL_STATE(63)] = 1819,
  [SMALL_STATE(64)] = 1831,
  [SMALL_STATE(65)] = 1843,
  [SMALL_STATE(66)] = 1855,
  [SMALL_STATE(67)] = 1867,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1891,
  [SMALL_STATE(70)] = 1903,
  [SMALL_STATE(71)] = 1917,
  [SMALL_STATE(72)] = 1928,
  [SMALL_STATE(73)] = 1945,
  [SMALL_STATE(74)] = 1958,
  [SMALL_STATE(75)] = 1971,
  [SMALL_STATE(76)] = 1984,
  [SMALL_STATE(77)] = 1997,
  [SMALL_STATE(78)] = 2010,
  [SMALL_STATE(79)] = 2023,
  [SMALL_STATE(80)] = 2036,
  [SMALL_STATE(81)] = 2049,
  [SMALL_STATE(82)] = 2062,
  [SMALL_STATE(83)] = 2075,
  [SMALL_STATE(84)] = 2088,
  [SMALL_STATE(85)] = 2105,
  [SMALL_STATE(86)] = 2115,
  [SMALL_STATE(87)] = 2131,
  [SMALL_STATE(88)] = 2147,
  [SMALL_STATE(89)] = 2157,
  [SMALL_STATE(90)] = 2171,
  [SMALL_STATE(91)] = 2187,
  [SMALL_STATE(92)] = 2203,
  [SMALL_STATE(93)] = 2213,
  [SMALL_STATE(94)] = 2229,
  [SMALL_STATE(95)] = 2239,
  [SMALL_STATE(96)] = 2255,
  [SMALL_STATE(97)] = 2265,
  [SMALL_STATE(98)] = 2275,
  [SMALL_STATE(99)] = 2291,
  [SMALL_STATE(100)] = 2307,
  [SMALL_STATE(101)] = 2323,
  [SMALL_STATE(102)] = 2337,
  [SMALL_STATE(103)] = 2353,
  [SMALL_STATE(104)] = 2364,
  [SMALL_STATE(105)] = 2375,
  [SMALL_STATE(106)] = 2384,
  [SMALL_STATE(107)] = 2395,
  [SMALL_STATE(108)] = 2406,
  [SMALL_STATE(109)] = 2417,
  [SMALL_STATE(110)] = 2428,
  [SMALL_STATE(111)] = 2439,
  [SMALL_STATE(112)] = 2450,
  [SMALL_STATE(113)] = 2461,
  [SMALL_STATE(114)] = 2472,
  [SMALL_STATE(115)] = 2482,
  [SMALL_STATE(116)] = 2492,
  [SMALL_STATE(117)] = 2502,
  [SMALL_STATE(118)] = 2512,
  [SMALL_STATE(119)] = 2520,
  [SMALL_STATE(120)] = 2528,
  [SMALL_STATE(121)] = 2538,
  [SMALL_STATE(122)] = 2546,
  [SMALL_STATE(123)] = 2554,
  [SMALL_STATE(124)] = 2564,
  [SMALL_STATE(125)] = 2574,
  [SMALL_STATE(126)] = 2584,
  [SMALL_STATE(127)] = 2594,
  [SMALL_STATE(128)] = 2604,
  [SMALL_STATE(129)] = 2614,
  [SMALL_STATE(130)] = 2622,
  [SMALL_STATE(131)] = 2630,
  [SMALL_STATE(132)] = 2640,
  [SMALL_STATE(133)] = 2650,
  [SMALL_STATE(134)] = 2660,
  [SMALL_STATE(135)] = 2670,
  [SMALL_STATE(136)] = 2680,
  [SMALL_STATE(137)] = 2690,
  [SMALL_STATE(138)] = 2700,
  [SMALL_STATE(139)] = 2710,
  [SMALL_STATE(140)] = 2720,
  [SMALL_STATE(141)] = 2730,
  [SMALL_STATE(142)] = 2740,
  [SMALL_STATE(143)] = 2750,
  [SMALL_STATE(144)] = 2760,
  [SMALL_STATE(145)] = 2768,
  [SMALL_STATE(146)] = 2778,
  [SMALL_STATE(147)] = 2786,
  [SMALL_STATE(148)] = 2796,
  [SMALL_STATE(149)] = 2806,
  [SMALL_STATE(150)] = 2816,
  [SMALL_STATE(151)] = 2826,
  [SMALL_STATE(152)] = 2834,
  [SMALL_STATE(153)] = 2842,
  [SMALL_STATE(154)] = 2852,
  [SMALL_STATE(155)] = 2859,
  [SMALL_STATE(156)] = 2866,
  [SMALL_STATE(157)] = 2873,
  [SMALL_STATE(158)] = 2880,
  [SMALL_STATE(159)] = 2887,
  [SMALL_STATE(160)] = 2894,
  [SMALL_STATE(161)] = 2901,
  [SMALL_STATE(162)] = 2908,
  [SMALL_STATE(163)] = 2915,
  [SMALL_STATE(164)] = 2922,
  [SMALL_STATE(165)] = 2929,
  [SMALL_STATE(166)] = 2936,
  [SMALL_STATE(167)] = 2943,
  [SMALL_STATE(168)] = 2950,
  [SMALL_STATE(169)] = 2957,
  [SMALL_STATE(170)] = 2964,
  [SMALL_STATE(171)] = 2971,
  [SMALL_STATE(172)] = 2978,
  [SMALL_STATE(173)] = 2985,
  [SMALL_STATE(174)] = 2992,
  [SMALL_STATE(175)] = 2999,
  [SMALL_STATE(176)] = 3006,
  [SMALL_STATE(177)] = 3013,
  [SMALL_STATE(178)] = 3020,
  [SMALL_STATE(179)] = 3027,
  [SMALL_STATE(180)] = 3034,
  [SMALL_STATE(181)] = 3041,
  [SMALL_STATE(182)] = 3048,
  [SMALL_STATE(183)] = 3055,
  [SMALL_STATE(184)] = 3062,
  [SMALL_STATE(185)] = 3069,
  [SMALL_STATE(186)] = 3076,
  [SMALL_STATE(187)] = 3083,
  [SMALL_STATE(188)] = 3090,
  [SMALL_STATE(189)] = 3097,
  [SMALL_STATE(190)] = 3104,
  [SMALL_STATE(191)] = 3111,
  [SMALL_STATE(192)] = 3118,
  [SMALL_STATE(193)] = 3125,
  [SMALL_STATE(194)] = 3132,
  [SMALL_STATE(195)] = 3139,
  [SMALL_STATE(196)] = 3146,
  [SMALL_STATE(197)] = 3153,
  [SMALL_STATE(198)] = 3160,
  [SMALL_STATE(199)] = 3167,
  [SMALL_STATE(200)] = 3174,
  [SMALL_STATE(201)] = 3181,
  [SMALL_STATE(202)] = 3188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 8, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 8, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 6, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pounds, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dollars, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_euros, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_than, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
