/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sol.y" /* yacc.c:339  */

#define YY_NO_UNPUT
#include <stdlib.h>
#include <map>
#include <string.h>
#include <set>

int tempCount = 0;
int labelCount = 0;
extern char* yytext;
extern int currPos;
std::map<std::string, std::string> varTemp;
std::map<std::string, int> arrSize;
bool mainFunc = false;
std::set<std::string> funcs;
std::set<std::string> reserved {"NUMBER", "IDENT", "RETURN", "FUNCTION", "SEMICOLON", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", 
    "END_BODY", "BEGINLOOP", "ENDLOOP", "COLON", "INTEGER", "COMMA", "ARRAY", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "R_PAREN", "IF", "ELSE", "THEN", 
    "CONTINUE", "ENDIF", "OF", "READ", "WRITE", "DO", "WHILE", "FOR", "TRUE", "FALSE", "ASSIGN", "EQ", "NEQ", "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV", 
    "MOD", "AND", "OR", "NOT", "Function", "Declarations", "Declaration", "Vars", "Var", "Expressions", "Expression", "Idents", "Ident", "Bool-Expr", 
    "Relation-And-Expr", "Relation-Expr-Inv", "Relation-Expr", "Comp", "Multiplicative-Expr", "Term", "Statements", "Statement"};

void yyerror(const char* s);
int yylex();
std::string new_temp();
std::string new_label();

#line 93 "sol.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sol.tab.h".  */
#ifndef YY_YY_SOL_TAB_H_INCLUDED
# define YY_YY_SOL_TAB_H_INCLUDED
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
    NUMBER = 258,
    IDENT = 259,
    RETURN = 260,
    FUNCTION = 261,
    SEMICOLON = 262,
    BEGIN_PARAMS = 263,
    END_PARAMS = 264,
    BEGIN_LOCALS = 265,
    END_LOCALS = 266,
    BEGIN_BODY = 267,
    END_BODY = 268,
    BEGINLOOP = 269,
    ENDLOOP = 270,
    COLON = 271,
    INTEGER = 272,
    COMMA = 273,
    ARRAY = 274,
    L_SQUARE_BRACKET = 275,
    R_SQUARE_BRACKET = 276,
    L_PAREN = 277,
    R_PAREN = 278,
    IF = 279,
    ELSE = 280,
    THEN = 281,
    CONTINUE = 282,
    ENDIF = 283,
    OF = 284,
    READ = 285,
    WRITE = 286,
    DO = 287,
    WHILE = 288,
    FOR = 289,
    TRUE = 290,
    FALSE = 291,
    ASSIGN = 292,
    EQ = 293,
    NEQ = 294,
    LT = 295,
    LTE = 296,
    GT = 297,
    GTE = 298,
    ADD = 299,
    SUB = 300,
    MULT = 301,
    DIV = 302,
    MOD = 303,
    AND = 304,
    OR = 305,
    NOT = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "sol.y" /* yacc.c:355  */

  int		num;
  char*	    ident;
  struct S {
      char* code;
  } statement;
  struct E {
      char* place;
      char* code;
      bool  arr;
  } expression;

