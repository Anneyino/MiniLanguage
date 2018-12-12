/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "analyzer.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "analyzer.h".  */
#ifndef YY_YY_ANALYZER_H_INCLUDED
# define YY_YY_ANALYZER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 35 "analyzer.y" /* yacc.c:355  */

	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>
	#include <sstream>

	#include "ScannerParserCL.h"
	using namespace std;

	typedef void* yyscan_t;

#line 112 "analyzer.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    STR_VAL = 259,
    IDENTIFIER = 260,
    HELLO = 261,
    INT_TYPE = 262,
    FLOAT_TYPE = 263,
    DOUBLE_TYPE = 264,
    BOOL_TYPE = 265,
    STRING_TYPE = 266,
    DQ_MARK = 267,
    EXC_MARK = 268,
    INCREASE = 269,
    DECREASE = 270,
    PRINT_T = 271,
    COMMENT = 272,
    FUNCTION = 273,
    IF = 274,
    ELSE = 275,
    ELSIF = 276,
    WHILE = 277,
    FOR = 278,
    RETURN_T = 279,
    BREAK = 280,
    CONTINUE = 281,
    NULL_T = 282,
    LC = 283,
    RC = 284,
    SEMICOLON = 285,
    COMMA = 286,
    ASSIGN = 287,
    LOGICAL_AND = 288,
    LOGICAL_OR = 289,
    EQ = 290,
    NE = 291,
    GT = 292,
    GE = 293,
    LT = 294,
    LE = 295,
    MOD = 296,
    TRUE_T = 297,
    FALSE_T = 298,
    GLOBAL_T = 299,
    SUB = 300,
    ADD = 301,
    MUL = 302,
    DIV = 303,
    LP = 304,
    RP = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 76 "analyzer.y" /* yacc.c:355  */
	int int_value;
	double double_value;
	bool bool_value;
	char* cstr;
	Node* node;
	TemplateNode* grammar_node;
	assign_statement* assign_ptr;

#line 184 "analyzer.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (yyscan_t scanner, ScannerParserCL* pParseTree);

#endif /* !YY_YY_ANALYZER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "analyzer.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 52 "analyzer.y" /* yacc.c:359  */


	// flex's data type
	typedef void* yyscan_t;

	extern int yylex(YYSTYPE*, YYLTYPE*, yyscan_t);
	//extern int lineNumber;

	void yyerror (YYLTYPE*, yyscan_t yyscanner, ScannerParserCL* pParseTree, const char*);

