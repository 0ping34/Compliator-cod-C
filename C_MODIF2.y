%{

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "C_MODIF2.h"
#define DOWHILE   11 

/* prototypes */

nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *con(int iValue);
nodeType *con_float(float fValue);
nodeType *con_double(double dValue);
nodeType *con_long(long lValue);
nodeType *con_unsigned(unsigned uValue);
nodeType *con_signed(signed sValue);
nodeType *con_short(short shValue);
nodeType *con_unsigned_long(unsigned long ulValue);
void freeNode(nodeType *p);
int ex(nodeType *p);
int yylex(void);
void yyerror(char *s);
symEntry  sym[208];  /* symbol table */                 

%}

%union {
    int iValue;                
    float fValue;               
    double dValue; 
    long     lValue;
    unsigned uValue;
    signed sValue;
    short shValue;
    unsigned long ulValue;
    char sIndex;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */
};

   
    
%token <iValue> INTEGER
%token <fValue> FLOAT
%token <dValue> DOUBLE
%token <lValue> LONG
%token <uValue> UNSIGNED
%token <sValue> SIGNED
%token <shValue> SHORT
%token <ulValue> UNSIGNED_LONG
%token <sIndex> VARIABLE
%token WHILE IF PRINT VOID BLOCK
%token WRITELN
%token SWITCH CASE DEFAULT BREAK
%token DO
%token INCREMENT DECREMENT
%token POST_INCREMENT PRE_INCREMENT POST_INCREMENT_ASSIGN PRE_INCREMENT_ASSIGN
%token POST_DECREMENT PRE_DECREMENT POST_DECREMENT_ASSIGN PRE_DECREMENT_ASSIGN
%token AND OR NOT
%token PLUS_EQUAL MINUS_EQUAL MULT_EQUAL SUBST_EQUAL POWER_EQUAL
%nonassoc IFX
%nonassoc ELSE
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/'
%left '^'
%nonassoc UMINUS
%type <nPtr> stmt expr stmt_list case_stmts case_stmt opt_else assignment_list default_stmt

%%


program:
        function                { exit(0); }
        ;

function:
        function stmt         { ex($2); freeNode($2); }
        | /* NULL */
        ;

stmt:
        ';'                            { $$ = opr(';', 2, NULL, NULL); }
        | expr ';'                     { $$ = $1; }
        | PRINT expr ';'               { $$ = opr(PRINT, 1, $2); }
	| assignment_list ';'          { $$ = $1; }
        | WHILE '(' expr ')' stmt      { $$ = opr(WHILE, 2, $3, $5); }
	| WRITELN expr ';'                 { $$ = opr(WRITELN, 1, $2); }
	| IF '(' expr ')' stmt opt_else { $$ = opr(IF, 3, $3, $5, $6); }
        | '{' stmt_list '}'            { $$ = opr(BLOCK, 1, $2); } /* block of code */
        | VOID ';'                     { $$ = opr(VOID, 0); } /* void statement */
	| SWITCH '(' expr ')' '{' case_stmts default_stmt '}'  { $$ = opr(SWITCH, 3, $3, $6, $7); }
	| DO stmt WHILE '(' expr ')' { $$ = opr(DOWHILE, 2, $2, $5); }
        ;   

opt_else: { $$ = NULL; }
        | ELSE stmt { $$ = $2; }

stmt_list:
    stmt_list stmt      { $$ = opr(';', 2, $1, $2); }
    | stmt              { $$ = $1; }
    ;
    
assignment_list:
        VARIABLE '=' expr              { $$ = opr('=', 2, id($1), $3); }
        | assignment_list ',' VARIABLE '=' expr { $$ = opr(';', 2, $1, opr('=', 2, id($3), $5)); }
        ;
	