#line 198 "sol.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SOL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "sol.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    64,    69,   101,   109,   116,   158,   210,
     221,   226,   237,   244,   251,   257,   278,   291,   305,   330,
     351,   400,   412,   424,   428,   439,   454,   461,   476,   483,
     495,   501,   511,   518,   525,   532,   537,   542,   547,   552,
     557,   564,   574,   587,   602,   617,   624,   641,   658,   675,
     682,   710,   721,   733,   760,   771,   776,   793,   808,   824,
     837
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENT", "RETURN", "FUNCTION",
  "SEMICOLON", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS",
  "BEGIN_BODY", "END_BODY", "BEGINLOOP", "ENDLOOP", "COLON", "INTEGER",
  "COMMA", "ARRAY", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN",
  "R_PAREN", "IF", "ELSE", "THEN", "CONTINUE", "ENDIF", "OF", "READ",
  "WRITE", "DO", "WHILE", "FOR", "TRUE", "FALSE", "ASSIGN", "EQ", "NEQ",
  "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV", "MOD", "AND",
  "OR", "NOT", "$accept", "Program", "Function", "Declarations",
  "Declaration", "FuncIdent", "Idents", "Ident", "Statements", "Statement",
  "Bool-Expr", "Relation-And-Expr", "Relation-Expr-Inv", "Relation-Expr",
  "Comp", "Expressions", "Expression", "Multiplicative-Expr", "Term",
  "Vars", "Var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -42

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-42)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -2,    14,     8,    -2,   -42,    15,   -42,   -42,    13,    40,
     -42,    24,    45,    37,    42,    47,    40,    28,    40,    40,
     -42,   -42,    38,   -42,    53,    62,    54,    46,   113,    49,
      39,    85,   -42,    40,    40,    55,    85,    40,    51,    63,
      75,    56,    66,   -42,    39,    10,    29,   -42,   -18,   -17,
     -42,    85,   -42,   -42,    85,    60,    41,    50,   -42,   116,
     -42,    76,   -42,   113,    82,    61,    39,   -42,   113,    39,
     -42,    77,   -42,    39,   -42,    39,    39,    39,    39,    39,
      39,    79,   110,   -42,   113,    85,    85,   -42,   -42,   -42,
     -42,   -42,   -42,    39,    40,    88,   113,   101,    84,   -42,
     -42,   -42,    83,    87,    90,   -42,   -42,   -42,   -42,   -42,
     -42,   -23,   -42,   -42,   -42,   -42,    80,    97,   109,   -42,
     -42,   -42,    39,   113,   -42,    85,   -42,    85,   -42,    91,
     -42,   115,   -42,    40,    86,    39,   111,   113,   112,   -42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,     9,     0,     1,     3,     0,     6,
      12,     0,     0,     0,    10,     0,     6,     0,     0,     6,
       5,     7,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,    54,     0,     0,    59,    24,    45,    49,
      53,     0,    32,    33,     0,     0,    26,    28,    30,     0,
      21,    58,    22,     0,     0,     0,     0,     4,    14,     0,
       8,     0,    51,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,    13,
      15,    55,     0,     0,    41,    43,    44,    46,    47,    48,
      34,     0,    25,    27,    31,    57,     0,     0,     0,    60,
      52,    56,     0,     0,    16,     0,    18,     0,    42,     0,
      19,     0,    17,     0,     0,     0,     0,     0,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   126,   -42,     1,   -42,   -42,   114,    -9,   -28,   -42,
     -35,    48,    81,   -42,   -42,     9,     4,   -41,   -42,   -31,
     -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    11,    12,     5,    13,    46,    39,    40,
      55,    56,    57,    58,    93,   103,    59,    48,    49,    60,
      50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    64,   123,    62,     1,   124,    41,    14,     6,    14,
      14,    61,    61,    72,    10,    65,    81,    20,     4,    38,
      24,     9,     8,    74,    38,    38,    76,    77,    38,    78,
      79,    80,    73,    15,    47,    95,    38,   107,   108,   109,
      99,    41,    43,    10,    10,    21,    41,    22,    71,    66,
     112,    75,    16,    17,    38,    82,   111,    19,    25,    38,
      18,    44,    41,   115,    26,    27,    28,    29,   117,    63,
      98,    66,    61,   100,    41,    38,    67,   102,    42,   104,
     105,   106,    68,    70,    45,    38,    84,    38,    43,    10,
     130,    85,   131,    69,    94,   129,    96,   114,    97,    86,
     101,    41,   110,   116,   118,   119,   120,    51,   122,   138,
     121,   134,   126,   125,    38,    41,   127,    10,    30,   132,
      52,    53,   133,   135,    38,   137,   104,   139,    38,     7,
      45,   128,    23,   101,   113,    83,    54,    31,     0,   136,
      32,     0,     0,    33,    34,    35,    36,    37,    87,    88,
      89,    90,    91,    92,    87,    88,    89,    90,    91,    92
};

