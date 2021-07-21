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
#line 1 "mini_l.y" /* yacc.c:339  */

    #define YY_NO_INPUT
    #include <stdio.h>
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
std::set<std::string> reserved{"NUMBER", "IDENT", "RETURN", "FUNCTION", "SEMICOLON", "BEGINPARAMS", "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "BEGINLOOP", "ENDLOOP", "COLON", "INTEGER",
    "COMMA", "ARRAY", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "R_PAREN", "IF", "ELSE", "THEN", "CONTINUE", "ENDIF", "OF", "READ", "WRITE", "DO", "WHILE", "FOR", "TRUE", "FALSE", "ASSIGN", "EQ", "NEQ",
    "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV", "MOD", "AND", "OR", "NOT", "function", "functions", "declaration", "declarations", "var", "vars", "expression", "expressions", "Ident", "Idents", 
    "bool_expr", "relation_and_expr", "relation_and_inv", "relation_expr", "comp", "multiplicative-expr", "term", "statement", "statements"};
void yyerror(const char* s);
int yylex();
std::string new_temp();
std::string new_label();

#line 92 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FUNCTION = 258,
    BEGINPARAMS = 259,
    ENDPARAMS = 260,
    BEGINLOCALS = 261,
    ENDLOCALS = 262,
    BEGINBODY = 263,
    ENDBODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    ENUM = 267,
    OF = 268,
    IF = 269,
    THEN = 270,
    ENDIF = 271,
    ELSE = 272,
    WHILE = 273,
    FOR = 274,
    DO = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    L_PAREN = 286,
    R_PAREN = 287,
    L_SQUARE_BRACKET = 288,
    R_SQUARE_BRACKET = 289,
    ASSIGN = 290,
    RETURN = 291,
    IDENT = 292,
    NUMBER = 293,
    OR = 294,
    AND = 295,
    NOT = 296,
    LT = 297,
    LTE = 298,
    GT = 299,
    GTE = 300,
    EQ = 301,
    NEQ = 302,
    ADD = 303,
    SUB = 304,
    MULT = 305,
    DIV = 306,
    MOD = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "mini_l.y" /* yacc.c:355  */

    int num_val;
    char* id_val;

