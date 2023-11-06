/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "C_MODIF2.y"


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


#line 98 "C_MODIF2.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 211 "C_MODIF2.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_MODIF2_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   519

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,    51,    49,    61,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    55,
      48,    60,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    79,    80,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    97,    98,   101,   102,
     106,   107,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     152,   153,   157,   158,   162,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "DOUBLE", "LONG",
  "UNSIGNED", "SIGNED", "SHORT", "UNSIGNED_LONG", "VARIABLE", "WHILE",
  "IF", "PRINT", "VOID", "BLOCK", "WRITELN", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "DO", "INCREMENT", "DECREMENT", "POST_INCREMENT",
  "PRE_INCREMENT", "POST_INCREMENT_ASSIGN", "PRE_INCREMENT_ASSIGN",
  "POST_DECREMENT", "PRE_DECREMENT", "POST_DECREMENT_ASSIGN",
  "PRE_DECREMENT_ASSIGN", "AND", "OR", "NOT", "PLUS_EQUAL", "MINUS_EQUAL",
  "MULT_EQUAL", "SUBST_EQUAL", "POWER_EQUAL", "IFX", "ELSE", "GE", "LE",
  "EQ", "NE", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'^'", "UMINUS",
  "';'", "'('", "')'", "'{'", "'}'", "'='", "','", "':'", "$accept",
  "program", "function", "stmt", "opt_else", "stmt_list",
  "assignment_list", "expr", "case_stmts", "case_stmt", "default_stmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    62,    60,    43,
      45,    42,    47,    94,   302,    59,    40,    41,   123,   125,
      61,    44,    58
};
# endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -109,     7,   247,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,   -22,   -44,   -36,   269,   -46,   269,   -25,   247,
      21,    22,   269,   269,  -109,   269,   247,  -109,   -47,   368,
    -109,  -109,   303,   269,   269,   -20,   391,  -109,   414,   269,
      24,  -109,  -109,   437,    89,   129,  -109,    61,  -109,    23,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,  -109,   -18,
      26,    28,   437,   185,   297,    -1,  -109,  -109,   324,   -15,
    -109,  -109,  -109,   -17,   437,   437,   437,   437,   437,   437,
     437,   458,   458,   458,   458,   458,   458,   466,   466,    53,
      53,    89,  -109,  -109,  -109,  -109,   247,   247,    -8,    33,
      66,    30,   269,   269,  -109,    38,  -109,  -109,  -109,  -109,
      62,   346,   437,   247,  -109,    79,     5,  -109,  -109,  -109,
      32,    35,  -109,    36,   135,   247,  -109,    43,   191,   247,
    -109,    44,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     3,     0,     0,
      47,    51,     0,     0,     0,    30,     0,    13,     0,     0,
       0,    48,    52,    41,    35,     0,    19,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    30,
       0,     0,    20,     0,     0,     0,     7,    10,     0,     0,
      42,    12,    18,     0,    39,    40,    55,    56,    57,    58,
      59,    45,    46,    43,    44,    37,    36,    31,    32,    33,
      34,    38,    47,    51,    48,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    16,    49,    53,    50,    54,
       0,     0,    21,     0,    11,     0,    65,    61,    15,    17,
       0,     0,    60,     0,     0,     0,    14,     0,     0,    64,
      63,     0,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,  -109,    -2,  -109,  -108,  -109,    -4,  -109,   -26,
    -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    46,   124,    47,    28,    29,   126,   127,
     133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    30,    31,    30,    31,   102,   103,     3,    48,    37,
     108,    36,    33,    38,    49,   116,   117,    40,    43,    44,
      34,    45,   109,   110,   125,   131,   138,   139,    72,    73,
      74,    39,    41,    42,    83,    78,    79,   104,    32,   105,
      75,   112,    75,   113,   118,    82,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   119,    17,    18,
     123,   125,   130,    19,    20,    21,    50,    51,   120,    52,
      53,    54,    55,    56,   134,   136,    22,   135,   140,   142,
     132,     0,     0,     0,   114,   115,    67,     0,   121,   122,
       0,    23,     0,     0,     0,     0,    24,    25,     0,    26,
      81,   129,    50,    51,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    82,    82,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,    18,     0,     0,   137,    19,    20,    21,
       0,     0,    50,    51,     0,    52,    53,    54,    55,    56,
      22,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,    23,    80,     0,     0,     0,
      24,    25,     0,    26,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    17,    18,
       0,     0,   141,    19,    20,    21,     0,     0,    50,    51,
       0,    52,    53,    54,    55,    56,    22,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,    23,   106,     0,     0,     0,    24,    25,     0,    26,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,    18,     0,     0,     0,    19,
      20,    21,     4,     5,     6,     7,     8,     9,    10,    11,
      35,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,    23,     0,     0,
       0,     0,    24,    25,    22,    26,     4,     5,     6,     7,
       8,     9,    10,    11,    69,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,    25,    70,    71,     0,     0,
      50,    51,     0,    52,    53,    54,    55,    56,    22,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    23,   107,     0,     0,    50,    51,    25,
      52,    53,    54,    55,    56,     0,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,    50,
      51,   111,    52,    53,    54,    55,    56,     0,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,    50,    51,   128,    52,    53,    54,    55,    56,     0,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,    68,    50,    51,     0,    52,    53,    54,
      55,    56,     0,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,     0,    76,    50,    51,     0,
      52,    53,    54,    55,    56,     0,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,    77,
      50,    51,     0,    52,    53,    54,    55,    56,     0,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    50,    51,     0,    52,    53,    54,    55,    56,    50,
      51,     0,    52,    53,    54,    55,    56,    63,    64,    65,
      66,    67,     0,     0,     0,     0,     0,    65,    66,    67
};