static const yytype_int16 yycheck[] =
{
       9,    36,    25,    34,     6,    28,    28,    16,     0,    18,
      19,    33,    34,     3,     4,    37,    51,    16,     4,    28,
      19,     8,     7,    45,    33,    34,    44,    45,    37,    46,
      47,    48,    22,     9,    30,    63,    45,    78,    79,    80,
      68,    63,     3,     4,     4,    17,    68,    19,    44,    20,
      85,    22,     7,    16,    63,    51,    84,    10,    20,    68,
      18,    22,    84,    94,    11,     3,    12,    21,    96,    14,
      66,    20,    94,    69,    96,    84,    13,    73,    29,    75,
      76,    77,     7,    17,    45,    94,    26,    96,     3,     4,
     125,    50,   127,    37,    18,   123,    14,    93,    37,    49,
      23,   123,    23,    15,     3,    21,    23,    22,    18,   137,
      23,   133,    15,    33,   123,   137,     7,     4,     5,    28,
      35,    36,     7,    37,   133,    14,   122,    15,   137,     3,
      45,   122,    18,    23,    86,    54,    51,    24,    -1,   135,
      27,    -1,    -1,    30,    31,    32,    33,    34,    38,    39,
      40,    41,    42,    43,    38,    39,    40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    53,    54,     4,    57,     0,    53,     7,     8,
       4,    55,    56,    58,    59,     9,     7,    16,    18,    10,
      55,    17,    19,    58,    55,    20,    11,     3,    12,    21,
       5,    24,    27,    30,    31,    32,    33,    34,    59,    60,
      61,    72,    29,     3,    22,    45,    59,    68,    69,    70,
      72,    22,    35,    36,    51,    62,    63,    64,    65,    68,
      71,    72,    71,    14,    62,    72,    20,    13,     7,    37,
      17,    68,     3,    22,    72,    22,    44,    45,    46,    47,
      48,    62,    68,    64,    26,    50,    49,    38,    39,    40,
      41,    42,    43,    66,    18,    60,    14,    37,    68,    60,
      68,    23,    68,    67,    68,    68,    68,    69,    69,    69,
      23,    60,    62,    63,    68,    71,    15,    60,     3,    21,
      23,    23,    18,    25,    28,    33,    15,     7,    67,    60,
      62,    62,    28,     7,    72,    37,    68,    14,    60,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    56,    56,    57,
      58,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     0,     3,     8,     1,
       1,     3,     1,     3,     2,     3,     5,     7,     5,     6,
      13,     2,     2,     1,     2,     3,     1,     3,     1,     2,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     4,     1,     1,     3,     4,     3,     1,     1,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 59 "sol.y" /* yacc.c:1646  */
    {
        if (!mainFunc) {
            printf("No main function declared!\n");
        }
    }
#line 1395 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "sol.y" /* yacc.c:1646  */
    {
    }
#line 1402 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "sol.y" /* yacc.c:1646  */
    {
        std::string temp = "func ";
        temp.append((yyvsp[-10].expression).place);
        temp.append("\n");
        std::string s = (yyvsp[-10].expression).place;
        if (s == "main") {
            mainFunc = true;
        }
        temp.append((yyvsp[-7].expression).code);
        std::string decs = (yyvsp[-7].expression).code;
        int decNum = 0;
        while(decs.find(".") != std::string::npos) {
            int pos = decs.find(".");
            decs.replace(pos, 1, "=");
            std::string part = ", $" + std::to_string(decNum) + "\n";
            decNum++; 
            decs.replace(decs.find("\n", pos), 1, part);
        }
        temp.append(decs);

        temp.append((yyvsp[-4].expression).code);
        std::string statements = (yyvsp[-1].statement).code;
        if (statements.find("continue") != std::string::npos) {
            printf("ERROR: Continue outside loop in function %s\n", (yyvsp[-10].expression).place);
        }
        temp.append(statements);
        temp.append("endfunc\n\n");
        printf(temp.c_str());
    }
#line 1436 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 1448 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("");
    }
