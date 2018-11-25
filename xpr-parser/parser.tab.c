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
#line 1 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <bits/stdc++.h>
	using namespace std;

	#include "ast.h"

	extern "C" int yylex();
	extern "C" int yyparse();
	extern "C" int yyerror(char *s);

	ProgramNode *strt = NULL;

	extern FILE *yyin;
	#define YYDEBUG 1

	

#line 86 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEAN = 258,
    BREAK = 259,
    CALLOUT = 260,
    CLASS = 261,
    CONTINUE = 262,
    ELSE = 263,
    FALSE = 264,
    FOR = 265,
    INT = 266,
    IF = 267,
    RETURN = 268,
    TRUE = 269,
    VOID = 270,
    EOL = 271,
    PROGRAM = 272,
    PLUSEQ = 273,
    MINUSEQ = 274,
    AND = 275,
    OR = 276,
    EE = 277,
    NE = 278,
    LE = 279,
    GE = 280,
    STRINGLIT = 281,
    CHARLIT = 282,
    DECLIT = 283,
    HEXLIT = 284,
    ID = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "parser.y" /* yacc.c:355  */

	int ival;
	char* sval;
	char cval;

	ProgramNode* 		     	prgnodetype;

	vector<FieldDeclNode*>*  	fieldDecType;

	MethodDeclNode* 	     	methodDecType;
	vector<MethodDeclNode*>* 	methodDecListType;

	Identifier*			     	idType;
	vector<Identifier*>*	 	idListType;


	IntNode* 					intlitType;
	MethodArgsNode* 			methodArgType;
	vector<MethodArgsNode*>* 	methodArgsType;


	VarDeclNode* 				varDeclSingleType;
	vector<VarDeclNode*>* 		varDeclType;

	LiteralNode*				literalType;
	BoolNode* 					boollitType;

	MethodCallNode* 			methodcallType;
	CalloutNode* 				methodcallType;

	BlockNode*					blockType;
	LocationNode* 				locationType;

	ExpressionNode* 			exprType;
	vector<ExpressionNode*>* 	argumentsType;

	StringNode* 				stringlitType;



	CalloutArgsNode* 			calloutArgsType
	vector<CalloutArgsNode*>* 	calloutArgsListType;

	StatementNode* 				statementContentsType;
	vector<StatementNode*> 		statementType;

#line 204 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
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


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    33,     2,     2,
      40,    41,    31,    29,    46,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
      25,    18,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    21,    22,    23,    24,    27,
      28,    35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   172,   172,   173,   174,   175,   178,   180,   184,   188,
     192,   196,   204,   205,   206,   207,   209,   212,   216,   219,
     222,   226,   227,   228,   229,   232,   236,   241,   245,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   266,   270,   276,   277,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   303,   304,   308,   311,   312,   313,
     314,   317,   321,   325,   329,   336,   340,   344,   345,   348,
     349,   352,   353,   356
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "CALLOUT", "CLASS",
  "CONTINUE", "ELSE", "FALSE", "FOR", "INT", "IF", "RETURN", "TRUE",
  "VOID", "EOL", "PROGRAM", "'='", "PLUSEQ", "MINUSEQ", "AND", "OR", "EE",
  "NE", "'<'", "'>'", "LE", "GE", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "STRINGLIT", "CHARLIT", "DECLIT", "HEXLIT", "ID", "'('", "')'", "'['",
  "']'", "'{'", "'}'", "','", "';'", "$accept", "classBegin", "fieldDec",
  "fieldArgs", "methodDec", "methodDecList", "methodArg", "methodArgs",
  "block", "varDecl", "blockVars", "statementContents", "statement",
  "type", "expr", "location", "methodname", "methodcall",
  "calloutArgsList", "arguments", "literal", "intlit", "boollit",
  "stringlit", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,   273,
     274,   275,   276,   277,   278,    60,    62,   279,   280,    43,
      45,    42,    47,    37,    33,   281,   282,   283,   284,   285,
      40,    41,    91,    93,   123,   125,    44,    59
};
# endif