#line 225 "analyzer.cpp" /* yacc.c:359  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   138,   138,   151,   159,   166,   173,   181,   186,   199,
     205,   221,   227,   231,   235,   239,   243,   247,   262,   263,
     266,   273,   285,   293,   306,   309,   314,   315,   316,   330,
     348,   352,   359,   360,   361,   362,   363,   369,   370,   373,
     376,   379,   385,   391,   397,   403,   409,   418,   425,   432,
     439,   446,   457,   479,   498,   518,   545,   558,   578,   601,
     629,   655,   689,   693,   708,   736,   763,   798,   799,   800,
     803,   816,   828,   840
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "STR_VAL", "IDENTIFIER",
  "\"hello msg\"", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE",
  "STRING_TYPE", "DQ_MARK", "EXC_MARK", "INCREASE", "DECREASE", "PRINT_T",
  "COMMENT", "FUNCTION", "IF", "ELSE", "ELSIF", "WHILE", "FOR", "RETURN_T",
  "BREAK", "CONTINUE", "NULL_T", "LC", "RC", "SEMICOLON", "COMMA",
  "ASSIGN", "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE", "GT", "GE", "LT",
  "LE", "MOD", "TRUE_T", "FALSE_T", "GLOBAL_T", "SUB", "ADD", "MUL", "DIV",
  "LP", "RP", "'\\n'", "$accept", "program", "statement_list", "line",
  "lines", "function_definition_list", "assign_statement",
  "math_statement", "bool_statement", "TypeForParam",
  "function_definition", "function_employ", "return_statement",
  "if_statement", "elsif_list", "elsif", "while_statement",
  "for_statement", "switchLines", "block", "break_statement",
  "continue_statement", YY_NULL
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
     305,    10
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,   -47,   -48,    -5,   -48,   -37,     3,   -31,    -7,    -3,
     248,    28,    30,   -48,   -48,    14,    14,   -48,    72,   108,
     -48,   142,    52,    45,   299,   -48,   -48,   -48,    46,   -48,
     -48,   -48,    31,   -48,   -48,   -48,   -48,   -48,   243,   248,
      76,    50,   248,   248,    83,    51,   299,   -48,   -48,   -48,
     -48,    47,   -48,   176,    52,   -48,   -48,   -48,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,   -48,   -48,
     -48,   299,   -48,    39,   263,    55,    57,    15,   299,    69,
      75,    59,    90,   -48,    70,    70,    70,    70,    70,    70,
     -27,   -27,   -48,   -48,   -48,   -48,    92,   -48,   -48,   -48,
     -48,   -48,    74,   123,    78,    78,   248,   -48,   207,   -48,
      85,   -15,   -15,   106,   -48,   238,    78,    -6,   -48,    83,
     -48,   -15,    17,    87,   -48,    78,    89,    20,   -48,    78,
     -15,   248,   -48,    -4,   -15,   -48,    91,    78,   -48,    78,
     -15,   -15,   -48,    78,    31
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    30,    31,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,    68,     0,     0,
      20,     0,     6,     0,     8,    10,    22,    32,     0,    12,
      11,    13,     7,    15,    16,    19,    28,    29,     0,     0,
       0,     0,     0,     0,     0,    31,    56,    57,    72,    73,
      38,     0,     1,     0,     5,    21,    23,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    67,
      25,    24,    27,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    43,    46,    41,    44,    42,    45,
      34,    33,    35,    36,    54,    55,     0,    47,    48,    49,
      50,    51,     0,     0,    69,    69,     0,    17,     0,    53,
       0,     0,     0,     0,    71,     0,    69,    58,    65,     0,
      70,     0,     0,     0,    52,    69,     0,    60,    62,    69,
       0,     0,    63,     0,     0,    59,     0,    69,    66,    69,
       0,     0,    61,    69,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   -14,   -18,   120,   -41,   -10,    -8,   -48,
     -11,   102,   -48,   -48,   -48,    19,   -48,   -48,   190,    94,
     -48,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,   103,
      26,    27,    28,    29,   127,   128,    30,    31,    32,   109,
      33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    53,    47,    82,    35,    50,    51,    55,    41,    36,
      37,    56,    40,   108,   -69,   -69,   137,     2,    42,    45,
      66,    67,    97,    98,    99,   100,   101,    38,    71,    74,
      72,    75,    78,    78,    79,    80,    69,   125,   126,    55,
     -69,   126,    43,    56,    39,    17,    44,    69,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    48,    15,
      49,   -69,     1,    16,     2,   102,     3,     4,    69,   -26,
       6,    17,    52,    36,    37,    57,    68,     5,   123,     6,
       7,    76,    69,     8,     9,    10,    11,    12,    81,   -26,
     115,    38,    64,    65,    66,    67,    78,    83,   113,    77,
      39,    55,   108,    13,    14,    95,    15,    96,    -2,     1,
      16,     2,    17,     3,     4,    64,    65,    66,    67,   104,
     106,    78,   107,   136,     5,   105,     6,     7,   110,    17,
       8,     9,    10,    11,    12,   116,   119,   129,   131,    54,
      73,   139,    -4,     1,     0,     2,   132,     3,     4,     0,
      13,    14,     0,    15,     0,     0,     0,    16,     5,    17,
      -4,     7,     0,     0,     8,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,    -3,     1,     0,     2,
       0,     3,     4,     0,    13,    14,     0,    15,     0,     0,
       0,    16,     5,    17,    -3,     7,     0,     0,     8,     9,
      10,    11,    12,     0,     0,   117,   118,     0,     1,     0,
       2,     0,     3,     4,     0,   124,     0,     0,    13,    14,
       0,    15,     0,     5,   135,    16,     7,    17,   138,     8,
       9,    10,    11,    12,   142,   143,   114,     0,     0,     1,
       0,     2,     0,     3,     4,     0,     2,    70,    45,    13,
      14,     2,    15,    45,     5,     0,    16,     7,    17,     0,
       8,     9,    10,    11,    12,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,     0,    15,     0,    13,    14,    16,    15,    17,
      13,    14,    16,    15,   111,   112,     0,    16,    58,    59,
      60,    61,    62,    63,     0,     0,   121,   122,    64,    65,
      66,    67,     0,    94,     0,   130,     0,   133,     0,   134,
       0,     0,     0,     0,     0,     0,     0,   140,     0,   141,
       0,     0,     0,   144,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,    64,    65,    66,    67
};