#line 1457 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "sol.y" /* yacc.c:1646  */
    {                  
        int left = 0;
        int right = 0;
        std::string parse((yyvsp[-2].expression).place);
        std::string temp;
        bool ex = false;
        while(!ex) {
            right = parse.find("|", left);      
            temp.append(". ");
            if (right == std::string::npos) {
                std::string ident = parse.substr(left, right);
                if (reserved.find(ident) != reserved.end()) {
                    printf("Identifier %s's name is a reserved word.\n", ident.c_str());
                } 
                if (funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()) {
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                } else {
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                ex = true;
            } else {
                std::string ident = parse.substr(left, right-left);
                if (reserved.find(ident) != reserved.end()) {
                    printf("Identifier %s's name is a reserved word.\n", ident.c_str());
                }
                if (funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()) {
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                } else {
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                left = right+1;
            }
            temp.append("\n");
        } 
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 1503 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 159 "sol.y" /* yacc.c:1646  */
    {
        size_t left = 0;
        size_t right = 0;
        std::string parse((yyvsp[-7].expression).place);
        std::string temp;
        bool ex = false;
        while(!ex) {
            right = parse.find("|", left);
            temp.append(".[] ");
            if (right == std::string::npos) {
                std::string ident = parse.substr(left, right);
                if (reserved.find(ident) != reserved.end()) {
                    printf("Identifier %s's name is a reserved word.\n", ident.c_str());
                }
                if (funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()) {
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                } else {
                    if ((yyvsp[-3].num) <= 0) { 
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = (yyvsp[-3].num);
                }
                temp.append(ident);
                ex = true;
            } else {
                std::string ident = parse.substr(left, right-left);
                if (reserved.find(ident) != reserved.end()) {
                    printf("Identifier %s's name is a reserved word.\n", ident.c_str());
                }
                if (funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()) {
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                } else {
                    if ((yyvsp[-3].num) <= 0) {
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = (yyvsp[-3].num);
                }
                temp.append(ident);
                left = right+1;
            }
            temp.append(", ");
            temp.append(std::to_string((yyvsp[-3].num)));
            temp.append("\n");
        }
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 1557 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 211 "sol.y" /* yacc.c:1646  */
    {
        if (funcs.find((yyvsp[0].ident)) != funcs.end()) {
            printf("function name %s already declared.\n", (yyvsp[0].ident));
        } else {
            funcs.insert((yyvsp[0].ident));
        }
	(yyval.expression).place = strdup((yyvsp[0].ident));
	(yyval.expression).code = strdup("");
    }
#line 1571 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 222 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
        (yyval.expression).code = strdup("");
    }
#line 1580 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 227 "sol.y" /* yacc.c:1646  */
    {
        std::string temp; 
        temp.append((yyvsp[-2].expression).place);
        temp.append("|"); 
        temp.append((yyvsp[0].expression).place);
        (yyval.expression).place = strdup(temp.c_str());
        (yyval.expression).code = strdup("");
    }
#line 1593 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 238 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup((yyvsp[0].ident));
        (yyval.expression).code = strdup("");
    }
#line 1602 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 245 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].statement).code);
        temp.append((yyvsp[0].statement).code);
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1613 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 252 "sol.y" /* yacc.c:1646  */
    {
        (yyval.statement).code = strdup((yyvsp[-1].statement).code);
    }
#line 1621 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 258 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        std::string middle = (yyvsp[0].expression).place;
        if ((yyvsp[-2].expression).arr && (yyvsp[0].expression).arr) { 
            temp += "[]= ";
        } else if ((yyvsp[-2].expression).arr) {
            temp += "[]= ";
        } else if ((yyvsp[0].expression).arr) {
            temp += "= ";
        } else {
            temp += "= ";
        }
        temp.append((yyvsp[-2].expression).place);
        temp.append(", ");
        temp.append(middle);
        temp += "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1646 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 279 "sol.y" /* yacc.c:1646  */
    {
        std::string ifS = new_label(); 
        std::string after = new_label();  
        std::string temp;
        temp.append((yyvsp[-3].expression).code);
        temp = temp + "?:= " + ifS + ", " + (yyvsp[-3].expression).place + "\n"; //If true, jump to :ifS and do code from $4
        temp = temp + ":= " + after + "\n"; //Reached if above not true, skips $4 code by jumping to l2
        temp = temp + ": " + ifS + "\n";
        temp.append((yyvsp[-1].statement).code);
        temp = temp + ": " + after + "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1663 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 292 "sol.y" /* yacc.c:1646  */
    {
        std::string ifS = new_label();
        std::string after = new_label();
        std::string temp;
        temp.append((yyvsp[-5].expression).code);
        temp = temp + "?:= " + ifS + ", " + (yyvsp[-5].expression).place + "\n"; //If true, jump to :ifS and do code from $4
        temp.append((yyvsp[-1].statement).code); //Reached is above not true, does $5 code
        temp = temp + ":= " + after + "\n"; //Prevents else code from running if's code
        temp = temp + ": " + ifS + "\n";
        temp.append((yyvsp[-3].statement).code); //Reached by :ifS jump, if's code
        temp = temp + ": " + after + "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1681 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 306 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string begin = new_label(); 
        std::string inner = new_label(); 
        std::string after = new_label(); 
        std::string code = (yyvsp[-1].statement).code;
        size_t pos = code.find("continue");
        while (pos != std::string::npos) {
            code.replace(pos, 8, ":= "+begin);
            pos = code.find("continue");
        }
        temp.append(": ");
        temp += begin + "\n"; //Defines start of while loop
        temp.append((yyvsp[-3].expression).code);
        temp += "?:= " + inner + ", "; //If true, jumps to code
        temp.append((yyvsp[-3].expression).place);
        temp.append("\n");
        temp += ":= " + after + "\n"; //If reached, jumps past while loop
        temp += ": " + inner + "\n"; //Marks start of code
        temp.append(code);
        temp += ":= " + begin + "\n"; //Reached by completing code, returns to start of while loop
        temp += ": " + after + "\n"; //Marks end of while loop
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1710 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 331 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string begin = new_label();
        std::string condition = new_label();
        std::string code = (yyvsp[-3].statement).code;
        size_t pos = code.find("continue");
        while (pos != std::string::npos) {
            code.replace(pos, 8, ":= "+condition);
            pos = code.find("continue");
        }
        temp.append(": ");
        temp += begin + "\n";
        temp.append(code);
        temp += ": " + condition + "\n";
        temp.append((yyvsp[0].expression).code);
        temp += "?:= " + begin + ", ";
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1735 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 352 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        std::string condition = new_label();
        std::string inner = new_label();
        std::string increment = new_label();
        std::string after = new_label();
        std::string code = (yyvsp[-1].statement).code;
        size_t pos = code.find("continue");
        while (pos != std::string::npos) {
            code.replace(pos, 8, ":= "+increment);
            pos = code.find("continue");
        }
        temp.append((yyvsp[-11].expression).code);
        std::string middle = std::to_string((yyvsp[-9].num));
        if ((yyvsp[-11].expression).arr) {
            temp += "[]= ";
        } else {
            temp += "= ";
        }
        temp.append((yyvsp[-11].expression).place);
        temp.append(", ");
        temp.append(middle);
        temp += "\n";
        temp += ": " + condition + "\n";
        temp.append((yyvsp[-7].expression).code);
        temp += "?:= " + inner + ", "; //If true, jumps to code
        temp.append((yyvsp[-7].expression).place);
        temp.append("\n");
        temp += ":= " + after + "\n"; //If reached, jumps past increment and code
        temp += ": " + inner + "\n"; //Marks start of code
        temp.append(code);
        temp += ": " + increment + "\n";
        temp.append((yyvsp[-5].expression).code);
        temp.append((yyvsp[-3].expression).code);
        if ((yyvsp[-5].expression).arr) {
            temp += "[]= ";
        } else {
            temp += "= ";
        }
        temp.append((yyvsp[-5].expression).place);
        temp.append(", ");
        temp.append((yyvsp[-3].expression).place);
        temp += "\n";
        temp += ":= " + condition + "\n";
        temp += ": " + after + "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1788 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 401 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        //temp.append(".");
        size_t pos = temp.find("|", 0);
        while(pos != std::string::npos) {
            temp.replace(pos, 1, "<");
            pos = temp.find("|", pos);
        }
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1804 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 413 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        //temp.append(".");
        size_t pos = temp.find("|", 0);
        while(pos != std::string::npos) {
            temp.replace(pos, 1, ">");
            pos = temp.find("|", pos);
        }
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1820 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 425 "sol.y" /* yacc.c:1646  */
    {
        (yyval.statement).code = strdup("continue\n");
    }
#line 1828 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 429 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        temp.append("ret ");
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1841 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 440 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n";
        temp += "|| " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp.append(", ");
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1860 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 455 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 1869 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 462 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n";
        temp += "&& " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp.append(", ");
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1888 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 477 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 1897 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 484 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n";
        temp += "! " + dst + ", ";
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1913 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 496 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 1922 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 502 "sol.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp = temp + ". " + dst + "\n" + (yyvsp[-1].expression).place + dst + ", " + (yyvsp[-2].expression).place + ", " + (yyvsp[0].expression).place + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1936 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 512 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append("1");
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(temp.c_str());
    }
#line 1947 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 519 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append("0");
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(temp.c_str());
    }
#line 1958 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 526 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup((yyvsp[-1].expression).place);
    }
#line 1967 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 533 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup("== ");
    }
#line 1976 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 538 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup("!= ");
    }
#line 1985 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 543 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup("< ");
    }
