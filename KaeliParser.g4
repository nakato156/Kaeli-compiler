parser grammar KaeliParser;
options { tokenVocab=KaeliLexer; }

program : stat* EOF;
stat 
    : variable SEMI
    | expr SEMI
    | funcDef
    | for END_BLOCK
    | if END_BLOCK
    | array SEMI
    ;
    
expr
    : NUM
    | BOOL
    | STRING
    | ID
    | LAPREN expr RPAREN
    | expr (MUL|DIV|ADD|RESTA) expr
    | expr EQUAL EQUAL expr
    | expr (LESS | GREATER) EQUAL  expr
    | funcCall
    | array
    ;

addsub: ADD | RESTA;

multdiv: MUL | DIV;

array
    : LBRACKET expr (COMMA expr)* RBRACKET
    ;

variable
    : ID EQUAL expr
    ;

funcParams
    : ID (COMMA ID)*
    ;

funcDef
    : FUNC ID LAPREN funcParams RPAREN START_BLOCK stat* END_BLOCK
    ;

funcArgs
    : expr (COMMA expr)*
    ;


funcCall 
    : ID LAPREN funcArgs RPAREN
    ;

for
    : FOR
    | DESDE (NUM | ID) HASTA (NUM | ID)
    | EN (ID | array)
    ;

if 
    : COND expr START_BLOCK stat* 
    ;