static const yytype_int16 yycheck[] =
{
      10,    19,    10,    44,    51,    15,    16,    21,     5,    14,
      15,    22,    49,    28,    20,    21,    20,     3,    49,     5,
      47,    48,     7,     8,     9,    10,    11,    32,    38,    39,
      38,    39,    42,    43,    42,    43,    51,    20,    21,    53,
      20,    21,    49,    54,    49,    51,    49,    51,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    30,    45,
      30,     0,     1,    49,     3,    50,     5,     6,    51,    30,
      18,    51,     0,    14,    15,    30,    30,    16,   119,    18,
      19,     5,    51,    22,    23,    24,    25,    26,     5,    50,
     108,    32,    45,    46,    47,    48,   106,    50,   106,    49,
      49,   115,    28,    42,    43,    50,    45,    50,     0,     1,
      49,     3,    51,     5,     6,    45,    46,    47,    48,    50,
      30,   131,    30,   131,    16,    50,    18,    19,     5,    51,
      22,    23,    24,    25,    26,    50,    30,    50,    49,    19,
      38,    50,     0,     1,    -1,     3,   127,     5,     6,    -1,
      42,    43,    -1,    45,    -1,    -1,    -1,    49,    16,    51,
      18,    19,    -1,    -1,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,
      -1,     5,     6,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    16,    51,    18,    19,    -1,    -1,    22,    23,
      24,    25,    26,    -1,    -1,   111,   112,    -1,     1,    -1,
       3,    -1,     5,     6,    -1,   121,    -1,    -1,    42,    43,
      -1,    45,    -1,    16,   130,    49,    19,    51,   134,    22,
      23,    24,    25,    26,   140,   141,    29,    -1,    -1,     1,
      -1,     3,    -1,     5,     6,    -1,     3,     4,     5,    42,
      43,     3,    45,     5,    16,    -1,    49,    19,    51,    -1,
      22,    23,    24,    25,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    42,    43,    49,    45,    51,
      42,    43,    49,    45,   104,   105,    -1,    49,    35,    36,
      37,    38,    39,    40,    -1,    -1,   116,   117,    45,    46,
      47,    48,    -1,    50,    -1,   125,    -1,   127,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
      -1,    -1,    -1,   143,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     5,     6,    16,    18,    19,    22,    23,
      24,    25,    26,    42,    43,    45,    49,    51,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    63,    64,    65,
      68,    69,    70,    72,    73,    51,    14,    15,    32,    49,
      49,     5,    49,    49,    49,     5,    59,    60,    30,    30,
      59,    59,     0,    56,    57,    55,    62,    30,    35,    36,
      37,    38,    39,    40,    45,    46,    47,    48,    30,    51,
       4,    59,    60,    63,    59,    60,     5,    49,    59,    60,
      60,     5,    58,    50,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    50,    50,    50,     7,     8,     9,
      10,    11,    50,    61,    50,    50,    30,    30,    28,    71,
       5,    70,    70,    60,    29,    56,    50,    71,    71,    30,
      29,    70,    70,    58,    71,    20,    21,    66,    67,    50,
      70,    49,    67,    70,    70,    71,    60,    20,    71,    50,
      70,    70,    71,    71,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    66,    66,    67,    68,    69,    70,    70,    70,
      71,    71,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     2,     1,     1,     5,     1,     2,
       1,     2,     1,     2,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     8,     5,     4,     4,     2,     2,     6,    10,
       8,    12,     1,     2,     7,     6,    10,     2,     1,     0,
       3,     2,     2,     2
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
      yyerror (&yylloc, scanner, pParseTree, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, pParseTree); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (pParseTree);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, pParseTree);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, ScannerParserCL* pParseTree)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, pParseTree);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, pParseTree); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (pParseTree);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, ScannerParserCL* pParseTree)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 64 "analyzer.y" /* yacc.c:1429  */
{
	/* code for initialization before parsing 
		code in this block is executed each time yyparse is called. */

		// for runtime debugging
		// yydebug = 1;
}