#define YYPACT_NINF -75

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define YYTABLE_NINF -67

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    19,    13,    38,   -75,     8,   -75,   -75,    58,   -75,
      70,   -75,    80,    60,    61,   -75,    83,    60,   -75,   -75,
      66,    -9,    56,     6,   -75,    63,    68,    27,    14,    75,
     -75,    76,    81,    93,   100,   -75,    76,   103,   -75,   -75,
     115,   -32,   -75,    67,   -75,    64,    76,   -75,   -75,    76,
     107,   113,   121,   117,   123,   125,    79,    47,   -75,   -75,
     128,   -75,   138,   127,   104,   129,   131,   -75,   -75,   -75,
      75,   -75,   135,   -75,   156,   193,   -75,   -75,   193,   193,
     193,   -75,   187,   -75,   -75,   -75,   -75,   -75,   193,   -75,
     142,   -75,   -75,   -75,   110,   193,   193,   193,   154,   -75,
     -75,   -75,    -6,   193,   392,    98,   -75,   413,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   -75,   369,   -75,   137,    64,   214,   227,   254,   -75,
     267,   144,   -75,   166,   293,    76,   -75,   239,   239,   277,
     277,   298,   298,   298,   298,    98,    98,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   193,   -75,   319,   148,
     133,   193,   182,   -75,   166,   -75,   166,   345,    76,   -75,
     -75,   -75,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    44,    43,     0,     2,
       0,    16,     0,     0,     0,     5,     0,     0,     4,    17,
       0,     8,     0,     0,     3,     0,     0,     0,     0,     0,
       6,     0,    19,     0,     0,     7,     0,     0,    79,    80,
       0,     8,     9,     0,    15,     0,     0,    18,    13,     0,
      10,     0,     0,     0,     0,     0,     0,    64,    21,    40,
       0,    41,     0,     0,     0,     0,     0,    20,    14,    12,
       0,    38,     0,    39,     0,     0,    82,    81,     0,     0,
       0,    36,     0,    45,    46,    47,    77,    78,     0,    22,
       0,    23,    42,    27,     0,     0,     0,     0,     0,    32,
      11,    83,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    24,     0,    25,     0,     0,     0,    67,
      75,     0,    70,     0,     0,     0,    63,    61,    62,    59,
      60,    55,    56,    57,    58,    53,    54,    50,    51,    52,
      65,    28,    26,    29,    30,    31,     0,    68,    71,     0,
      72,     0,    33,    76,     0,    69,     0,     0,     0,    73,
      74,    35,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,    -1,    84,   189,   -75,     0,   -31,    72,
     -75,   -58,   161,    -4,   -54,   -40,   -75,   -14,   -74,    69,
     -75,   194,   -75,   152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    22,    11,    12,    32,    33,    59,    60,
      94,    61,    62,    34,   158,    83,    65,    84,   159,   131,
      85,    86,    87,   160
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    13,    82,    64,    92,    48,    17,     1,    20,     6,
      28,     6,    20,     4,    29,    68,    25,     7,    69,     7,
      64,   104,    64,     8,   105,   106,   107,    37,    42,    66,
       6,    27,    92,    28,   122,   132,     3,    29,     7,    63,
     133,   126,   127,   128,   130,    67,    66,    31,    66,   134,
      64,    38,    39,     9,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     6,    36,   100,
       6,    51,    52,     6,    53,     7,    66,    54,     7,    55,
      56,     7,     5,     6,    52,     8,     6,   -66,    76,    88,
     169,     7,   170,    77,     7,     8,    19,    14,     8,    21,
      19,    23,   130,    30,   162,    26,    57,   167,    27,    78,
      35,    43,    58,    79,    41,    15,    38,    39,    57,    80,
      43,    63,    95,    96,    97,    18,    81,    45,    24,   118,
     119,   120,    51,    52,    46,    53,   171,   172,    54,    47,
      55,    56,    51,    52,    49,    53,    51,    52,    54,    53,
      55,    56,    54,    70,    55,    56,   124,   125,    50,    52,
      71,    72,    74,    76,    73,    75,    93,    57,    77,    98,
     101,    52,    43,    89,   103,    76,   151,    57,    99,   166,
      77,    57,    43,    91,    78,   157,    43,   123,    79,   165,
     168,    38,    39,    57,    80,   129,    78,   152,    52,    16,
      79,   101,    76,    38,    39,    57,    80,    77,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    90,    40,    78,   102,   163,     0,    79,     0,     0,
      38,    39,    57,    80,   121,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   153,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,   154,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   155,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     0,     0,   156,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,     0,     0,   161,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,     0,     0,     0,     0,
       0,     0,     0,   135,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,     0,     0,     0,
       0,     0,     0,     0,   136
};