static const yytype_int16 yycheck[] =
{
       2,    23,    24,    23,    24,    23,    24,     0,    55,    55,
      11,    15,    56,    17,    61,    23,    24,    19,    22,    23,
      56,    25,    23,    24,    19,    20,   134,   135,    32,    33,
      34,    56,    11,    11,    11,    39,    12,    11,    60,    11,
      60,    56,    60,    60,    11,    47,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    11,    17,    18,
      42,    19,     3,    22,    23,    24,    33,    34,    58,    36,
      37,    38,    39,    40,    62,    59,    35,    62,    55,    55,
     126,    -1,    -1,    -1,   106,   107,    53,    -1,   112,   113,
      -1,    50,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,   123,    33,    34,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    -1,    -1,    21,    22,    23,    24,
      -1,    -1,    33,    34,    -1,    36,    37,    38,    39,    40,
      35,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    50,    57,    -1,    -1,    -1,
      55,    56,    -1,    58,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    21,    22,    23,    24,    -1,    -1,    33,    34,
      -1,    36,    37,    38,    39,    40,    35,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    50,    57,    -1,    -1,    -1,    55,    56,    -1,    58,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    -1,    -1,    -1,    22,
      23,    24,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    55,    56,    35,    58,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    56,    23,    24,    -1,    -1,
      33,    34,    -1,    36,    37,    38,    39,    40,    35,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    50,    57,    -1,    -1,    33,    34,    56,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    33,
      34,    57,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    33,    34,    57,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    33,    34,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    33,    34,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      33,    34,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    34,    -1,    36,    37,    38,    39,    40,    33,
      34,    -1,    36,    37,    38,    39,    40,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    64,    65,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    17,    18,    22,
      23,    24,    35,    50,    55,    56,    58,    66,    69,    70,
      23,    24,    60,    56,    56,    11,    70,    55,    70,    56,
      66,    11,    11,    70,    70,    70,    66,    68,    55,    61,
      33,    34,    36,    37,    38,    39,    40,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    55,    11,
      23,    24,    70,    70,    70,    60,    55,    55,    70,    12,
      57,    59,    66,    11,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    23,    24,    11,    11,    57,    57,    11,    23,
      24,    57,    56,    60,    66,    66,    23,    24,    11,    11,
      58,    70,    70,    42,    67,    19,    71,    72,    57,    66,
       3,    20,    72,    73,    62,    62,    59,    21,    68,    68,
      55,    21,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     3,     2,     5,
       3,     6,     3,     2,     8,     6,     0,     2,     2,     1,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     2,     2,     4,
       4,     2,     2,     4,     4,     3,     3,     3,     3,     3,
       2,     1,     6,     5,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 75 "C_MODIF2.y"
                                { exit(0); }
#line 1558 "C_MODIF2.tab.c"
    break;

  case 3:
#line 79 "C_MODIF2.y"
                              { ex((yyvsp[0].nPtr)); freeNode((yyvsp[0].nPtr)); }
#line 1564 "C_MODIF2.tab.c"
    break;

  case 5:
#line 84 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
#line 1570 "C_MODIF2.tab.c"
    break;

  case 6:
#line 85 "C_MODIF2.y"
                                       { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1576 "C_MODIF2.tab.c"
    break;

  case 7:
#line 86 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[-1].nPtr)); }
#line 1582 "C_MODIF2.tab.c"
    break;

  case 8:
#line 87 "C_MODIF2.y"
                                       { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1588 "C_MODIF2.tab.c"
    break;

  case 9:
#line 88 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1594 "C_MODIF2.tab.c"
    break;

  case 10:
#line 89 "C_MODIF2.y"
                                           { (yyval.nPtr) = opr(WRITELN, 1, (yyvsp[-1].nPtr)); }
#line 1600 "C_MODIF2.tab.c"
    break;

  case 11:
#line 90 "C_MODIF2.y"
                                        { (yyval.nPtr) = opr(IF, 3, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1606 "C_MODIF2.tab.c"
    break;

  case 12:
#line 91 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr(BLOCK, 1, (yyvsp[-1].nPtr)); }
#line 1612 "C_MODIF2.tab.c"
    break;

  case 13:
#line 92 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr(VOID, 0); }
#line 1618 "C_MODIF2.tab.c"
    break;

  case 14:
#line 93 "C_MODIF2.y"
                                                               { (yyval.nPtr) = opr(SWITCH, 3, (yyvsp[-5].nPtr), (yyvsp[-2].nPtr), (yyvsp[-1].nPtr)); }
#line 1624 "C_MODIF2.tab.c"
    break;

  case 15:
#line 94 "C_MODIF2.y"
                                     { (yyval.nPtr) = opr(DOWHILE, 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr)); }
#line 1630 "C_MODIF2.tab.c"
    break;

  case 16:
#line 97 "C_MODIF2.y"
          { (yyval.nPtr) = NULL; }
#line 1636 "C_MODIF2.tab.c"
    break;

  case 17:
#line 98 "C_MODIF2.y"
                    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1642 "C_MODIF2.tab.c"
    break;

  case 18:
#line 101 "C_MODIF2.y"
                        { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1648 "C_MODIF2.tab.c"
    break;

  case 19:
#line 102 "C_MODIF2.y"
                        { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1654 "C_MODIF2.tab.c"
    break;

  case 20:
#line 106 "C_MODIF2.y"
                                       { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].sIndex)), (yyvsp[0].nPtr)); }
#line 1660 "C_MODIF2.tab.c"
    break;

  case 21:
#line 107 "C_MODIF2.y"
                                                { (yyval.nPtr) = opr(';', 2, (yyvsp[-4].nPtr), opr('=', 2, id((yyvsp[-2].sIndex)), (yyvsp[0].nPtr))); }
#line 1666 "C_MODIF2.tab.c"
    break;

  case 22:
#line 111 "C_MODIF2.y"
                 { (yyval.nPtr) = con((yyvsp[0].iValue)); }
#line 1672 "C_MODIF2.tab.c"
    break;

  case 23:
#line 112 "C_MODIF2.y"
                { (yyval.nPtr) = con_float((yyvsp[0].fValue)); }
#line 1678 "C_MODIF2.tab.c"
    break;

  case 24:
#line 113 "C_MODIF2.y"
                 { (yyval.nPtr) = con_double((yyvsp[0].dValue)); }
#line 1684 "C_MODIF2.tab.c"
    break;

  case 25:
#line 114 "C_MODIF2.y"
                    { (yyval.nPtr) = con_long((yyvsp[0].lValue)); }
#line 1690 "C_MODIF2.tab.c"
    break;

  case 26:
#line 115 "C_MODIF2.y"
                        { (yyval.nPtr) = con_unsigned((yyvsp[0].uValue)); }
#line 1696 "C_MODIF2.tab.c"
    break;

  case 27:
#line 116 "C_MODIF2.y"
                      { (yyval.nPtr) = con_signed((yyvsp[0].sValue)); }
#line 1702 "C_MODIF2.tab.c"
    break;

  case 28:
#line 117 "C_MODIF2.y"
                     { (yyval.nPtr) = con_short((yyvsp[0].shValue)); }
#line 1708 "C_MODIF2.tab.c"
    break;

  case 29:
#line 118 "C_MODIF2.y"
                             { (yyval.nPtr) = con_unsigned_long((yyvsp[0].ulValue)); }
#line 1714 "C_MODIF2.tab.c"
    break;

  case 30:
#line 119 "C_MODIF2.y"
                             { (yyval.nPtr) = id((yyvsp[0].sIndex)); }
#line 1720 "C_MODIF2.tab.c"
    break;

  case 31:
#line 120 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1726 "C_MODIF2.tab.c"
    break;

  case 32:
#line 121 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1732 "C_MODIF2.tab.c"
    break;

  case 33:
#line 122 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1738 "C_MODIF2.tab.c"
    break;

  case 34:
#line 123 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1744 "C_MODIF2.tab.c"
    break;

  case 35:
#line 124 "C_MODIF2.y"
                                { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr)); }
