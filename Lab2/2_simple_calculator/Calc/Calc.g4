grammar Calc;

prog:   stat+ ;

stat:   expr NEWLINE                                  # printExpr
    |   ID '=' expr NEWLINE                           # assign
    |	exprBool NEWLINE 			                  # printExprBool
    |	LPAR exprBool QMARK stat DOUBLE stat RPAR     # ternary
    |   WHILE LPAR exprBool RPAR LKEY (stat)* RKEY    # while
    |   IF exprBool THEN (stat)* (ELSE 
            (stat)* | ) ENDIF                         # if 
    |   NEWLINE                                       # blank
    ;

expr:	SUB expr 					                  # negateExpr
	|	expr op=(MUL | DIV) expr                      # prodOrDiv
    |   expr op=(ADD | SUB) expr 	                  # plusOrSub
    |   MAXFUN LPAR expr (COMMA expr)+ RPAR           # maxFunction
    |	LPAR expr RPAR				                  # subExpr
    |   INT                                           # int
    |   ID                                            # id
    ;

exprBool:	exprBool AND exprBool	                  # and
		|	exprBool OR exprBool	                  # or
		| 	NOT exprBool			                  # not
        |   LPAR exprBool RPAR                        # subExprBool
		| 	expr op=(EQ | NEQ | GT | 
                LT | GET | LET) expr 	              # termBool
		;

MUL :   '*' ;
ADD :   '+' ;
SUB :	'-'	;
DIV	:	'/'	;

LPAR:	'('	;
RPAR:	')'	;

QMARK : '?' ;
DOUBLE: ':' ;

IF:     'if'    ;
ENDIF:  'endif' ;
THEN:   'then'  ;
ELSE:   'else'  ;

WHILE:  'while' ;
LKEY:   '{' ;
RKEY:   '}' ;

MAXFUN: 'max'   ;
COMMA:  ',' ;

AND	:	'and'	;
OR	:	'or'	;
NOT	:	'not'	;

GT	:	'>'	;
LT	:	'<'	;
EQ	:	'=='   ;
NEQ	:	'!='  ;
GET	:	'>='  ;
LET	:	'<='  ;

ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :   [ \t]+ -> skip ; // toss out whitespace