static const yytype_int16 yycheck[] =
{
      31,     5,    56,    43,    62,    36,    10,     6,    12,     3,
      42,     3,    16,     0,    46,    46,    17,    11,    49,    11,
      60,    75,    62,    15,    78,    79,    80,    27,    29,    43,
       3,    40,    90,    42,    88,    41,    17,    46,    11,    43,
      46,    95,    96,    97,    98,    45,    60,    41,    62,   103,
      90,    37,    38,    45,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,     3,    41,    70,
       3,     4,     5,     3,     7,    11,    90,    10,    11,    12,
      13,    11,    44,     3,     5,    15,     3,    40,     9,    42,
     164,    11,   166,    14,    11,    15,    12,    39,    15,    39,
      16,    40,   156,    47,   135,    39,    39,   161,    40,    30,
      47,    44,    45,    34,    39,    45,    37,    38,    39,    40,
      44,   125,    18,    19,    20,    45,    47,    46,    45,    31,
      32,    33,     4,     5,    41,     7,   167,   168,    10,    39,
      12,    13,     4,     5,    41,     7,     4,     5,    10,     7,
      12,    13,    10,    46,    12,    13,    46,    47,    43,     5,
      47,    40,    39,     9,    47,    40,    39,    39,    14,    40,
      35,     5,    44,    45,    18,     9,    39,    39,    47,    46,
      14,    39,    44,    45,    30,    41,    44,    45,    34,    41,
       8,    37,    38,    39,    40,    41,    30,   125,     5,    10,
      34,    35,     9,    37,    38,    39,    40,    14,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    60,    28,    30,    72,   156,    -1,    34,    -1,    -1,
      37,    38,    39,    40,    47,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    47,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    47,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    47,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    46,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    49,    17,     0,    44,     3,    11,    15,    45,
      50,    52,    53,    61,    39,    45,    53,    61,    45,    52,
      61,    39,    51,    40,    45,    51,    39,    40,    42,    46,
      47,    41,    54,    55,    61,    47,    41,    55,    37,    38,
      69,    39,    51,    44,    56,    46,    41,    39,    56,    41,
      43,     4,     5,     7,    10,    12,    13,    39,    45,    56,
      57,    59,    60,    61,    63,    64,    65,    55,    56,    56,
      46,    47,    40,    47,    39,    40,     9,    14,    30,    34,
      40,    47,    62,    63,    65,    68,    69,    70,    42,    45,
      60,    45,    59,    39,    58,    18,    19,    20,    40,    47,
      51,    35,    71,    18,    62,    62,    62,    62,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    47,    62,    45,    46,    47,    62,    62,    62,    41,
      62,    67,    41,    46,    62,    41,    41,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      43,    39,    57,    47,    47,    47,    46,    41,    62,    66,
      71,    46,    56,    67,    46,    41,    46,    62,     8,    66,
      66,    56,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    50,    51,    51,
      51,    51,    52,    52,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     5,     5,     3,     4,     1,     3,
       4,     6,     6,     5,     6,     5,     1,     2,     2,     1,
       3,     2,     3,     3,     4,     3,     4,     1,     3,     4,
       4,     4,     2,     5,     7,     7,     2,     3,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     1,     3,     4,     6,
       4,     1,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1
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

YY_ATTRIBUTE_UNUSED
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
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
#line 172 "parser.y" /* yacc.c:1646  */
    {	strt = new ProgramNode(NULL,NULL);	}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 173 "parser.y" /* yacc.c:1646  */
    {	strt = new ProgramNode((yyvsp[-2].fieldDecType),(yyvsp[-1].methodDecListType)); 		}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 174 "parser.y" /* yacc.c:1646  */
    {	strt = new ProgramNode(NULL,(yyvsp[-1].methodDecListType));	}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 175 "parser.y" /* yacc.c:1646  */
    {	strt = new ProgramNode((yyvsp[-1].fieldDecType),NULL);	}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 178 "parser.y" /* yacc.c:1646  */
    {	(yyval.fieldDecType) = new vector<FieldDeclNode*>;
																(yyval.fieldDecType)->push_back(new FieldDeclNode((yyvsp[-2].sval),(yyvsp[-1].idListType)));	}
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 180 "parser.y" /* yacc.c:1646  */
    {	(yyval.fieldDecType) = (yyvsp[-3].fieldDecType);
																(yyval.fieldDecType)->push_back(new FieldDeclNode((yyvsp[-2].sval),(yyvsp[-1].idListType)));	}
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 184 "parser.y" /* yacc.c:1646  */
    {	Identifier* idfr = new Identifier((yyvsp[0].sval));
																(yyval.idListType) = new vector<Identifier*>;
																(yyval.idListType)->push_back(idfr);						}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 188 "parser.y" /* yacc.c:1646  */
    {	Identifier* idfr = new Identifier((yyvsp[-2].sval));
																(yyval.idListType) = (yyvsp[0].idListType);
																(yyval.idListType)->push_back(idfr);						}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 192 "parser.y" /* yacc.c:1646  */
    {	Identifier* idfr = new Identifier((yyvsp[-3].sval),(yyvsp[-1].intlitType));
																(yyval.idListType) = new vector<Identifier*>; 
																(yyval.idListType)->push_back(idfr);						}
#line 1636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 196 "parser.y" /* yacc.c:1646  */
    {	Identifier* idfr = new Identifier((yyvsp[-5].sval),(yyvsp[-3].intlitType));
																(yyval.idListType) = (yyvsp[0].idListType);
																(yyval.idListType)->push_back(idfr);						}
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 204 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecType) = new MethodDeclNode((yyvsp[-5].sval),(yyvsp[-4].sval),(yyvsp[-2].methodArgsType),(yyvsp[0].blockType));	}
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 205 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecType) = new MethodDeclNode((yyvsp[-4].sval),(yyvsp[-3].sval),NULL,(yyvsp[0].blockType));	}
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 206 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecType) = new MethodDeclNode((yyvsp[-5].sval),(yyvsp[-4].sval),(yyvsp[-2].methodArgsType),(yyvsp[0].blockType));	}
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 207 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecType) = new MethodDeclNode((yyvsp[-4].sval),(yyvsp[-3].sval),NULL,(yyvsp[0].blockType));	}
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 209 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecListType) = new vector<MethodDeclNode*>;
												 	(yyval.methodDecListType)->push_back((yyvsp[0].methodDecType));					}
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 212 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodDecListType) = (yyvsp[-1].methodDecListType);
												  	(yyval.methodDecListType)->push_back((yyvsp[0].methodDecType));					}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 216 "parser.y" /* yacc.c:1646  */
    {	(yyval.methodArgType) = new MethodArgsNode((yyvsp[-1].sval),(yyvsp[0].sval));		}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 219 "parser.y" /* yacc.c:1646  */
    { 	(yyval.methodArgsType) = new vector<MethodArgsNode*>;		
												   	(yyval.methodArgsType)->push_back((yyvsp[0].methodArgType)); 					}
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 222 "parser.y" /* yacc.c:1646  */
    { 	(yyval.methodArgsType) = (yyvsp[0].methodArgsType);
												  	(yyval.methodArgsType)->push_back((yyvsp[-2].methodArgType));					}
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 226 "parser.y" /* yacc.c:1646  */
    { 	(yyval.blockType) = new BlockNode(NULL,NULL);	}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 227 "parser.y" /* yacc.c:1646  */
    {	(yyval.blockType) = new BlockNode((yyvsp[-1].varDeclType),NULL);	}
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 228 "parser.y" /* yacc.c:1646  */
    {	(yyval.blockType) = new BlockNode(NULL,(yyvsp[-1].statementType));	}
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 229 "parser.y" /* yacc.c:1646  */
    {	(yyval.blockType) = new BlockNode((yyvsp[-2].varDeclType),(yyvsp[-1].statementType));		}
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 232 "parser.y" /* yacc.c:1646  */
    {	VarDeclNode* temp = new VarDeclNode((yyvsp[-2].sval),(yyvsp[-1].idListType));
													 	(yyval.varDeclType) = new vector<VarDeclNode*>;
													 	(yyval.varDeclType)->push_back(temp);						}
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 236 "parser.y" /* yacc.c:1646  */
    {	(yyval.varDeclType) = (yyvsp[0].varDeclType);
													 	VarDeclNode* temp = new VarDeclNode((yyvsp[-3].sval),(yyvsp[-2].idListType));
													 	(yyval.varDeclType)->push_back(temp);						}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 241 "parser.y" /* yacc.c:1646  */
    {	(yyval.idListType) = new vector<Identifier*>;
														Identifier* temp = new Identifier((yyvsp[0].sval));
												 		(yyval.idListType)->push_back(temp);					}
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 245 "parser.y" /* yacc.c:1646  */
    {	(yyval.idListType) = (yyvsp[-2].idListType);
														Identifier* temp = new Identifier((yyvsp[0].sval));
														(yyval.idListType)->push_back(temp);					}
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 252 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new AssignmentNode((yyvsp[-3].locationType),(yyvsp[-2].sval),(yyvsp[-1].exprType));	}
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 253 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new AssignmentNode((yyvsp[-3].locationType),(yyvsp[-2].sval),(yyvsp[-1].exprType));	}
#line 1770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new AssignmentNode((yyvsp[-3].locationType),(yyvsp[-2].sval),(yyvsp[-1].exprType));	}
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 255 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new MethodNode(); (yyval.statementContentsType) = (yyvsp[-1].methodcallType);		}
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new IfNode((yyvsp[-2].exprType),(yyvsp[0].blockType),NULL);}
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 257 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new IfNode((yyvsp[-4].exprType),(yyvsp[-2].blockType),(yyvsp[0].blockType));}
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.statementContentsType) = new ForNode((yyvsp[-5].sval),(yyvsp[-3].exprType),(yyvsp[-1].exprType),(yyvsp[0].blockType));}
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 259 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new ReturnNode(NULL);}
#line 1806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 260 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new ReturnNode((yyvsp[-1].exprType));}
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 261 "parser.y" /* yacc.c:1646  */
    { 	(yyval.statementContentsType) = new BreakNode();}