#line 1750 "C_MODIF2.tab.c"
    break;

  case 36:
#line 125 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('<', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1756 "C_MODIF2.tab.c"
    break;

  case 37:
#line 126 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('>', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1762 "C_MODIF2.tab.c"
    break;

  case 38:
#line 127 "C_MODIF2.y"
                             { (yyval.nPtr) = opr('^', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1768 "C_MODIF2.tab.c"
    break;

  case 39:
#line 128 "C_MODIF2.y"
                       { (yyval.nPtr) = opr(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1774 "C_MODIF2.tab.c"
    break;

  case 40:
#line 129 "C_MODIF2.y"
                        { (yyval.nPtr) = opr(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1780 "C_MODIF2.tab.c"
    break;

  case 41:
#line 130 "C_MODIF2.y"
                        { (yyval.nPtr) = opr(NOT, 1, (yyvsp[0].nPtr)); }
#line 1786 "C_MODIF2.tab.c"
    break;

  case 42:
#line 131 "C_MODIF2.y"
                             { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1792 "C_MODIF2.tab.c"
    break;

  case 43:
#line 132 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1798 "C_MODIF2.tab.c"
    break;

  case 44:
#line 133 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1804 "C_MODIF2.tab.c"
    break;

  case 45:
#line 134 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1810 "C_MODIF2.tab.c"
    break;

  case 46:
#line 135 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1816 "C_MODIF2.tab.c"
    break;

  case 47:
#line 136 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(POST_INCREMENT, 1, id((yyvsp[-1].sIndex))); }
#line 1822 "C_MODIF2.tab.c"
    break;

  case 48:
#line 137 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(PRE_INCREMENT, 1, id((yyvsp[0].sIndex))); }
#line 1828 "C_MODIF2.tab.c"
    break;

  case 49:
#line 138 "C_MODIF2.y"
                                          { (yyval.nPtr) = opr(POST_INCREMENT_ASSIGN, 2, id((yyvsp[-3].sIndex)), id((yyvsp[-1].sIndex))); }
#line 1834 "C_MODIF2.tab.c"
    break;

  case 50:
#line 139 "C_MODIF2.y"
                                          { (yyval.nPtr) = opr(PRE_INCREMENT_ASSIGN, 2, id((yyvsp[-3].sIndex)), id((yyvsp[0].sIndex))); }
#line 1840 "C_MODIF2.tab.c"
    break;

  case 51:
#line 140 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(POST_DECREMENT, 1, id((yyvsp[-1].sIndex))); }
#line 1846 "C_MODIF2.tab.c"
    break;

  case 52:
#line 141 "C_MODIF2.y"
                             { (yyval.nPtr) = opr(PRE_DECREMENT, 1, id((yyvsp[0].sIndex))); }
#line 1852 "C_MODIF2.tab.c"
    break;

  case 53:
#line 142 "C_MODIF2.y"
                                          { (yyval.nPtr) = opr(POST_DECREMENT_ASSIGN, 2, id((yyvsp[-3].sIndex)), id((yyvsp[-1].sIndex))); }
#line 1858 "C_MODIF2.tab.c"
    break;

  case 54:
#line 143 "C_MODIF2.y"
                                          { (yyval.nPtr) = opr(PRE_DECREMENT_ASSIGN, 2, id((yyvsp[-3].sIndex)), id((yyvsp[0].sIndex))); }
#line 1864 "C_MODIF2.tab.c"
    break;

  case 55:
#line 144 "C_MODIF2.y"
                               { (yyval.nPtr) = opr(PLUS_EQUAL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1870 "C_MODIF2.tab.c"
    break;

  case 56:
#line 145 "C_MODIF2.y"
                                { (yyval.nPtr) = opr(MINUS_EQUAL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1876 "C_MODIF2.tab.c"
    break;

  case 57:
#line 146 "C_MODIF2.y"
                               { (yyval.nPtr) = opr(MULT_EQUAL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1882 "C_MODIF2.tab.c"
    break;

  case 58:
#line 147 "C_MODIF2.y"
                                { (yyval.nPtr) = opr(SUBST_EQUAL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1888 "C_MODIF2.tab.c"
    break;

  case 59:
#line 148 "C_MODIF2.y"
                                { (yyval.nPtr) = opr(POWER_EQUAL, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1894 "C_MODIF2.tab.c"
    break;

  case 60:
#line 152 "C_MODIF2.y"
                              { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1900 "C_MODIF2.tab.c"
    break;

  case 61:
#line 153 "C_MODIF2.y"
                              { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1906 "C_MODIF2.tab.c"
    break;

  case 62:
#line 157 "C_MODIF2.y"
                                             { (yyval.nPtr) = opr(CASE, 2, con((yyvsp[-4].iValue)), (yyvsp[-2].nPtr)); }
#line 1912 "C_MODIF2.tab.c"
    break;

  case 63:
#line 158 "C_MODIF2.y"
                                             { (yyval.nPtr) = opr(CASE, 2, con((yyvsp[-3].iValue)), opr(BREAK, 0)); }
#line 1918 "C_MODIF2.tab.c"
    break;

  case 64:
#line 162 "C_MODIF2.y"
                                           { (yyval.nPtr) = opr(DEFAULT, 1, (yyvsp[0].nPtr)); }
#line 1924 "C_MODIF2.tab.c"
    break;

  case 65:
#line 163 "C_MODIF2.y"
                                           { (yyval.nPtr) = NULL; }
#line 1930 "C_MODIF2.tab.c"
    break;


#line 1934 "C_MODIF2.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 167 "C_MODIF2.y"


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
