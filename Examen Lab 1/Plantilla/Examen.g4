grammar Examen;

expr
    : op=(NOT | MINUS | PLUS) expr                                # unaryArithmeticExpr
    | expr op=(MUL | DIV) expr                        # arithmeticExpr
    | expr op=(PLUS | MINUS) expr                           # arithmeticExpr
    | expr op=(EQ | NEQ | GT | LT | LET | GET) expr         # relationalExpr
    | expr op=AND expr                                      # booleanExpr
    | expr op=OR expr                                       # booleanExpr
    | '(' expr ')'                                          # subExpr
    | INT                                                   # intExpr
    | FLOAT                                                 # floatExpr
    | ID                                                    # idExpr
    | CHAR                                                  # charExpr
    ;


PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
AND: 'and';
NOT: 'not';
OR:  'or';
EQ: '==';
NEQ: '!=';
LT: '<';
GT: '>';
LET: '<=';
GET: '>=';


INT: [1-9][0-9]*;
FLOAT: (INT | '0')? '.' [0-9]+;
CHAR: '\'' (~('\'' | '\\') | ESC_SEQ) '\'';
STRING: '"' (~('"' | '\\') | ESC_SEQ)* '"';
fragment
ESC_SEQ: '\\' ('n' | 't');

ID: [a-zA-Z]+;

WS : [ \t\n]+ -> skip ;