#line 1818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 262 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new ContinueNode();}
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 263 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementContentsType) = new BlockNode(); (yyval.statementContentsType) = (yyvsp[0].blockType);}
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.statementType) = new vector<StatementNode*>;
													StatementNode* temp = new StatementNode((yyvsp[0].statementContentsType));
													(yyval.statementType)->push_back(temp);	}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 270 "parser.y" /* yacc.c:1646  */
    {	(yyval.statementType) = (yyvsp[-1].statementType);
													StatementNode* temp = new StatementNode((yyvsp[0].statementContentsType));
													(yyval.statementType)->push_back(temp);	}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[0].locationType));	   }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[0].methodcallType));	   }
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[0].literalType));	   }
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-1].sval),(yyvsp[0].exprType));   }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 285 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-1].sval),(yyvsp[0].exprType));   }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 286 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 287 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 289 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 291 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 295 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 297 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 298 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-2].exprType),(yyvsp[-1].sval),(yyvsp[0].exprType));}
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.exprType) = new ExpressionNode((yyvsp[-1].exprType)); 	   }
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 303 "parser.y" /* yacc.c:1646  */
    {(yyval.locationType) = new LocationNode((yyvsp[0].sval));		}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 304 "parser.y" /* yacc.c:1646  */
    {(yyval.locationType) = new LocationNode((yyvsp[-3].sval),(yyvsp[-1].exprType));	}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 311 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcallType) = new MethodCallNode();		}
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcallType) = new MethodCallNode((yyvsp[-1].argumentsType));	}
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcallType) = new CalloutNode((yyvsp[-3].stringlitType),(yyvsp[-1].calloutArgsListType));		}
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcallType) = new CalloutNode((yyvsp[-1].stringlitType));	}
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 317 "parser.y" /* yacc.c:1646  */
    {(yyval.calloutArgsListType) = new vector<CalloutArgsNode*>;
														 CalloutArgsNode* temp = new CalloutArgsNode((yyvsp[0].exprType));
														 (yyval.calloutArgsListType)->push_back(temp);}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 321 "parser.y" /* yacc.c:1646  */
    {(yyval.calloutArgsListType) = new vector<CalloutArgsNode*>;
														 CalloutArgsNode* temp = new CalloutArgsNode((yyvsp[0].stringlitType));
														 (yyval.calloutArgsListType)->push_back(temp);}