expr:
         INTEGER { $$ = con($1); }
	| FLOAT { $$ = con_float($1); }
	| DOUBLE { $$ = con_double($1); }
	| LONG      { $$ = con_long($1); }
	| UNSIGNED      { $$ = con_unsigned($1); }
	| SIGNED      { $$ = con_signed($1); }
	| SHORT      { $$ = con_short($1); }
	| UNSIGNED_LONG      { $$ = con_unsigned_long($1); }
        | VARIABLE           { $$ = id($1); }
        | expr '+' expr      { $$ = opr('+', 2, $1, $3); }
        | expr '-' expr      { $$ = opr('-', 2, $1, $3); }
        | expr '*' expr      { $$ = opr('*', 2, $1, $3); }
        | expr '/' expr      { $$ = opr('/', 2, $1, $3); }
        | '-' expr %prec UMINUS { $$ = opr(UMINUS, 1, $2); }
	| expr '<' expr      { $$ = opr('<', 2, $1, $3); }
        | expr '>' expr      { $$ = opr('>', 2, $1, $3); }
	| expr '^' expr      { $$ = opr('^', 2, $1, $3); }
	|expr AND expr { $$ = opr(AND, 2, $1, $3); }
        | expr OR expr  { $$ = opr(OR, 2, $1, $3); }
        | NOT expr      { $$ = opr(NOT, 1, $2); }
        | '(' expr ')'       { $$ = $2; }
        | expr EQ expr       { $$ = opr(EQ, 2, $1, $3); }  /* equality comparison */
        | expr NE expr       { $$ = opr(NE, 2, $1, $3); }  /* inequality comparison */
        | expr GE expr       { $$ = opr(GE, 2, $1, $3); }  /* greater than or equal to */
        | expr LE expr       { $$ = opr(LE, 2, $1, $3); }  /* less than or equal to */
	| VARIABLE INCREMENT { $$ = opr(POST_INCREMENT, 1, id($1)); }
        | INCREMENT VARIABLE { $$ = opr(PRE_INCREMENT, 1, id($2)); }
        | VARIABLE '=' VARIABLE INCREMENT { $$ = opr(POST_INCREMENT_ASSIGN, 2, id($1), id($3)); }
        | VARIABLE '=' INCREMENT VARIABLE { $$ = opr(PRE_INCREMENT_ASSIGN, 2, id($1), id($4)); }
	| VARIABLE DECREMENT { $$ = opr(POST_DECREMENT, 1, id($1)); }
        | DECREMENT VARIABLE { $$ = opr(PRE_DECREMENT, 1, id($2)); }
        | VARIABLE '=' VARIABLE DECREMENT { $$ = opr(POST_DECREMENT_ASSIGN, 2, id($1), id($3)); }
        | VARIABLE '=' DECREMENT VARIABLE { $$ = opr(PRE_DECREMENT_ASSIGN, 2, id($1), id($4)); }
	| expr PLUS_EQUAL expr { $$ = opr(PLUS_EQUAL, 2, $1, $3); }
	| expr MINUS_EQUAL expr { $$ = opr(MINUS_EQUAL, 2, $1, $3); }
	| expr MULT_EQUAL expr { $$ = opr(MULT_EQUAL, 2, $1, $3); }
	| expr SUBST_EQUAL expr { $$ = opr(SUBST_EQUAL, 2, $1, $3); }
	| expr POWER_EQUAL expr { $$ = opr(POWER_EQUAL, 2, $1, $3); }
	;
	
case_stmts:
    case_stmts case_stmt      { $$ = opr(';', 2, $1, $2); }
    | case_stmt               { $$ = $1; }
    ;

case_stmt:
    CASE INTEGER ':' stmt_list BREAK ';'     { $$ = opr(CASE, 2, con($2), $4); }
    | CASE INTEGER ':' BREAK ';'             { $$ = opr(CASE, 2, con($2), opr(BREAK, 0)); }
    ;

default_stmt:
    DEFAULT ':' stmt_list                  { $$ = opr(DEFAULT, 1, $3); }
    | /* empty */                          { $$ = NULL; }
    ;

  
%%

nodeType *con(int iValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type =typeIntCon;
    p->con.value.iValue= iValue;

    return p;
}

nodeType *con_float(float fValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeFloatCon;
       p->con.value.fValue = fValue;


    return p;
}

nodeType *con_double(double dValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeDoubleCon;
       p->con.value.dValue = dValue;


    return p;
}

nodeType *con_long(long lValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeLongCon;
       p->con.value.lValue = lValue;


    return p;
}

nodeType *con_unsigned(unsigned uValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeUnsignedIntCon;
       p->con.value.uValue = uValue;


    return p;
}

nodeType *con_signed(signed sValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeSignedCon;
       p->con.value.sValue = sValue;


    return p;
}

nodeType *con_short(short shValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
       p->type =typeShortCon;
       p->con.value.shValue = shValue;


    return p;
}

nodeType *con_unsigned_long(unsigned long ulValue) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(conNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type =typeUnsignedLongCon;
    p->con.value.ulValue = ulValue;

    return p;
}

nodeType *id(int i) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = sizeof(idNodeType)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;


}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    size_t nodeSize;
    int i;

    /* allocate node */
    nodeSize = sizeof(oprNodeType)*2 + (nops - 1) * sizeof(nodeType*)*2;
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOper;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);

    return p;
}

void freeNode(nodeType *p) {
    int i;

    if (!p) return;

    if (p->type == typeOper) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }

    free (p);
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}