#line 1994 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 548 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup("<= ");
    }
#line 2003 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 553 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup("> ");
    }
#line 2012 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 558 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(">= ");
    }
#line 2021 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 565 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        temp.append("param ");
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2035 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 575 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append("param ");
        temp.append((yyvsp[-2].expression).place);
        temp.append("\n");
        temp.append((yyvsp[0].expression).code);
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2050 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 588 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n";
        temp += "+ " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp += ", ";
        temp.append((yyvsp[0].expression).place);
        temp += "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2069 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 603 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n";
        temp += "- " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp += ", ";
        temp.append((yyvsp[0].expression).place);
        temp += "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2088 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 618 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 2097 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 625 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp(); 
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp.append(". ");
        temp.append(dst);
        temp.append("\n");
        temp += "* " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp += ", ";
        temp.append((yyvsp[0].expression).place);
        temp += "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2118 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 642 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp.append(". ");
        temp.append(dst);
        temp.append("\n");
        temp += "/ " + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp += ", ";
        temp.append((yyvsp[0].expression).place);
        temp += "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2139 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 659 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp.append(". ");
        temp.append(dst);
        temp.append("\n");
        temp += "% t" + dst + ", ";
        temp.append((yyvsp[-2].expression).place);
        temp += ", ";
        temp.append((yyvsp[0].expression).place);
        temp += "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2160 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 676 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 2169 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 683 "sol.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp(); 
        std::string temp; 
        if ((yyvsp[0].expression).arr) {
            temp.append((yyvsp[0].expression).code);
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp += "=[] " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
        } else {
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp = temp + "= " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
            temp.append((yyvsp[0].expression).code);
        }
        if (varTemp.find((yyvsp[0].expression).place) != varTemp.end()) {
            varTemp[(yyvsp[0].expression).place] = dst;
        }
        temp += "* " + dst + ", " + dst + ", -1\n"; 
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2201 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 711 "sol.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp(); 
        std::string temp;
        temp.append(". ");
        temp.append(dst);
        temp.append("\n");
        temp = temp + "= " + dst + ", -" + std::to_string((yyvsp[0].num)) + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2216 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 722 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-1].expression).code);
        temp.append("* ");
        temp.append((yyvsp[-1].expression).place);
        temp.append(", ");
        temp.append((yyvsp[-1].expression).place);
        temp.append(", -1\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup((yyvsp[-1].expression).place);
    }