#line 1356 "analyzer.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 139 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* dummy_node = new TemplateNode("program");

		dummy_node->addChild((yyvsp[0].grammar_node));
		if(IsProgramCorrect){
		printGrammarTree(dummy_node);
		}
	}
#line 1552 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 152 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild((yyvsp[-1].grammar_node));
		return_node->addChild((yyvsp[0].grammar_node));
		(yyval.grammar_node) = return_node;

	}
#line 1564 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 160 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild((yyvsp[0].grammar_node));
		(yyval.grammar_node) = return_node;

	}
#line 1575 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 167 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild((yyvsp[-1].grammar_node));
		return_node->addChild((yyvsp[0].grammar_node));
		(yyval.grammar_node) = return_node;
	}
#line 1586 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 174 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild((yyvsp[0].grammar_node));
		(yyval.grammar_node) = return_node;
	}
#line 1596 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 181 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* switch_lines_node = new TemplateNode("newline");
		(yyval.grammar_node) = switch_lines_node;
		//$$ = nullptr;
}
#line 1606 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 186 "analyzer.y" /* yacc.c:1646  */
    { 
		pParseTree->makeTreeHead((yyvsp[0].node));
		if(IsProgramCorrect){
			cout << "Parsed: "<<(yyvsp[0].node)->nodeType<<"="<<(yyvsp[0].node)->value<<endl;
			pParseTree->printTree(pParseTree->getTreeHead());
		}

		std::ostringstream strs;
		strs << (yyvsp[0].node)->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);
		(yyval.grammar_node) = math_statement_node;
}
#line 1624 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 199 "analyzer.y" /* yacc.c:1646  */
    {   
		pParseTree->storeAssign((yyvsp[-1].assign_ptr));

		TemplateNode* assign_statement_node = new TemplateNode("assign_statement");
		(yyval.grammar_node) = assign_statement_node;
}
#line 1635 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 205 "analyzer.y" /* yacc.c:1646  */
    {
		cout << "Bool Value: "<<(yyvsp[0].bool_value)<<endl;
		bool value = (yyvsp[0].bool_value);
		TemplateNode* bool_node = nullptr;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}

		//TemplateNode* return_node = new TemplateNode("bool_statement");
		//return_node->addChild(bool_node);
		(yyval.grammar_node) = bool_node;

	}
#line 1656 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "analyzer.y" /* yacc.c:1646  */
    {
		cout<<"语法结构: while循环"<<endl;
		cout<<""<<endl;
		TemplateNode* while_statement_node = (yyvsp[0].grammar_node);
		(yyval.grammar_node) = while_statement_node;
	}
#line 1667 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 227 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"语法结构: if判断"<<endl;
	cout<<""<<endl;
	}
