// Grammar for parsing grammars
grammar grammarParser;
gram: component+
    ;
    
component: symbol otter expansion SEMICOLON
    | comment
    ;
    
comment:  ('#' | '//') WORD*
    | '/*' WORD* '*/'
    ;
    
    
expansion: arg (SPLITTER arg)*
    ;

arg: entersymbol+
    ;
    
entersymbol: checksymbol optionalsymbol
    | checksymbol repeatsymbol
    | checksymbol repeat1symbol
    | checksymbol
    ;
    
    
optionalsymbol: QUESTION
    ;

repeatsymbol: STAR
    ;

repeat1symbol: PLUS
    ;

bracketsymbol: OPENBRACKET expansion CLOSEBRACKET
    ;
    
checksymbol: bracketsymbol
    | symbol
    | strings
    | regex
    ;
    
symbol: CHEVRON WORD ICHEVRON
    ;

otter: OTTER
    | WORD? OTTER
    ;
    
strings: QUOTE (WORD | othersymbol)* QUOTE
    | SINGLEQUOTE (WORD | othersymbol)* SINGLEQUOTE
    | WORD
    ;
    
othersymbol: OPENBRACKET
    | CLOSEBRACKET
    | SPLITTER
    | CHEVRON
    | ICHEVRON
    | QUESTION
    | PLUS
    | STAR
    | SEMICOLON
    | COLON
    | SLASH
    ;

regex: SLASH WORD SLASH
    ;

OTTER : '::=' ;
OPENBRACKET: '(';
CLOSEBRACKET: ')';
SPLITTER: '|' ;
CHEVRON: '<'  ;
ICHEVRON: '>' ; // inverted chevron
QUOTE: '"';
SINGLEQUOTE: '\'';
QUESTION: '?';
PLUS: '+';
STAR: '*';
SEMICOLON: ';';
COLON: ':';
SLASH: '/';

INT : [0-9]+ ;
WORD: ~[ \t\n?"'<>:|;()/]+;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;