#line 2232 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 734 "sol.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        if ((yyvsp[0].expression).arr) {
            temp.append((yyvsp[0].expression).code);
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp += "=[] " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
        } else {
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp = temp + "= " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
            temp.append((yyvsp[0].expression).code);
        }
        if (varTemp.find((yyvsp[0].expression).place) != varTemp.end()) {
            varTemp[(yyvsp[0].expression).place] = dst;
        }
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2263 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 761 "sol.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp(); 
        std::string temp;
        temp.append(". ");
        temp.append(dst);
        temp.append("\n");
        temp = temp + "= " + dst + ", " + std::to_string((yyvsp[0].num)) + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2278 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 772 "sol.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup((yyvsp[-1].expression).place);
    }
#line 2287 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 777 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string func = (yyvsp[-3].expression).place;
        if (funcs.find(func) == funcs.end()) {
            printf("Calling undeclared function %s.\n", func.c_str());
        }
        std::string dst = new_temp();
        temp.append((yyvsp[-1].expression).code);
        temp += ". " + dst + "\ncall "; 
        temp.append((yyvsp[-3].expression).place);
        temp += ", " + dst + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2306 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 794 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        if ((yyvsp[-2].expression).arr) {
            temp.append(".[]| ");
        } else {
            temp.append(".| ");
        }
        temp.append((yyvsp[-2].expression).place);
        temp.append("\n");
        temp.append((yyvsp[0].expression).code);
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2325 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 809 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        if ((yyvsp[0].expression).arr) {
            temp.append(".[]| ");
        } else {
            temp.append(".| ");
        }
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2343 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 825 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string ident = (yyvsp[0].expression).place;
        if (funcs.find(ident) == funcs.end() && varTemp.find(ident) == varTemp.end()) { 
            printf("Identifier %s is not declared.\n", ident.c_str());
        } else if (arrSize[ident] > 1) {
            printf("Did not provide index for array Identifier %s.\n", ident.c_str());
        } 
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(ident.c_str());
        (yyval.expression).arr = false;
    }
#line 2360 "sol.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 838 "sol.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string ident = (yyvsp[-3].expression).place;
        if (funcs.find(ident) == funcs.end() && varTemp.find(ident) == varTemp.end()) {
            printf("Identifier %s is not declared.\n", ident.c_str());
        } else if (arrSize[ident] == 1) {
            printf("Provided index for non-array Identifier %s.\n", ident.c_str());
        }
        temp.append((yyvsp[-3].expression).place); 
        temp.append(", ");
        temp.append((yyvsp[-1].expression).place);
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup(temp.c_str());
        (yyval.expression).arr = true;
    }
#line 2380 "sol.tab.c" /* yacc.c:1646  */
    break;


#line 2384 "sol.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 854 "sol.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
  extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
          printf("%s on line %d at char %d at symbol \"%s\"\n", s, yylineno, currPos, yytext);
  exit(1);
}

std::string new_temp() {
    std::string t = "t" + std::to_string(tempCount);
    tempCount++;
    return t;
}

std::string new_label() {
    std::string l = "L" + std::to_string(labelCount);
    labelCount++; 
    return l;
} 