#line 1676 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 231 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"语法结构: for循环"<<endl;
	cout<<""<<endl;
	}
#line 1685 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 235 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"语法结构: return语句"<<endl;
	cout<<""<<endl;
	}
#line 1694 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 239 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"语法结构: break语句"<<endl;
	cout<<""<<endl;
	}
#line 1703 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 243 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"语法结构: continue语句"<<endl;
	cout<<""<<endl;
	}
#line 1712 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 247 "analyzer.y" /* yacc.c:1646  */
    { 
	pParseTree->printIdentifier((yyvsp[-2].cstr)); 
	TemplateNode* print_node = new TemplateNode("print");
	TemplateNode* lp_node = new TemplateNode("(");
	TemplateNode* identifier_node = new TemplateNode((yyvsp[-2].cstr));
	TemplateNode* rp_node = new TemplateNode(")");

	TemplateNode* return_node = new TemplateNode("Print_statement");
	return_node->addChild(print_node);
	return_node->addChild(lp_node);
	return_node->addChild(identifier_node);
	return_node->addChild(rp_node);

	(yyval.grammar_node) = return_node;
	}
#line 1732 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 262 "analyzer.y" /* yacc.c:1646  */
    { pParseTree->SayHello("I am a parser!");}
#line 1738 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 263 "analyzer.y" /* yacc.c:1646  */
    { IsProgramCorrect = false;yyerrok; }
#line 1744 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 266 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* line_node = (yyvsp[0].grammar_node);

		//TemplateNode* return_node = new TemplateNode("lines");
		//return_node->addChild(line_node);
		(yyval.grammar_node) = line_node;
	}
#line 1756 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 273 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* lines_node = (yyvsp[-1].grammar_node);
		TemplateNode* line_node = (yyvsp[0].grammar_node);
		
		TemplateNode* return_node = new TemplateNode("statements");
		return_node->addChild(lines_node);
		return_node->addChild(line_node);
		(yyval.grammar_node) = return_node;

	}
#line 1771 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 286 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* function_definition_node = (yyvsp[0].grammar_node);

		//TemplateNode* return_node = new TemplateNode("function_definition_list");
		//return_node->addChild(function_definition_node);
		(yyval.grammar_node) = function_definition_node;
	}
#line 1783 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 294 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* function_definition_list_node = (yyvsp[-1].grammar_node);
		TemplateNode* function_definition_node = (yyvsp[0].grammar_node);
		
		TemplateNode* return_node = new TemplateNode("function_definition_list");
		return_node->addChild(function_definition_list_node);
		return_node->addChild(function_definition_node);
		(yyval.grammar_node) = return_node;
	}
#line 1797 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 306 "analyzer.y" /* yacc.c:1646  */
    { 
		auto pAssign = pParseTree->getPAssign();
		(yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-2].cstr), (yyvsp[0].node)->value);
}
#line 1806 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 309 "analyzer.y" /* yacc.c:1646  */
    {
        auto pAssign = pParseTree->getPAssign();
		(yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-2].cstr), (yyvsp[0].cstr));
}
#line 1815 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 314 "analyzer.y" /* yacc.c:1646  */
    {auto pAssign = pParseTree->getPAssign();(yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-2].cstr), false); }
#line 1821 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 315 "analyzer.y" /* yacc.c:1646  */
    {auto pAssign = pParseTree->getPAssign();(yyval.assign_ptr) =pAssign->makeAssign((yyvsp[-2].cstr), (yyvsp[0].bool_value));}
#line 1827 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 316 "analyzer.y" /* yacc.c:1646  */
    {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[-1].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    (yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-1].cstr), value+1);
		} 

	   }
#line 1846 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 330 "analyzer.y" /* yacc.c:1646  */
    {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[-1].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl;}
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    (yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-1].cstr), value-1); 
		}
	   
	   }