#line 190 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    58,    63,    96,   101,   111,   156,   211,
     218,   224,   248,   261,   275,   302,   323,   369,   380,   392,
     396,   407,   412,   430,   440,   447,   456,   462,   472,   479,
     486,   493,   516,   521,   526,   531,   536,   541,   548,   559,
     569,   570,   585,   601,   609,   625,   641,   659,   688,   698,
     709,   739,   749,   754,   769,   784,   801,   815
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGINPARAMS", "ENDPARAMS",
  "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "INTEGER", "ARRAY",
  "ENUM", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "FOR", "DO",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE",
  "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "ASSIGN", "RETURN", "IDENT", "NUMBER", "OR", "AND",
  "NOT", "LT", "LTE", "GT", "GTE", "EQ", "NEQ", "ADD", "SUB", "MULT",
  "DIV", "MOD", "$accept", "Program", "function", "declarations",
  "declaration", "statements", "statement", "bool_expr",
  "relation_and_expr", "relation_expr_inv", "relation_expr", "Ident",
  "comp", "expressions", "expression", "multiplicative-expr", "term",
  "vars", "var", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,   -21,    26,    11,    10,   -48,   -48,    41,    15,    19,
      44,    23,    -9,    48,    15,   -48,    29,    15,   -48,    30,
      57,    45,    74,    65,    52,    73,     6,     6,    47,    64,
     -48,    47,    47,    43,   -48,    81,    63,    60,    59,   -48,
     -48,   -48,     6,    66,   -48,     6,   -18,    80,    61,    58,
     -48,    70,   -43,   -27,   -48,    78,    67,    76,    52,   -48,
     -48,    43,   -48,   -48,    52,    43,    43,    71,    14,    43,
     -48,    43,   -48,   -48,    52,     6,     6,   -48,   -48,   -48,
     -48,   -48,   -48,    43,    43,    43,    43,    43,    43,    52,
      85,    47,    82,    92,   -48,    91,   -48,   -48,   -48,    94,
      97,    96,    12,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   113,   102,   -48,    90,   -48,   -48,    43,   -48,   -48,
      52,   -48,     6,     6,   -48,   115,   104,   -48,   -48,    47,
      98,    43,   114,    52,   112,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,     0,     1,     3,     0,     5,     0,
       0,     0,     0,     0,     5,     7,     0,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    31,     0,     0,    56,     0,     8,
      28,    29,     0,    31,    51,     0,     0,     0,    21,    24,
      26,     0,    40,    43,    50,     0,     0,    54,     0,    17,
      18,     0,    20,     4,    10,     0,     0,     0,     0,     0,
      25,     0,    48,    47,     0,     0,     0,    34,    35,    36,
      37,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    11,    30,    52,     0,
      39,     0,     0,    22,    23,    27,    41,    42,    44,    45,
      46,     0,     0,    55,     0,    57,    53,     0,    49,    12,
       0,    14,     0,     0,    38,     0,     0,    15,    13,     0,
       0,     0,     0,     0,     0,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   133,   -48,     4,   -48,   -47,   -48,   -12,    62,    95,
     -48,   -48,   -48,    20,   -30,    34,   -48,   -22,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    11,    35,    36,    47,    48,    49,
      50,    37,    83,    99,    51,    52,    53,    56,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    15,    16,    62,    57,    84,    85,    57,    57,    59,
      60,    92,    68,    71,     1,    55,     4,    94,    18,    34,
      72,    20,    73,    86,    87,    88,     5,   102,   119,   120,
      67,    93,    40,    41,    38,    95,    96,    42,     7,   100,
      38,   101,   111,    43,    44,     8,    98,    45,    12,    13,
      38,    14,     9,   105,    17,    46,    77,    78,    79,    80,
      81,    82,    19,   103,    22,    38,    26,    57,    21,   113,
      27,    28,    29,   125,    61,    30,    31,    32,    25,    23,
      43,    44,    24,    39,    34,    58,   134,   100,    33,    34,
      63,    64,    46,    65,    66,    74,    38,    69,    76,    89,
      75,   132,    90,    97,   114,    57,    91,   130,   123,    38,
     126,   127,    77,    78,    79,    80,    81,    82,   106,   107,
     108,   109,   110,   112,    98,   115,   116,   117,   118,   121,
     122,   128,   129,   131,   135,   133,     6,   124,   104,     0,
      70
};

