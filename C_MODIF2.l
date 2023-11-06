%{

#include <ctype.h>
#include <stdlib.h>
#include "C_MODIF2.h"
#include "C_MODIF2.tab.h"

void yyerror(char *);

%}

%x COMMENT

%%

">="            return GE; 
"<="            return LE; 
"=="            return EQ; 
"!="            return NE; 
"while"         return WHILE; 
"if"            return IF; 
"else"          return ELSE; 
"print"         return PRINT; 
"void"       return VOID;
"writeln"       return WRITELN;
"switch"         return SWITCH;
"case"           return CASE;
"default"        return DEFAULT;
"break"          return BREAK;
"do"     return DO; 
"++"    return INCREMENT; 
"--"    return DECREMENT; 
"&&"  return AND; 
"||"  return OR; 
"!"   return NOT; 
"+=" return PLUS_EQUAL;
"-=" return MINUS_EQUAL;
"*=" return MULT_EQUAL;
"/=" return SUBST_EQUAL;
"^=" return POWER_EQUAL;


[a-zA-Z]       {  
    yylval.sIndex = tolower(*yytext) - 'a'; 
    return VARIABLE; 
} 
0           { 
                yylval.iValue = atoi(yytext); 
                return INTEGER; 
             } 
	     
	     	     
	"0"[0-7]* { 
    yylval.iValue = strtol(yytext, NULL, 8); 
    return INTEGER; 
}

        "0"[xX][0-9a-fA-F]+ { 
    yylval.iValue = strtol(yytext + 2, NULL, 16); 
    return INTEGER; 
}

       "0x"[0-9a-fA-F]*"."[0-9a-fA-F]*"p"[+-]?[0-9]+ {
    yylval.dValue = strtod(yytext, NULL);
    return DOUBLE;
}

    
[1-9][0-9]* { 
                yylval.iValue = atoi(yytext); 
                return INTEGER; 
             } 
[-()<>=+*/:;{}.^&|!,] { 
    return *yytext; 
}

[0-9]*"."[0-9]+ {
    yylval.fValue = atof(yytext);
    return FLOAT;
}

[0-9]*"."[0-9]+([eE][+-]?[0-9]+)? {
    yylval.dValue = strtod(yytext, NULL);
    return DOUBLE;
}

[1-9]+[Ll] { 
    yylval.lValue = atol(yytext); 
    return LONG; 
}

[1-9][0-9]*[Uu] { 
                yylval.uValue = (unsigned int)atoi(yytext); 
                return UNSIGNED; 
             } 
	     
[1-9][0-9]+[Ss] { 
    yylval.sValue = (signed int)atoi(yytext); 
    return SIGNED; 
}

[1-9][0-9]+[Hh] { 
    yylval.shValue = (short)atoi(yytext); 
    return SHORT; 
}

[0-9]+[Uu][Ll] {
    yylval.ulValue = strtoul(yytext, NULL, 0);
    return UNSIGNED_LONG;
}
   
[ \t\n]+        ;       /* ignore whitespace */ 
.               yyerror("Unknown character"); 

"/*"            { BEGIN(COMMENT); }
<COMMENT>"*/"   { BEGIN(INITIAL); }
<COMMENT>.|\n   { /* ignore everything inside a comment */ }

"//".*          { /* ignore everything after // on a line */ }


%%

int yywrap(void) { 
    return 1; 
}