#line 1865 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 348 "analyzer.y" /* yacc.c:1646  */
    { 
		auto pMath = pParseTree->getPMath();
		(yyval.node) = pMath->makeNode( "number",(yyvsp[0].double_value));
}
#line 1874 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 352 "analyzer.y" /* yacc.c:1646  */
    {
		auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[0].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; IsProgramCorrect = false; (yyval.node) = pMath->makeNode( (yyvsp[0].cstr), nan("string")); }
		else{ double value = 0; result.getValue(&value); (yyval.node) = pMath->makeNode( (yyvsp[0].cstr), value); }
}
#line 1886 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 359 "analyzer.y" /* yacc.c:1646  */
    { (yyval.node) = 0;}
#line 1892 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 360 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value+(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "+");}
#line 1898 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 361 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value-(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "-");}
#line 1904 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 362 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value*(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "*");}
#line 1910 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 363 "analyzer.y" /* yacc.c:1646  */
    {
		auto pMath = pParseTree->getPMath();
		double num = (yyvsp[0].node)->value;
		if(num >=(-1e-6)&& num<=(1e-6)){ printf("Division by zero\n"); YYERROR; }
		else{ (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value/(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "/"); }
}
#line 1921 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 369 "analyzer.y" /* yacc.c:1646  */
    { auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-1].node)->value, (yyvsp[-1].node), "()"); }
#line 1927 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 370 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode(-(yyvsp[0].node)->value, (yyvsp[0].node), "-");}
#line 1933 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 373 "analyzer.y" /* yacc.c:1646  */
    {
	    (yyval.bool_value) = true;
	}
#line 1941 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 376 "analyzer.y" /* yacc.c:1646  */
    {
	    (yyval.bool_value) = false; 
	}
#line 1949 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 379 "analyzer.y" /* yacc.c:1646  */
    {

		(yyval.bool_value) = (yyvsp[-2].node) > (yyvsp[0].node);

}
#line 1959 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 385 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) < (yyvsp[0].node);

	 }
#line 1969 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 391 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) == (yyvsp[0].node);

 	 }
#line 1979 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 397 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) >= (yyvsp[0].node);

	 }
#line 1989 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 403 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) <= (yyvsp[0].node);

	 }
#line 1999 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 409 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) != (yyvsp[0].node);

	 }
#line 2009 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 419 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* int_type_node = new TemplateNode("int");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(int_type_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2020 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 426 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* float_type_node = new TemplateNode("float");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(float_type_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2031 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 433 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* double_type_node = new TemplateNode("double");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(double_type_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2042 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 440 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* bool_type_node = new TemplateNode("bool");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(bool_type_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2053 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 447 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* string_type_node = new TemplateNode("string");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(string_type_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2064 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 458 "analyzer.y" /* yacc.c:1646  */
    {
		cout<<"语法结构: 函数定义--"<<(yyvsp[-6].cstr)<<endl;
		TemplateNode* function_node = new TemplateNode("function");
		TemplateNode* identifier_node_1 = new TemplateNode((yyvsp[-6].cstr));
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* type_node = (yyvsp[-4].grammar_node);
		TemplateNode* identifier_node_2 = new TemplateNode((yyvsp[-3].cstr));
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("function_definition");
		return_node->addChild(function_node);
		return_node->addChild(identifier_node_1);
		return_node->addChild(lp_node);
		return_node->addChild(type_node);
		return_node->addChild(identifier_node_2);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		(yyval.grammar_node) = return_node;
	 }
#line 2090 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 480 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* function_node = new TemplateNode("function");
		TemplateNode* identifier_node = new TemplateNode((yyvsp[-3].cstr));
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("function_definition");
		return_node->addChild(function_node);
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		(yyval.grammar_node) = return_node;
	 }
#line 2111 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 499 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* identifier_node = new TemplateNode((yyvsp[-3].cstr));
		TemplateNode* lp_node = new TemplateNode("(");

		std::ostringstream strs;
		strs << (yyvsp[-1].node)->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);
		TemplateNode* rp_node = new TemplateNode(")");

		TemplateNode* return_node = new TemplateNode("function_employ");
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(math_statement_node);
		return_node->addChild(rp_node);

		(yyval.grammar_node) = return_node;
	 
	 }
