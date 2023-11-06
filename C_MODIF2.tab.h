/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_C_MODIF2_TAB_H_INCLUDED
# define YY_YY_C_MODIF2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    FLOAT = 259,
    DOUBLE = 260,
    LONG = 261,
    UNSIGNED = 262,
    SIGNED = 263,
    SHORT = 264,
    UNSIGNED_LONG = 265,
    VARIABLE = 266,
    WHILE = 267,
    IF = 268,
    PRINT = 269,
    VOID = 270,
    BLOCK = 271,
    WRITELN = 272,
    SWITCH = 273,
    CASE = 274,
    DEFAULT = 275,
    BREAK = 276,
    DO = 277,
    INCREMENT = 278,
    DECREMENT = 279,
    POST_INCREMENT = 280,
    PRE_INCREMENT = 281,
    POST_INCREMENT_ASSIGN = 282,
    PRE_INCREMENT_ASSIGN = 283,
    POST_DECREMENT = 284,
    PRE_DECREMENT = 285,
    POST_DECREMENT_ASSIGN = 286,
    PRE_DECREMENT_ASSIGN = 287,
    AND = 288,
    OR = 289,
    NOT = 290,
    PLUS_EQUAL = 291,
    MINUS_EQUAL = 292,
    MULT_EQUAL = 293,
    SUBST_EQUAL = 294,
    POWER_EQUAL = 295,
    IFX = 296,
    ELSE = 297,
    GE = 298,
    LE = 299,
    EQ = 300,
    NE = 301,
    UMINUS = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "C_MODIF2.y"

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

#line 118 "C_MODIF2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_MODIF2_TAB_H_INCLUDED  */