#line 2012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 325 "parser.y" /* yacc.c:1646  */
    {(yyval.calloutArgsListType) = (yyvsp[0].calloutArgsListType);
														 (yyval.calloutArgsListType)->push_back((yyvsp[-2].exprType));}
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 329 "parser.y" /* yacc.c:1646  */
    {(yyval.calloutArgsListType) = (yyvsp[0].calloutArgsListType);
														 (yyval.calloutArgsListType)->push_back((yyvsp[-2].stringlitType));}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 336 "parser.y" /* yacc.c:1646  */
    {	(yyval.argumentsType) = new vector<ExpressionNode*>;
												ExpressionNode* temp = ExpressionNode((yyvsp[0].exprType));
											 	(yyval.argumentsType)->push_back(temp);					}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 340 "parser.y" /* yacc.c:1646  */
    {	(yyval.argumentsType) = (yyvsp[-2].exprType);
											 	(yyval.argumentsType)->push_back((yyvsp[0].argumentsType));					}
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.literalType) = new LiteralNode((yyvsp[0].intlitType));	}
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.literalType) = new LiteralNode((yyvsp[0].boollitType));	}
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 348 "parser.y" /* yacc.c:1646  */
    {	(yyval.intlitType) = new IntNode((yyvsp[0].ival));	}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 349 "parser.y" /* yacc.c:1646  */
    {	(yyval.intlitType) = new IntNode((yyvsp[0].ival));	}
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 352 "parser.y" /* yacc.c:1646  */
    {	(yyval.boollitType) = new BoolNode((yyvsp[0].sval));	}
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 353 "parser.y" /* yacc.c:1646  */
    { 	(yyval.boollitType) = new BoolNode((yyvsp[0].sval));	}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 356 "parser.y" /* yacc.c:1646  */
    {(yyval.stringlitType) = new StringNode((yyvsp[0].sval));}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2087 "parser.tab.c" /* yacc.c:1646  */
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
                      yytoken, &yylval, &yylloc);
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
                  yystos[yystate], yyvsp, yylsp);
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 362 "parser.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
	// open a file handle to a particular file:

	FILE *myfile = fopen("test.dcf", "r");
	// make sure it's valid:
	if (!myfile) {
		printf("trouble opening given file\n");
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:

	yyin = myfile;
	yyparse();
	return 0;
}






//callout (string lit)
//comments