#line 2135 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 519 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* identifier_node = new TemplateNode((yyvsp[-3].cstr));
		TemplateNode* lp_node = new TemplateNode("(");

		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-1].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");

		TemplateNode* return_node = new TemplateNode("function_employ");
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);

		(yyval.grammar_node) = return_node;
	 
	 }
#line 2163 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 546 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_t_node = new TemplateNode("return");
		std::ostringstream strs;
		strs << (yyvsp[0].node)->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);

		TemplateNode* return_node = new TemplateNode("return_statement");
		return_node->addChild(return_t_node);
		return_node->addChild(math_statement_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2180 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 559 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* return_t_node = new TemplateNode("return");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[0].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}

		TemplateNode* return_node = new TemplateNode("return_statement");
		return_node->addChild(return_t_node);
		return_node->addChild(bool_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2201 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 578 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-3].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);
		
		(yyval.grammar_node) = return_node;
	 }
#line 2229 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 601 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-7].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node_1 = (yyvsp[-4].grammar_node);
		TemplateNode* else_node = new TemplateNode("else");
		TemplateNode* block_node_2 = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node_1);
		return_node->addChild(else_node);
		return_node->addChild(block_node_2);
		
		(yyval.grammar_node) = return_node;
	 
	 }
#line 2262 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 630 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-5].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[-2].grammar_node);
		TemplateNode* elsif_list_node = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);
		return_node->addChild(elsif_list_node);
		
		(yyval.grammar_node) = return_node;
	 }
#line 2292 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 656 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-9].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node_1 = (yyvsp[-6].grammar_node);
		TemplateNode* elsif_list_node = (yyvsp[-4].grammar_node);
		TemplateNode* else_node = new TemplateNode("else");
		TemplateNode* block_node_2 = (yyvsp[0].grammar_node);


		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node_1);
		return_node->addChild(elsif_list_node);
		return_node->addChild(else_node);
		return_node->addChild(block_node_2);
		
		(yyval.grammar_node) = return_node;
	 }
#line 2327 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 690 "analyzer.y" /* yacc.c:1646  */
    {
			(yyval.grammar_node) = (yyvsp[0].grammar_node);
		}
#line 2335 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 694 "analyzer.y" /* yacc.c:1646  */
    {
           TemplateNode* elsif_list_node = (yyvsp[-1].grammar_node);
		   TemplateNode* elsif_node = (yyvsp[0].grammar_node);

		   TemplateNode* return_node = new TemplateNode("elsif_list_statement");
		   return_node->addChild(elsif_list_node);
		   return_node->addChild(elsif_node);

		   (yyval.grammar_node) = return_node;
        }
#line 2350 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 709 "analyzer.y" /* yacc.c:1646  */
    {
           TemplateNode* elseif_node = new TemplateNode("elseif");
		   TemplateNode* lp_node = new TemplateNode("(");
		   TemplateNode* bool_node = nullptr;
		   bool value = (yyvsp[-4].bool_value);
		   if(value){
			   bool_node = new TemplateNode("true");
		   }
		   else{
			   bool_node = new TemplateNode("false");
		   }
		   TemplateNode* rp_node = new TemplateNode(")");
		   TemplateNode* block_node = (yyvsp[-1].grammar_node);

		   TemplateNode* return_node = new TemplateNode("elseif_statement");
		   return_node->addChild(elseif_node);
		   return_node->addChild(lp_node);
		   return_node->addChild(bool_node);
		   return_node->addChild(rp_node);
		   return_node->addChild(block_node);

		   (yyval.grammar_node) = return_node;
        }
