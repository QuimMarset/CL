grammar Expr;

s   : e | exprBool 
    ;
e   : SUB e # negate
    | e op=(MULT | DIV) e    # prodOrDiv
    | e op=(ADD | SUB) e     # plusOrSub
    | LPAR e RPAR # subExpr
    | INT     # value
    ;
exprBool    : exprBool AND exprBool # and
            | exprBool OR exprBool # or
            | NOT exprBool # not
            | e op=(EQ | NEQ | GT | LT | GET | LET) e # termeBool
            ;


MULT: '*' ;
ADD : '+' ;
SUB : '-' ;
DIV : '/' ;

LPAR: '(' ;
RPAR: ')' ;

EQ  : '==' ;
NEQ : '!=' ;
GT  : '>' ;
LT  : '<' ;
GET : '>=' ;
LET : '<=' ;

AND : 'and' ;
OR  : 'or' ;
NOT : 'not' ;

INT : [0-9]+ ;
WS : [ \t\n]+ -> skip ;