static const yytype_int16 yycheck[] =
{
      24,    10,    11,    33,    28,    48,    49,    31,    32,    31,
      32,    58,    42,    31,     3,    27,    37,    64,    14,    37,
      38,    17,    46,    50,    51,    52,     0,    74,    16,    17,
      42,    61,    26,    27,    58,    65,    66,    31,    28,    69,
      64,    71,    89,    37,    38,     4,    32,    41,    29,     5,
      74,    28,    37,    83,     6,    49,    42,    43,    44,    45,
      46,    47,    33,    75,     7,    89,    14,    91,    38,    91,
      18,    19,    20,   120,    31,    23,    24,    25,    13,    34,
      37,    38,     8,    10,    37,    21,   133,   117,    36,    37,
       9,    28,    49,    33,    35,    15,   120,    31,    40,    21,
      39,   131,    35,    32,    22,   129,    30,   129,    18,   133,
     122,   123,    42,    43,    44,    45,    46,    47,    84,    85,
      86,    87,    88,    38,    32,    34,    32,    30,    32,    16,
      28,    16,    28,    35,    22,    21,     3,   117,    76,    -1,
      45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,    37,     0,    54,    28,     4,    37,
      56,    57,    29,     5,    28,    10,    11,     6,    56,    33,
      56,    38,     7,    34,     8,    13,    14,    18,    19,    20,
      23,    24,    25,    36,    37,    58,    59,    64,    71,    10,
      26,    27,    31,    37,    38,    41,    49,    60,    61,    62,
      63,    67,    68,    69,    71,    60,    70,    71,    21,    70,
      70,    31,    67,     9,    28,    33,    35,    60,    67,    31,
      62,    31,    38,    71,    15,    39,    40,    42,    43,    44,
      45,    46,    47,    65,    48,    49,    50,    51,    52,    21,
      35,    30,    58,    67,    58,    67,    67,    32,    32,    66,
      67,    67,    58,    60,    61,    67,    68,    68,    68,    68,
      68,    58,    38,    70,    22,    34,    32,    30,    32,    16,
      17,    16,    28,    18,    66,    58,    60,    60,    16,    28,
      70,    35,    67,    21,    58,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     0,     3,     3,     8,     3,
       2,     3,     5,     7,     5,     6,    13,     2,     2,     1,
       2,     1,     3,     3,     1,     2,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     1,     3,     3,     3,     2,     2,     4,
       1,     1,     3,     4,     1,     3,     1,     4
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
#line 53 "mini_l.y" /* yacc.c:1646  */
    {
        if (!mainFunc){
            printf("No main function was declared\n");
        }
    }
#line 1380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "mini_l.y" /* yacc.c:1646  */
    {
    }
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp = "func ";
        temp.append((yyvsp[-10].id_val).place);
        temp.append("\n");
        std::string s = (yyvsp[-10].id_val).place;
        if( s == "main"){
            mainFunc = true;
        }
        temp.append((yyvsp[-7].expression).code);
        std::string decs = (yyvsp[-7].expression).code;
        int decNum = 0;
        while(decs.find(".") != std::string::npos){
            int pos = decs.find(".");
            decs.replace(pos, 1, "=");
            std::string part = ", $" + std::to_string(decNum) + "\n";
            decNum++;
            decs.replace(decs.find("\n", pos), 1, part);
        }
        temp.append(decs);

        temp.append((yyvsp[-4].expression).code);
        std::string statements = (yyvsp[-1].statement).code;
        if(statements.find("continue") != std::string::npos){
            printf("Error: Continue outside loop in function %s\n", (yyvsp[-10].id_val).place);
        }
        temp.append(statements);
        temp.append("endfunc\n\n");
        printf(temp.c_str());
    }
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "mini_l.y" /* yacc.c:1646  */
    { /* might need %empty*/
                /*printf("declarations -> epsilon\n");*/
                (yyval.expression).place = strdup("");
                (yyval.expression).code = strdup("");
                }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "mini_l.y" /* yacc.c:1646  */
    {
                /*printf("declarations -> declaration SEMICOLON declarations\n");*/
                std::string temp;
                temp.append((yyvsp[-2].expression).code);
                temp.append((yyvsp[0].expression).code);
                (yyval.expression).code = strdup(temp.c_str());
                (yyval.expression).place=strdup("");
                }
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "mini_l.y" /* yacc.c:1646  */
    {
        int left = 0;
        int right = 0;
        std::string parse((yyvsp[-2].id_val).place);
        std::string temp;
        bool ex = false;
        while(!ex){
            right = parse.find("|", left);
            temp.append(".");
            if(right == std::string::npos){
                std::string ident = parse.substr(left, right);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                ex = true;
            }
            else{
                std::string ident = parse.substr(left, right - left);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                left = right + 1;
            }
            temp.append("\n");
        }
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 157 "mini_l.y" /* yacc.c:1646  */
    {
        size_t left = 0;
        size_t right = 0;
        std::string parse((yyvsp[-7].id_val).place);
        std::string temp;
        bool ex = false;
        while(!ex){
            right = parse.find("|", left);
            temp.append(".[]");
            if(right == std::string::npos){
                std::string ident = parse.substr(left, right);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    if((yyvsp[-3].num_val) <= 0){
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = (yyvsp[-3].num_val);
                }
                temp.append(ident);
                ex = true;
            }
            else{
                std::string ident = parse.substr(left, right - left);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    if((yyvsp[-3].num_val) <= 0){
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = (yyvsp[-3].num_val);
                }
                temp.append(ident);
                left = right + 1;
            }
            temp.append(", ");
            temp.append(std::to_string((yyvsp[-3].num_val)));
            temp.append("\n");
        }
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].statement).code);
        temp.append((yyvsp[0].statement).code);
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 219 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.statement).code = strdup((yyvsp[-1].statement).code);
    }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        std::string mid = (yyvsp[0].expression).place;
        if((yyvsp[-2].expression).arr && (yyvsp[0].expression).arr){
            temp += "[]= ";
        }
        else if((yyvsp[-2].expression).arr){
            temp += "[]= ";
        }
        else if((yyvsp[0].expression).arr){
            temp += "[]= ";
        }
        else{
            temp += "= ";
        }
        temp.append((yyvsp[-2].expression).place);
        temp.append(", ");
        temp.append(mid);
        temp += "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 249 "mini_l.y" /* yacc.c:1646  */
    {
        std::string s1 = new_label();
        std::string s2 = new_label();
        std::string temp;
        temp.append((yyvsp[-3].expression).code);
        temp = temp + "?:= " + s1 + ", " + (yyvsp[-3].expression).place + "\n";
        temp = temp + ":= " + s2 + "\n";
        temp = temp + ": " + s1 + "\n";
        temp.append((yyvsp[-1].statement).code);
        temp = temp + ": " + s2 + "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 262 "mini_l.y" /* yacc.c:1646  */
    {
        std::string s1 = new_label();
        std::string s2 = new_label();
        std::string temp;
        temp.append((yyvsp[-5].expression).code);
        temp = temp + "?:= " + s1 + ", " + (yyvsp[-5].expression).place + "\n";
        temp.append((yyvsp[-1].statement).code);
        temp = temp + ":= " + s2 + "\n";
        temp = temp + ": " + s1 + "\n";
        temp.append((yyvsp[-3].statement).code);
        temp = temp + ": " + s2 + "\n";
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 276 "mini_l.y" /* yacc.c:1646  */
    {
        std::string s1 = new_label();
        std::string s2 = new_label();
        std::string s3 = new_label();
        std::string temp = (yyvsp[-1].statement).code;
        std::string temp2;
        size_t pos = temp.find("continue");
        while(pos != std::string::npos){
            temp.replace(pos, 8, ":= " + s1);
            pos = temp.find("continue");
        }

        temp2.append(": ");
        temp2 += s1 + "\n";
        temp2.append((yyvsp[-3].expression).code);
        temp2 += "?:= " + s2 + ", ";

        temp2.append((yyvsp[-3].expression).place);
        temp2.append("\n");
        temp2 += ":= " + s3 + "\n";
        temp2 += ": " + s2 + "\n";
        temp2.append(temp);
        temp2 += ":= " + s1 + "\n";
        temp2 += ": " + s2 + "\n";
        (yyval.statement).code = strdup(temp2.c_str());
    }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 303 "mini_l.y" /* yacc.c:1646  */
    {
        std::string s1 = new_label();
        std::string s2 = new_label();
        std::string temp = (yyvsp[-3].statement).code;
        std::string temp2;
        size_t pos = temp.find("continue");
        while(pos != std::string::npos){
            temp.replace(pos, 8, ":= " + s2);
            pos = temp.find("continue");
        }
        temp2.append(": ");
        temp2 += begin + "\n";
        temp2.append(temp);
        temp2 += ": " + s2 + "\n";
        temp2.append((yyvsp[0].expression).code);
        temp2 += "?:= " + s1 + ", ";
        temp2.append((yyvsp[0].expression).place);
        temp2.append("\n");
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 324 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string dst=new_temp();
        std::string condition = new_label();
        std::string inner = new_label();
        std::string after = new_label();
        std::string code = (yyvsp[-1].statement).code;
        size_t pos = code.find("continue");
        while(pos!=std::string::npos){
            code.replace(pos, (yyvsp[-5].expression), ":= "+increment);
            pos= code.find("continue");
        }
        temp.append((yyvsp[-11].expression).code);
        std::string mid = std::to_string((yyvsp[-9].num_val));
        if((yyvsp[-11].expression).arr){
            temp+="[]= ";
        }
        else{
            temp +="= ";
        }
        temp.append((yyvsp[-11].expression).place);
        temp.append(", ");
        temp.append(mid);
        temp+="\n ";
        temp+=": " +condition+ "\n";
        temp.append((yyvsp[-7].expression).code);
        temp += "?:= "+inner + ", ";
        temp.append((yyvsp[-7].expression).place);
        temp.append("\n");
        temp +=":= "+after+"\n";
        temp +=": " + inner +"\n";
        temp.append(code);
        temp.append((yyvsp[-3].expression).code);
        if((yyvsp[-5].expression).arr){
            temp+="[]= ";
        }
        else{
            temp+="= ";
        }
        temp.append((yyvsp[-5].expression).place);
        temp.append(", ");
        temp.append((yyvsp[-3].expression).place);
        /*feel unsure here*/
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 370 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        size_t pos = temp.find("|", 0);
        while(pos != std::string::npos) {
            temp.replace(pos, 1, "<");
            pos = temp.find("|", pos);
        }
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 381 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        size_t pos = temp.find("|", 0);

        while(pos != std::string::npos) {
            temp.replace(pos, 1, ">");
            pos = temp.find("|", pos);
        }
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 393 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.statement).code = strdup("continue\n");
    }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 397 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        temp.append("ret ");
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.statement).code = strdup(temp.c_str());
    }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 408 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup(1.place);
    }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 413 "mini_l.y" /* yacc.c:1646  */
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
        tmep.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 431 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n" + "&& " + dst + ", " + (yyvsp[-2].expression).place + ", " + (yyvsp[0].expression).place + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 441 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 448 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n" + "! " + dst + ", " + (yyvsp[0].expression).place + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 457 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[0].expression).code);
        (yyval.expression).place = strdup((yyvsp[0].expression).place);
    }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 463 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        temp.append((yyvsp[0].expression).code);
        temp += ". " + dst + "\n" + (yyvsp[-1].expression).place + dst + ", " + (yyvsp[-2].expression).place + ", " + (yyvsp[0].expression).place + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 473 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append("1");
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(temp.c_str());
    }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 480 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append("0");
        (yyval.expression).code = strdup("");
        (yyval.expression).place = strdup(temp.c_str());
    }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 487 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup((yyvsp[-1].expression).place);
    }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 494 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup((yyvsp[0].id_val));
        (yyval.expression).code = strdup("");
    }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 517 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("== ");
    }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 522 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("!= ");
    }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 527 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("< ");
    }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 532 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("<= ");
    }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 537 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup("> ");
    }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 542 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).place = strdup("");
        (yyval.expression).code = strdup(">= ");
    }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 549 "mini_l.y" /* yacc.c:1646  */
    {
                std::string temp;
                temp.append((yyvsp[-2].expression).code);
                temp.append("param ");
                te,p.append((yyvsp[-2].expression).place);
                temp.append("\n");
                temp.append((yyvsp[0].expression).code);   /* I think this is sufficient, but not totally sure*/
                (yyval.expression).code=strdup(temp.c_str());
                (yyval.expression).place=strdup(temp.c_str());
            }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 559 "mini_l.y" /* yacc.c:1646  */
    {
                std::string temp;
                temp.append("param ");
                temp.append((yyvsp[0].expression).place);
                temp.append("\n");
                (yyval.expression).code=strdup(temp.c_str());
                (yyval.expression).place=strdup(temp.c_str());
            }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 569 "mini_l.y" /* yacc.c:1646  */
    {printf("expression -> multiplicative-expr\n");}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 570 "mini_l.y" /* yacc.c:1646  */
    {
                std::string temp;
                std::string dst= new_temp();
                temp.append((yyvsp[-2].expression).code);
                temp.append((yyvsp[0].expression).code);
                temp+=". " + dst + "\n";
                temp+= "+ " + dst + ", ";
                temp.append((yyvsp[-2].expression).place);
                temp+=", ";
                temp.append((yyvsp[0].expression).place);
                temp+="\n";
                (yyval.expression).code = strdup(temp.c_str());
                (yyval.expression).place = strdup(dst.c_str());

            }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 585 "mini_l.y" /* yacc.c:1646  */
    {
                std::string temp;
                std::string dst= new_temp();
                temp.append((yyvsp[-2].expression).code);
                temp.append((yyvsp[0].expression).code);
                temp+=". " + dst + "\n";
                temp+= "- " + dst + ", ";
                temp.append((yyvsp[-2].expression).place);
                temp+=", ";
                temp.append((yyvsp[0].expression).place);
                temp+="\n";
                (yyval.expression).code = strdup(temp.c_str());
                (yyval.expression).place = strdup(dst.c_str());

            }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 601 "mini_l.y" /* yacc.c:1646  */
    {
                    std::string temp;
                    temp.append((yyvsp[0].expression).code);
                    temp.append((yyvsp[0].expression).place);
                    temp.append("\n");
                    (yyval.expression).code = strdup(temp.c_string());
                    (yyval.expression).place = strdup(""); /*went freeballing here, might need fixing*/
                    }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 609 "mini_l.y" /* yacc.c:1646  */
    {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append((yyvsp[-2].expression).code);
                        temp.append((yyvsp[0].expression).code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="* " + dst + ", ";
                        temp.append((yyvsp[-2].expression).place);
                        temp+=", ";
                        temp.append((yyvsp[0].expression).place);
                        temp+="\n";
                        (yyval.expression).code = strdup(temp.c_str());
                        (yyval.expression).place = strdup(dst.c_str());
                    }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 625 "mini_l.y" /* yacc.c:1646  */
    {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append((yyvsp[-2].expression).code);
                        temp.append((yyvsp[0].expression).code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="/ " + dst + ", ";
                        temp.append((yyvsp[-2].expression).place);
                        temp+=", ";
                        temp.append((yyvsp[0].expression).place);
                        temp+="\n";
                        (yyval.expression).code = strdup(temp.c_str());
                        (yyval.expression).place = strdup(dst.c_str());
                    }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 641 "mini_l.y" /* yacc.c:1646  */
    {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append((yyvsp[-2].expression).code);
                        temp.append((yyvsp[0].expression).code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="% " + dst + ", ";
                        temp.append((yyvsp[-2].expression).place);
                        temp+=", ";
                        temp.append((yyvsp[0].expression).place);
                        temp+="\n";
                        (yyval.expression).code = strdup(temp.c_str());
                        (yyval.expression).place = strdup(dst.c_str());
                    }
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 660 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst=new_temp();
        std::string temp;
        if((yyvsp[0].expression).arr){
             temp.append((yyvsp[0].expression).code);
             temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp += "=[] " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
        }
        else{
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp += "= " + dst + ", ";
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
            temp.append((yyvsp[0].expression).code);
        }
        if(varTemp.find((yyvsp[0].expression).place) != varTemp.end()){
            varTemp[(yyvsp[0].expression).place]=dst;
        }
        temp +="* " + dst + ", "+dst + ", -1\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place=strdup(temp.c_str());
    }
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 688 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append(". ");
        temp.append(dst);
        temp.append("/n");
        temp= temp + "= " + dst +", -" + std::to_string((yyvsp[0].num_val)) + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 698 "mini_l.y" /* yacc.c:1646  */
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
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 709 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
    std::string temp;
        if((yyvsp[0].expression).arr){
            temp.append((yyvsp[0].expression).code);
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp.append("=[] ");
            temp.append(dst);
            temp.append(", ");
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
        }
        else{
            temp.append(". ");
            temp.append(dst);
            temp.append("\n");
            temp.append("= ");
            temp.append(dst);
            temp.append(", ");
            temp.append((yyvsp[0].expression).place);
            temp.append("\n");
        }
        if(varTemp.find((yyvsp[0].expression).place)!=varTemp.end()){
            varTemp[(yyvsp[0].expression).place]=dst;
        }
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 739 "mini_l.y" /* yacc.c:1646  */
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append(". ");
        temp.append(dst);
        temp.append("/n");
        temp= temp + "= " + dst +", " + std::to_string((yyvsp[0].num_val)) + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 749 "mini_l.y" /* yacc.c:1646  */
    {
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup((yyvsp[-1].expression).place);
    }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 754 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string func = (yyvsp[-3].id_val).place;
        if(funcs.find(func)==funcs.end()){
            printf("Calling undeclared function %s.\n", func.c_str());
        }
        std::string dst= new_temp();
        temp.append((yyvsp[-1].expression).code);
        temp+=". " + dst +"\ncall ";
        temp.append((yyvsp[-3].id_val).place);
        temp += ", " + dst + "\n";
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup(dst.c_str());
    }
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 770 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[0].expression).code);
        if((yyvsp[0].expression).arr){
            temp.append(".[]| ");
        }
        else{
            temp.append(".| ");
        }
        temp.append((yyvsp[0].expression).place);
        temp.append("\n");
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 785 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        temp.append((yyvsp[-2].expression).code);
        if((yyvsp[-2].expression).arr){
            temp.append(".[]| ");
        }
        else{
            temp.append(".| ");
        }
        temp.append((yyvsp[-2].expression).place);
        temp.append("\n");
        temp.append((yyvsp[0].expression).place);
        (yyval.expression).code = strdup(temp.c_str());
        (yyval.expression).place = strdup("");
    }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 801 "mini_l.y" /* yacc.c:1646  */
    {
    
    std::string temp;
    std::string ident=(yyvsp[0].expression).place;
    if(funcs.find(ident) == functions.end() && varTemp.find(ident)==varTemp.end()){
        printf("Identifier %s is not declared.\n",ident.c_str());
    }
    else(if(arrSize[ident]>1){
        printf("Did not provide index for array Identifier %s.\n", ident.c_str());
    }
    (yyval.expression).code = strdup("");
    (yyval.expression).place=strdup(ident.c_str());
    (yyval.expression).arr = false;
    }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 815 "mini_l.y" /* yacc.c:1646  */
    {
        std::string temp;
        std::string ident = (yyvsp[-3].expression).place;
        if(funcs.find(ident) == funcs.end() && varTemp.find(indent) == varTemp.end()){
            printf("Identifier %s is not declared.\n", ident.c_str());
        }
        else if(arrSize[ident] == 1){
            printf("Provided index for non-array Identifier %s.\n", ident.c_str());
        }
        temp.append((yyvsp[-3].expression).code);
        temp.append(", ");
        temp.append((yyvsp[-1].expression).place);
        (yyval.expression).code = strdup((yyvsp[-1].expression).code);
        (yyval.expression).place = strdup(temp.c_str());
        (yyval.expression).arr = true;
    }
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2346 "y.tab.c" /* yacc.c:1646  */
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
#line 833 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char* s)
{
    extern int yylineno;
    extern char **yytext;

        printf("%s on line %d at char %d at symbol \"%s\"\n", s, yylineno, num_columns, yytext);
        exit(1);
}


std:string new_temp(){
    std::string t= "t" + std::to_string(tempCount);
    tempCount++;
    return t;
}

std::string new_label(){
    std::string l="L" + std::to_string(labelCount);
    labelCount++;
    return l;
}


int main(int argc, char ** argv) {
    if(argc > 1) {
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            printf("syntax: %s filename", argv[0]);
        }
    }
    yyparse();
    return 0;
}
void yyerror(const char *msg) {
    printf("Error: Line %d, position %d: %s \n", num_lines, num_columns, msg);
}