#line 2378 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 737 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* while_node = new TemplateNode("while");
		TemplateNode* lp_node = new TemplateNode("(");
		bool value = (yyvsp[-3].bool_value);
		TemplateNode* bool_node = nullptr;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[0].grammar_node);
		
		TemplateNode* while_statement_node = new TemplateNode("while_statement");
		while_statement_node->addChild(while_node);
		while_statement_node->addChild(lp_node);
		while_statement_node->addChild(bool_node);
		while_statement_node->addChild(rp_node);
		while_statement_node->addChild(block_node);

		(yyval.grammar_node) = while_statement_node;
	 }
#line 2406 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 764 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* for_node = new TemplateNode("for");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* assign_statement_node_1 = new TemplateNode("assign_statement");
		
		TemplateNode* semicolon_node_1 = new TemplateNode(";");
		TemplateNode* bool_node = nullptr;
		bool value = (yyvsp[-5].bool_value);
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* semicolon_node_2 = new TemplateNode(";");
		TemplateNode* assign_statement_node_2 = new TemplateNode("assign_statement");
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = (yyvsp[0].grammar_node);

		TemplateNode* return_node = new TemplateNode("for_statement");
		return_node->addChild(for_node);
		return_node->addChild(lp_node);
		return_node->addChild(assign_statement_node_1);
		return_node->addChild(semicolon_node_1);
		return_node->addChild(bool_node);
		return_node->addChild(semicolon_node_2);
		return_node->addChild(assign_statement_node_2);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		(yyval.grammar_node) = return_node;
	 }
#line 2443 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 798 "analyzer.y" /* yacc.c:1646  */
    {lineNumber++;}
#line 2449 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 799 "analyzer.y" /* yacc.c:1646  */
    {lineNumber++;}
#line 2455 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 804 "analyzer.y" /* yacc.c:1646  */
    {
           TemplateNode* lc_node = new TemplateNode("{");
		   TemplateNode* lines_node = (yyvsp[-1].grammar_node);
		   TemplateNode* rc_node = new TemplateNode("}");

		   TemplateNode* block_node = new TemplateNode("block");
		   block_node->addChild(lc_node);
		   block_node->addChild(lines_node);
		   block_node->addChild(rc_node);
		   (yyval.grammar_node) = block_node;

        }
#line 2472 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 817 "analyzer.y" /* yacc.c:1646  */
    {
           TemplateNode* lc_node = new TemplateNode("{");
		   TemplateNode* rc_node = new TemplateNode("}");

		   TemplateNode* block_node = new TemplateNode("block");
		   block_node->addChild(lc_node);
		   block_node->addChild(rc_node);
		   (yyval.grammar_node) = block_node;
        }
#line 2486 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 829 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* break_node = new TemplateNode("break");
		TemplateNode* semicolon_node = new TemplateNode(";");

		TemplateNode* return_node = new TemplateNode("break_statement");
		return_node->addChild(break_node);
		return_node->addChild(semicolon_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2500 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 841 "analyzer.y" /* yacc.c:1646  */
    {
		TemplateNode* continue_node = new TemplateNode("continue");
		TemplateNode* semicolon_node = new TemplateNode(";");

		TemplateNode* return_node = new TemplateNode("continue_statement");
		return_node->addChild(continue_node);
		return_node->addChild(semicolon_node);
		(yyval.grammar_node) = return_node;
	 }
#line 2514 "analyzer.cpp" /* yacc.c:1646  */
    break;


#line 2518 "analyzer.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, scanner, pParseTree, YY_("syntax error"));
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
        yyerror (&yylloc, scanner, pParseTree, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, scanner, pParseTree);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, pParseTree);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, scanner, pParseTree, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, pParseTree);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, pParseTree);
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
#line 851 "analyzer.y" /* yacc.c:1906  */


// newer yyerror() function definition
// for use with reentant scanner and parser
// with location tracking
void yyerror (YYLTYPE *yylloc, yyscan_t yyscanner,
	 ScannerParserCL* pParseTree, const char* msg)
{
	std::cout<<"Line:"<<lineNumber<<" Error - "<<msg<<std::endl;
}
