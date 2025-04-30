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
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_itisthecasethat = 16,
  anon_sym_itisnotthecasethat = 17,
  anon_sym_DELIVER = 18,
  anon_sym_deliver = 19,
  anon_sym_PAY = 20,
  anon_sym_pay = 21,
  anon_sym_CHARGE = 22,
  anon_sym_charge = 23,
  anon_sym_DELIVERED = 24,
  anon_sym_delivered = 25,
  anon_sym_PAID = 26,
  anon_sym_paid = 27,
  anon_sym_CHARGED = 28,
  anon_sym_charged = 29,
  anon_sym_LESS = 30,
  anon_sym_THAN = 31,
  anon_sym_less = 32,
  anon_sym_than = 33,
  anon_sym_EQUAL = 34,
  anon_sym_TO = 35,
  anon_sym_equals = 36,
  anon_sym_equal = 37,
  anon_sym_to = 38,
  anon_sym_MORE = 39,
  anon_sym_more = 40,
  anon_sym_greater = 41,
  anon_sym_OBLIGATION = 42,
  anon_sym_shall = 43,
  anon_sym_must = 44,
  anon_sym_PERMISSION = 45,
  anon_sym_may = 46,
  anon_sym_PROHIBITION = 47,
  anon_sym_is = 48,
  anon_sym_forbidden = 49,
  anon_sym_onthe = 50,
  anon_sym_on = 51,
  anon_sym_ANYDATE = 52,
  anon_sym_ADATE = 53,
  anon_sym_THEDATE = 54,
  anon_sym_January = 55,
  anon_sym_February = 56,
  anon_sym_March = 57,
  anon_sym_April = 58,
  anon_sym_May = 59,
  anon_sym_June = 60,
  anon_sym_July = 61,
  anon_sym_August = 62,
  anon_sym_September = 63,
  anon_sym_October = 64,
  anon_sym_November = 65,
  anon_sym_December = 66,
  anon_sym_POUNDS = 67,
  anon_sym_GBP = 68,
  anon_sym_pounds = 69,
  anon_sym_quid = 70,
  anon_sym_DOLLARS = 71,
  anon_sym_USD = 72,
  anon_sym_dollars = 73,
  anon_sym_bucks = 74,
  anon_sym_EUROS = 75,
  anon_sym_EUR = 76,
  anon_sym_euros = 77,
  anon_sym_AMOUNT = 78,
  anon_sym_SOMECURRENCY = 79,
  anon_sym_REPORT = 80,
  anon_sym_NAMEDOBJECT = 81,
  anon_sym_OTHEROBJECT = 82,
  sym_string = 83,
  sym_num = 84,
  sym_comment = 85,
  sym_contract = 86,
  sym_component = 87,
  sym_definition = 88,
  sym_simple_definition = 89,
  sym_numerical_expression = 90,
  sym_operator = 91,
  sym_conditional_definition = 92,
  sym_statement = 93,
  sym_conditional_statement = 94,
  sym_simple_statement = 95,
  sym_condition = 96,
  sym_simple_condition = 97,
  sym_boolean_expression = 98,
  sym_identity = 99,
  sym_holds = 100,
  sym_subject = 101,
  sym_verb = 102,
  sym_verb_status = 103,
  sym_comparison = 104,
  sym_modal_verb = 105,
  sym_date = 106,
  sym_month = 107,
  sym_object = 108,
  sym_numerical_object = 109,
  sym_nonnumerical_object = 110,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_itisthecasethat] = "it is the case that",
  [anon_sym_itisnotthecasethat] = "it is not the case that",
  [anon_sym_DELIVER] = "DELIVER",
  [anon_sym_deliver] = "deliver",
  [anon_sym_PAY] = "PAY",
  [anon_sym_pay] = "pay",
  [anon_sym_CHARGE] = "CHARGE",
  [anon_sym_charge] = "charge",
  [anon_sym_DELIVERED] = "DELIVERED",
  [anon_sym_delivered] = "delivered",
  [anon_sym_PAID] = "PAID",
  [anon_sym_paid] = "paid",
  [anon_sym_CHARGED] = "CHARGED",
  [anon_sym_charged] = "charged",
  [anon_sym_LESS] = "LESS",
  [anon_sym_THAN] = "THAN",
  [anon_sym_less] = "less",
  [anon_sym_than] = "than",
  [anon_sym_EQUAL] = "EQUAL",
  [anon_sym_TO] = "TO",
  [anon_sym_equals] = "equals",
  [anon_sym_equal] = "equal",
  [anon_sym_to] = "to",
  [anon_sym_MORE] = "MORE",
  [anon_sym_more] = "more",
  [anon_sym_greater] = "greater",
  [anon_sym_OBLIGATION] = "OBLIGATION",
  [anon_sym_shall] = "shall",
  [anon_sym_must] = "must",
  [anon_sym_PERMISSION] = "PERMISSION",
  [anon_sym_may] = "may",
  [anon_sym_PROHIBITION] = "PROHIBITION",
  [anon_sym_is] = "is",
  [anon_sym_forbidden] = "forbidden",
  [anon_sym_onthe] = "on the",
  [anon_sym_on] = "on",
  [anon_sym_ANYDATE] = "ANYDATE",
  [anon_sym_ADATE] = "ADATE",
  [anon_sym_THEDATE] = "THEDATE",
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
  [anon_sym_POUNDS] = "POUNDS",
  [anon_sym_GBP] = "GBP",
  [anon_sym_pounds] = "pounds",
  [anon_sym_quid] = "quid",
  [anon_sym_DOLLARS] = "DOLLARS",
  [anon_sym_USD] = "USD",
  [anon_sym_dollars] = "dollars",
  [anon_sym_bucks] = "bucks",
  [anon_sym_EUROS] = "EUROS",
  [anon_sym_EUR] = "EUR",
  [anon_sym_euros] = "euros",
  [anon_sym_AMOUNT] = "AMOUNT",
  [anon_sym_SOMECURRENCY] = "SOMECURRENCY",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_NAMEDOBJECT] = "NAMEDOBJECT",
  [anon_sym_OTHEROBJECT] = "OTHEROBJECT",
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
  [sym_identity] = "identity",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_comparison] = "comparison",
  [sym_modal_verb] = "modal_verb",
  [sym_date] = "date",
  [sym_month] = "month",
  [sym_object] = "object",
  [sym_numerical_object] = "numerical_object",
  [sym_nonnumerical_object] = "nonnumerical_object",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_itisthecasethat] = anon_sym_itisthecasethat,
  [anon_sym_itisnotthecasethat] = anon_sym_itisnotthecasethat,
  [anon_sym_DELIVER] = anon_sym_DELIVER,
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_PAY] = anon_sym_PAY,
  [anon_sym_pay] = anon_sym_pay,
  [anon_sym_CHARGE] = anon_sym_CHARGE,
  [anon_sym_charge] = anon_sym_charge,
  [anon_sym_DELIVERED] = anon_sym_DELIVERED,
  [anon_sym_delivered] = anon_sym_delivered,
  [anon_sym_PAID] = anon_sym_PAID,
  [anon_sym_paid] = anon_sym_paid,
  [anon_sym_CHARGED] = anon_sym_CHARGED,
  [anon_sym_charged] = anon_sym_charged,
  [anon_sym_LESS] = anon_sym_LESS,
  [anon_sym_THAN] = anon_sym_THAN,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_than] = anon_sym_than,
  [anon_sym_EQUAL] = anon_sym_EQUAL,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_equal] = anon_sym_equal,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_MORE] = anon_sym_MORE,
  [anon_sym_more] = anon_sym_more,
  [anon_sym_greater] = anon_sym_greater,
  [anon_sym_OBLIGATION] = anon_sym_OBLIGATION,
  [anon_sym_shall] = anon_sym_shall,
  [anon_sym_must] = anon_sym_must,
  [anon_sym_PERMISSION] = anon_sym_PERMISSION,
  [anon_sym_may] = anon_sym_may,
  [anon_sym_PROHIBITION] = anon_sym_PROHIBITION,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_forbidden] = anon_sym_forbidden,
  [anon_sym_onthe] = anon_sym_onthe,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ANYDATE] = anon_sym_ANYDATE,
  [anon_sym_ADATE] = anon_sym_ADATE,
  [anon_sym_THEDATE] = anon_sym_THEDATE,
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
  [anon_sym_POUNDS] = anon_sym_POUNDS,
  [anon_sym_GBP] = anon_sym_GBP,
  [anon_sym_pounds] = anon_sym_pounds,
  [anon_sym_quid] = anon_sym_quid,
  [anon_sym_DOLLARS] = anon_sym_DOLLARS,
  [anon_sym_USD] = anon_sym_USD,
  [anon_sym_dollars] = anon_sym_dollars,
  [anon_sym_bucks] = anon_sym_bucks,
  [anon_sym_EUROS] = anon_sym_EUROS,
  [anon_sym_EUR] = anon_sym_EUR,
  [anon_sym_euros] = anon_sym_euros,
  [anon_sym_AMOUNT] = anon_sym_AMOUNT,
  [anon_sym_SOMECURRENCY] = anon_sym_SOMECURRENCY,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_NAMEDOBJECT] = anon_sym_NAMEDOBJECT,
  [anon_sym_OTHEROBJECT] = anon_sym_OTHEROBJECT,
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
  [sym_identity] = sym_identity,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_comparison] = sym_comparison,
  [sym_modal_verb] = sym_modal_verb,
  [sym_date] = sym_date,
  [sym_month] = sym_month,
  [sym_object] = sym_object,
  [sym_numerical_object] = sym_numerical_object,
  [sym_nonnumerical_object] = sym_nonnumerical_object,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itisthecasethat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itisnotthecasethat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELIVER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELIVERED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delivered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARGED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THAN] = {
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
  [anon_sym_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
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
  [anon_sym_MORE] = {
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
  [anon_sym_OBLIGATION] = {
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
  [anon_sym_PERMISSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROHIBITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onthe] = {
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
  [anon_sym_ADATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEDATE] = {
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
  [anon_sym_POUNDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GBP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pounds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dollars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bucks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUROS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_euros] = {
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
  [sym_identity] = {
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
  [sym_modal_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
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
  [24] = 22,
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
  [35] = 35,
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
  [84] = 75,
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
  [97] = 86,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
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
  [115] = 115,
  [116] = 14,
  [117] = 117,
  [118] = 118,
  [119] = 61,
  [120] = 15,
  [121] = 121,
  [122] = 57,
  [123] = 123,
  [124] = 124,
  [125] = 107,
  [126] = 113,
  [127] = 114,
  [128] = 128,
  [129] = 105,
  [130] = 112,
  [131] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(374);
      ADVANCE_MAP(
        '(', 388,
        ')', 389,
        '/', 15,
        'A', 51,
        'C', 18,
        'D', 64,
        'E', 150,
        'F', 235,
        'G', 40,
        'I', 88,
        'J', 201,
        'L', 72,
        'M', 98,
        'N', 24,
        'O', 45,
        'P', 25,
        'R', 73,
        'S', 146,
        'T', 92,
        'U', 165,
        '[', 386,
      );
      if (lookahead == '\\') SKIP(367);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'q') ADVANCE(352);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\r') ADVANCE(466);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(465);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(464);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'o') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(181);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(148);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(111);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(385);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(180);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(376);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(376);
      if (lookahead == 'Y') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(448);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(400);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(375);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(402);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(398);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(172);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(384);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(194);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(429);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(428);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(430);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(194);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(383);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(377);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'H') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(410);
      END_STATE();
    case 93:
      if (lookahead == 'H') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'H') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(196);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'Y') ADVANCE(394);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(175);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(195);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'J') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'J') ADVANCE(83);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(409);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(408);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'M') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 125:
      if (lookahead == 'M') ADVANCE(77);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(405);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(384);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(417);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(420);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(422);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 148:
      if (lookahead == 'P') ADVANCE(444);
      END_STATE();
    case 149:
      if (lookahead == 'P') ADVANCE(142);
      END_STATE();
    case 150:
      if (lookahead == 'Q') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 151:
      if (lookahead == 'Q') ADVANCE(192);
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == 'Q') ADVANCE(193);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(392);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(178);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 166:
      if (lookahead == 'S') ADVANCE(404);
      END_STATE();
    case 167:
      if (lookahead == 'S') ADVANCE(379);
      END_STATE();
    case 168:
      if (lookahead == 'S') ADVANCE(451);
      END_STATE();
    case 169:
      if (lookahead == 'S') ADVANCE(380);
      END_STATE();
    case 170:
      if (lookahead == 'S') ADVANCE(381);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(443);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 174:
      if (lookahead == 'S') ADVANCE(166);
      END_STATE();
    case 175:
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(108);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(456);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(104);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 186:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 187:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 188:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 189:
      if (lookahead == 'U') ADVANCE(169);
      END_STATE();
    case 190:
      if (lookahead == 'U') ADVANCE(162);
      END_STATE();
    case 191:
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 192:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 193:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 194:
      if (lookahead == 'V') ADVANCE(105);
      END_STATE();
    case 195:
      if (lookahead == 'V') ADVANCE(84);
      END_STATE();
    case 196:
      if (lookahead == 'V') ADVANCE(79);
      END_STATE();
    case 197:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(326);
      END_STATE();
    case 218:
      if (lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 219:
      if (lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(253);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'y') ADVANCE(395);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 283:
      if (lookahead == 'k') ADVANCE(330);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 307:
      if (lookahead == 'q') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 358:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 359:
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 360:
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 361:
      if (lookahead == 'v') ADVANCE(259);
      END_STATE();
    case 362:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 363:
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 364:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 365:
      if (lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 366:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 367:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(366);
      END_STATE();
    case 368:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(372);
      END_STATE();
    case 369:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(372);
      if (lookahead == '\r') SKIP(368);
      END_STATE();
    case 370:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(373);
      END_STATE();
    case 371:
      if (eof) ADVANCE(374);
      if (lookahead == '\n') SKIP(373);
      if (lookahead == '\r') SKIP(370);
      END_STATE();
    case 372:
      if (eof) ADVANCE(374);
      ADVANCE_MAP(
        '/', 15,
        'A', 121,
        'C', 19,
        'D', 86,
        'E', 151,
        'G', 40,
        'I', 87,
        'L', 72,
        'M', 137,
        'N', 23,
        'O', 44,
        'P', 37,
        'R', 73,
        'S', 145,
        'T', 95,
        'U', 165,
      );
      if (lookahead == '\\') SKIP(369);
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'q') ADVANCE(352);
      if (lookahead == 's') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(372);
      END_STATE();
    case 373:
      if (eof) ADVANCE(374);
      ADVANCE_MAP(
        '/', 15,
        'A', 135,
        'C', 19,
        'D', 85,
        'E', 152,
        'I', 88,
        'M', 97,
        'O', 43,
        'P', 36,
        'T', 96,
      );
      if (lookahead == '\\') SKIP(371);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead == 's') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_itisthecasethat);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_itisnotthecasethat);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DELIVER);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PAY);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_CHARGE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DELIVERED);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PAID);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_CHARGED);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LESS);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_THAN);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_MORE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_OBLIGATION);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PERMISSION);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_PROHIBITION);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_onthe);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_ADATE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_pounds);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_dollars);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_bucks);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(168);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_euros);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 372},
  [3] = {.lex_state = 372},
  [4] = {.lex_state = 373},
  [5] = {.lex_state = 372},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 372},
  [15] = {.lex_state = 372},
  [16] = {.lex_state = 372},
  [17] = {.lex_state = 372},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 373},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 372},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 372},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 20},
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
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 373},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_itisthecasethat] = ACTIONS(1),
    [anon_sym_itisnotthecasethat] = ACTIONS(1),
    [anon_sym_DELIVER] = ACTIONS(1),
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_PAY] = ACTIONS(1),
    [anon_sym_pay] = ACTIONS(1),
    [anon_sym_CHARGE] = ACTIONS(1),
    [anon_sym_charge] = ACTIONS(1),
    [anon_sym_PAID] = ACTIONS(1),
    [anon_sym_paid] = ACTIONS(1),
    [anon_sym_LESS] = ACTIONS(1),
    [anon_sym_THAN] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_EQUAL] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_equal] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_MORE] = ACTIONS(1),
    [anon_sym_more] = ACTIONS(1),
    [anon_sym_greater] = ACTIONS(1),
    [anon_sym_OBLIGATION] = ACTIONS(1),
    [anon_sym_shall] = ACTIONS(1),
    [anon_sym_must] = ACTIONS(1),
    [anon_sym_PERMISSION] = ACTIONS(1),
    [anon_sym_may] = ACTIONS(1),
    [anon_sym_PROHIBITION] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_forbidden] = ACTIONS(1),
    [anon_sym_onthe] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ANYDATE] = ACTIONS(1),
    [anon_sym_ADATE] = ACTIONS(1),
    [anon_sym_THEDATE] = ACTIONS(1),
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
    [anon_sym_POUNDS] = ACTIONS(1),
    [anon_sym_GBP] = ACTIONS(1),
    [anon_sym_pounds] = ACTIONS(1),
    [anon_sym_quid] = ACTIONS(1),
    [anon_sym_DOLLARS] = ACTIONS(1),
    [anon_sym_USD] = ACTIONS(1),
    [anon_sym_dollars] = ACTIONS(1),
    [anon_sym_bucks] = ACTIONS(1),
    [anon_sym_EUROS] = ACTIONS(1),
    [anon_sym_EUR] = ACTIONS(1),
    [anon_sym_euros] = ACTIONS(1),
    [anon_sym_AMOUNT] = ACTIONS(1),
    [anon_sym_SOMECURRENCY] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_NAMEDOBJECT] = ACTIONS(1),
    [anon_sym_OTHEROBJECT] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_contract] = STATE(104),
    [sym_component] = STATE(98),
    [sym_definition] = STATE(80),
    [sym_simple_definition] = STATE(69),
    [sym_conditional_definition] = STATE(85),
    [sym_statement] = STATE(78),
    [sym_conditional_statement] = STATE(85),
    [sym_simple_statement] = STATE(52),
    [sym_identity] = STATE(31),
    [anon_sym_IF] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_EQUAL,
    ACTIONS(15), 1,
      anon_sym_equals,
    ACTIONS(17), 1,
      anon_sym_equal,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(83), 1,
      sym_object,
    STATE(87), 1,
      sym_comparison,
    ACTIONS(9), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(11), 3,
      anon_sym_less,
      anon_sym_more,
      anon_sym_greater,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [56] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_EQUAL,
    ACTIONS(15), 1,
      anon_sym_equals,
    ACTIONS(17), 1,
      anon_sym_equal,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(76), 1,
      sym_object,
    STATE(87), 1,
      sym_comparison,
    ACTIONS(9), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(11), 3,
      anon_sym_less,
      anon_sym_more,
      anon_sym_greater,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_on,
    ACTIONS(27), 26,
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
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
      anon_sym_is,
      anon_sym_onthe,
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_equal,
      anon_sym_EUR,
    ACTIONS(31), 22,
      anon_sym_LESS,
      anon_sym_less,
      anon_sym_EQUAL,
      anon_sym_equals,
      anon_sym_MORE,
      anon_sym_more,
      anon_sym_greater,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [179] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(74), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(76), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(56), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(82), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(60), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [354] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(58), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [389] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(81), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    STATE(59), 1,
      sym_object,
    STATE(35), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(25), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 19,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
      anon_sym_is,
  [484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 19,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
      anon_sym_is,
  [509] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(3), 1,
      sym_verb_status,
    STATE(41), 1,
      sym_modal_verb,
    STATE(44), 1,
      sym_date,
    ACTIONS(39), 6,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [547] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(2), 1,
      sym_verb_status,
    STATE(39), 1,
      sym_modal_verb,
    STATE(40), 1,
      sym_date,
    ACTIONS(39), 6,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_EUR,
    ACTIONS(49), 15,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    ACTIONS(53), 1,
      sym_num,
    STATE(30), 1,
      sym_numerical_object,
    STATE(66), 1,
      sym_numerical_expression,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_EUR,
    ACTIONS(23), 1,
      anon_sym_AMOUNT,
    ACTIONS(53), 1,
      sym_num,
    STATE(30), 1,
      sym_numerical_object,
    STATE(70), 1,
      sym_numerical_expression,
    ACTIONS(19), 10,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
  [671] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    ACTIONS(55), 1,
      anon_sym_IS,
    ACTIONS(57), 1,
      anon_sym_EQUALS,
    STATE(33), 1,
      sym_date,
    STATE(38), 1,
      sym_modal_verb,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(107), 1,
      sym_month,
    ACTIONS(59), 12,
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
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_EUR,
    ACTIONS(61), 12,
      anon_sym_POUNDS,
      anon_sym_GBP,
      anon_sym_pounds,
      anon_sym_quid,
      anon_sym_DOLLARS,
      anon_sym_USD,
      anon_sym_dollars,
      anon_sym_bucks,
      anon_sym_EUROS,
      anon_sym_euros,
      anon_sym_AMOUNT,
      sym_num,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym_month,
    ACTIONS(59), 12,
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
  [767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(65), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_onthe,
  [787] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_IF,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_identity,
    STATE(52), 1,
      sym_simple_statement,
    STATE(69), 1,
      sym_simple_definition,
    STATE(78), 1,
      sym_statement,
    STATE(80), 1,
      sym_definition,
    STATE(98), 1,
      sym_component,
    STATE(108), 1,
      sym_contract,
    STATE(85), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [822] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(34), 1,
      sym_date,
    STATE(37), 1,
      sym_modal_verb,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(33), 1,
      sym_date,
    STATE(38), 1,
      sym_modal_verb,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [876] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_onthe,
    ACTIONS(73), 1,
      anon_sym_on,
    ACTIONS(75), 1,
      sym_string,
    STATE(17), 1,
      sym_subject,
    STATE(46), 1,
      sym_holds,
    STATE(49), 1,
      sym_boolean_expression,
    STATE(101), 1,
      sym_date,
    ACTIONS(69), 2,
      anon_sym_itisthecasethat,
      anon_sym_itisnotthecasethat,
  [905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_operator,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
  [924] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_onthe,
    ACTIONS(73), 1,
      anon_sym_on,
    ACTIONS(75), 1,
      sym_string,
    STATE(21), 1,
      sym_subject,
    STATE(54), 1,
      sym_holds,
    STATE(100), 1,
      sym_date,
    ACTIONS(69), 2,
      anon_sym_itisthecasethat,
      anon_sym_itisnotthecasethat,
  [950] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_onthe,
    ACTIONS(73), 1,
      anon_sym_on,
    ACTIONS(75), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
    STATE(54), 1,
      sym_holds,
    STATE(100), 1,
      sym_date,
    ACTIONS(69), 2,
      anon_sym_itisthecasethat,
      anon_sym_itisnotthecasethat,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    STATE(42), 1,
      sym_modal_verb,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_is,
    STATE(43), 1,
      sym_modal_verb,
    ACTIONS(41), 6,
      anon_sym_OBLIGATION,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_PERMISSION,
      anon_sym_may,
      anon_sym_PROHIBITION,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_on,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_onthe,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_on,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_onthe,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_verb_status,
    ACTIONS(39), 6,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_verb,
    ACTIONS(89), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_verb_status,
    ACTIONS(39), 6,
      anon_sym_DELIVERED,
      anon_sym_delivered,
      anon_sym_PAID,
      anon_sym_paid,
      anon_sym_CHARGED,
      anon_sym_charged,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_onthe,
    ACTIONS(73), 1,
      anon_sym_on,
    ACTIONS(75), 1,
      sym_string,
    STATE(16), 1,
      sym_subject,
    STATE(51), 1,
      sym_boolean_expression,
    STATE(96), 1,
      sym_date,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      anon_sym_DELIVER,
      anon_sym_deliver,
      anon_sym_PAY,
      anon_sym_pay,
      anon_sym_CHARGE,
      anon_sym_charge,
  [1210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_identity,
    STATE(52), 1,
      sym_simple_statement,
    STATE(69), 1,
      sym_simple_definition,
    STATE(89), 1,
      sym_definition,
    STATE(94), 1,
      sym_statement,
  [1232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_onthe,
    ACTIONS(73), 1,
      anon_sym_on,
    ACTIONS(75), 1,
      sym_string,
    STATE(27), 1,
      sym_subject,
    STATE(90), 1,
      sym_date,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_on,
      sym_string,
    ACTIONS(113), 3,
      anon_sym_itisthecasethat,
      anon_sym_itisnotthecasethat,
      anon_sym_onthe,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_on,
      sym_string,
    ACTIONS(123), 3,
      anon_sym_itisthecasethat,
      anon_sym_itisnotthecasethat,
      anon_sym_onthe,
  [1391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_identity,
    STATE(53), 1,
      sym_simple_condition,
    STATE(93), 1,
      sym_condition,
  [1407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_identity,
    STATE(53), 1,
      sym_simple_condition,
    STATE(99), 1,
      sym_condition,
  [1423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_simple_definition,
    STATE(77), 1,
      sym_definition,
    STATE(91), 1,
      sym_identity,
  [1439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(52), 1,
      sym_simple_statement,
    STATE(79), 1,
      sym_statement,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_identity,
    STATE(53), 1,
      sym_simple_condition,
    STATE(110), 1,
      sym_condition,
  [1491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_AND,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_identity,
    STATE(53), 1,
      sym_simple_condition,
    STATE(72), 1,
      sym_condition,
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_onthe,
    ACTIONS(141), 2,
      anon_sym_on,
      sym_string,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(58), 1,
      sym_date,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(59), 1,
      sym_date,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_IF,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_IF,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(50), 1,
      sym_date,
  [1637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(60), 1,
      sym_date,
  [1650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_onthe,
    ACTIONS(47), 1,
      anon_sym_on,
    STATE(56), 1,
      sym_date,
  [1663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
  [1690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(55), 1,
      sym_subject,
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_IS,
    ACTIONS(57), 1,
      anon_sym_EQUALS,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(34), 1,
      sym_subject,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(88), 1,
      sym_subject,
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(66), 1,
      sym_subject,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(25), 1,
      sym_subject,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(44), 1,
      sym_subject,
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_C_DASHAND,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(33), 1,
      sym_subject,
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(40), 1,
      sym_subject,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_string,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_string,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_to,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_num,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_to,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_THEN,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_forbidden,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_num,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_num,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_num,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_string,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_THAN,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_than,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_string,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_string,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_num,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_string,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_num,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_TO,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_num,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_num,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_string,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_num,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 249,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 509,
  [SMALL_STATE(17)] = 547,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 609,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 671,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 725,
  [SMALL_STATE(24)] = 746,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 787,
  [SMALL_STATE(27)] = 822,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 876,
  [SMALL_STATE(30)] = 905,
  [SMALL_STATE(31)] = 924,
  [SMALL_STATE(32)] = 950,
  [SMALL_STATE(33)] = 976,
  [SMALL_STATE(34)] = 994,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1028,
  [SMALL_STATE(37)] = 1044,
  [SMALL_STATE(38)] = 1059,
  [SMALL_STATE(39)] = 1074,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1104,
  [SMALL_STATE(42)] = 1119,
  [SMALL_STATE(43)] = 1134,
  [SMALL_STATE(44)] = 1149,
  [SMALL_STATE(45)] = 1164,
  [SMALL_STATE(46)] = 1176,
  [SMALL_STATE(47)] = 1198,
  [SMALL_STATE(48)] = 1210,
  [SMALL_STATE(49)] = 1232,
  [SMALL_STATE(50)] = 1243,
  [SMALL_STATE(51)] = 1254,
  [SMALL_STATE(52)] = 1265,
  [SMALL_STATE(53)] = 1278,
  [SMALL_STATE(54)] = 1291,
  [SMALL_STATE(55)] = 1310,
  [SMALL_STATE(56)] = 1321,
  [SMALL_STATE(57)] = 1332,
  [SMALL_STATE(58)] = 1345,
  [SMALL_STATE(59)] = 1356,
  [SMALL_STATE(60)] = 1367,
  [SMALL_STATE(61)] = 1378,
  [SMALL_STATE(62)] = 1391,
  [SMALL_STATE(63)] = 1407,
  [SMALL_STATE(64)] = 1423,
  [SMALL_STATE(65)] = 1439,
  [SMALL_STATE(66)] = 1455,
  [SMALL_STATE(67)] = 1465,
  [SMALL_STATE(68)] = 1475,
  [SMALL_STATE(69)] = 1491,
  [SMALL_STATE(70)] = 1503,
  [SMALL_STATE(71)] = 1513,
  [SMALL_STATE(72)] = 1529,
  [SMALL_STATE(73)] = 1538,
  [SMALL_STATE(74)] = 1549,
  [SMALL_STATE(75)] = 1562,
  [SMALL_STATE(76)] = 1571,
  [SMALL_STATE(77)] = 1584,
  [SMALL_STATE(78)] = 1593,
  [SMALL_STATE(79)] = 1604,
  [SMALL_STATE(80)] = 1613,
  [SMALL_STATE(81)] = 1624,
  [SMALL_STATE(82)] = 1637,
  [SMALL_STATE(83)] = 1650,
  [SMALL_STATE(84)] = 1663,
  [SMALL_STATE(85)] = 1672,
  [SMALL_STATE(86)] = 1680,
  [SMALL_STATE(87)] = 1690,
  [SMALL_STATE(88)] = 1700,
  [SMALL_STATE(89)] = 1710,
  [SMALL_STATE(90)] = 1718,
  [SMALL_STATE(91)] = 1728,
  [SMALL_STATE(92)] = 1738,
  [SMALL_STATE(93)] = 1748,
  [SMALL_STATE(94)] = 1756,
  [SMALL_STATE(95)] = 1764,
  [SMALL_STATE(96)] = 1774,
  [SMALL_STATE(97)] = 1784,
  [SMALL_STATE(98)] = 1794,
  [SMALL_STATE(99)] = 1804,
  [SMALL_STATE(100)] = 1812,
  [SMALL_STATE(101)] = 1822,
  [SMALL_STATE(102)] = 1832,
  [SMALL_STATE(103)] = 1839,
  [SMALL_STATE(104)] = 1846,
  [SMALL_STATE(105)] = 1853,
  [SMALL_STATE(106)] = 1860,
  [SMALL_STATE(107)] = 1867,
  [SMALL_STATE(108)] = 1874,
  [SMALL_STATE(109)] = 1881,
  [SMALL_STATE(110)] = 1888,
  [SMALL_STATE(111)] = 1895,
  [SMALL_STATE(112)] = 1902,
  [SMALL_STATE(113)] = 1909,
  [SMALL_STATE(114)] = 1916,
  [SMALL_STATE(115)] = 1923,
  [SMALL_STATE(116)] = 1930,
  [SMALL_STATE(117)] = 1937,
  [SMALL_STATE(118)] = 1944,
  [SMALL_STATE(119)] = 1951,
  [SMALL_STATE(120)] = 1958,
  [SMALL_STATE(121)] = 1965,
  [SMALL_STATE(122)] = 1972,
  [SMALL_STATE(123)] = 1979,
  [SMALL_STATE(124)] = 1986,
  [SMALL_STATE(125)] = 1993,
  [SMALL_STATE(126)] = 2000,
  [SMALL_STATE(127)] = 2007,
  [SMALL_STATE(128)] = 2014,
  [SMALL_STATE(129)] = 2021,
  [SMALL_STATE(130)] = 2028,
  [SMALL_STATE(131)] = 2035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
