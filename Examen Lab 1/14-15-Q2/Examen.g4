grammar Examen;


program
    : (instruction ';')+
    ;

instruction
    : ID ASSIGN expr            #assignInst
    | ID '.' PUSH '(' expr ')'  #pushInst
    | ID '.' POP                #popInst
    ;

expr
    : expr PLUS expr            #addExpr
    | ID '.' TOP                #stackTopExpr
    | ID                        #identExpr
    | INT                       #intExpr
    | STRING                    #stringExpr
    ;


INT     : [1-9][0-9]*;
STRING  : '"' (~('"'))* '"';
ASSIGN   : '=';
PLUS    : '+';
TOP     : 'top';
PUSH    : 'push';
POP     : 'pop';
ID      : [a-zA-Z_][a-zA-Z0-9_]*;

WS : [ \t\n]+ -> skip ;
