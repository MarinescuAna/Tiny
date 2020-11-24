/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "c.y"

#include <stdio.h>
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);

#line 80 "c.tab.c"

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

#include "c.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_LBRACK = 5,                     /* LBRACK  */
  YYSYMBOL_NAME = 6,                       /* NAME  */
  YYSYMBOL_LPAR = 7,                       /* LPAR  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_QCHAR = 9,                      /* QCHAR  */
  YYSYMBOL_NUMBER = 10,                    /* NUMBER  */
  YYSYMBOL_TIMES = 11,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 12,                    /* DIVIDE  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_RPAR = 15,                      /* RPAR  */
  YYSYMBOL_RBRACK = 16,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 17,                    /* LBRACE  */
  YYSYMBOL_ASSIGN = 18,                    /* ASSIGN  */
  YYSYMBOL_LESS = 19,                      /* LESS  */
  YYSYMBOL_EQUAL = 20,                     /* EQUAL  */
  YYSYMBOL_GREATER = 21,                   /* GREATER  */
  YYSYMBOL_NEQUAL = 22,                    /* NEQUAL  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_LENGTH = 25,                    /* LENGTH  */
  YYSYMBOL_WRITE = 26,                     /* WRITE  */
  YYSYMBOL_READ = 27,                      /* READ  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_RBRACE = 31,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 32,                 /* SEMICOLON  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_declaration = 35,               /* declaration  */
  YYSYMBOL_fun_declaration = 36,           /* fun_declaration  */
  YYSYMBOL_formal_pars = 37,               /* formal_pars  */
  YYSYMBOL_formal_par = 38,                /* formal_par  */
  YYSYMBOL_block = 39,                     /* block  */
  YYSYMBOL_var_declarations = 40,          /* var_declarations  */
  YYSYMBOL_var_declaration = 41,           /* var_declaration  */
  YYSYMBOL_type = 42,                      /* type  */
  YYSYMBOL_statements = 43,                /* statements  */
  YYSYMBOL_statement_semicol = 44,         /* statement_semicol  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_lexp = 46,                      /* lexp  */
  YYSYMBOL_exp = 47,                       /* exp  */
  YYSYMBOL_binop = 48,                     /* binop  */
  YYSYMBOL_unop = 49,                      /* unop  */
  YYSYMBOL_pars = 50,                      /* pars  */
  YYSYMBOL_var = 51                        /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    73,    74,    77,    80,    81,    82,
      85,    88,    89,    92,    93,    96,    98,    99,   100,   103,
     104,   107,   108,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   122,   123,   126,   127,   128,   129,   130,   131,
     132,   133,   136,   137,   138,   139,   140,   141,   142,   143,
     146,   149,   150,   153
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR",
  "LBRACK", "NAME", "LPAR", "COMMA", "QCHAR", "NUMBER", "TIMES", "DIVIDE",
  "PLUS", "MINUS", "RPAR", "RBRACK", "LBRACE", "ASSIGN", "LESS", "EQUAL",
  "GREATER", "NEQUAL", "NOT", "RETURN", "LENGTH", "WRITE", "READ", "WHILE",
  "IF", "ELSE", "RBRACE", "SEMICOLON", "$accept", "program", "declaration",
  "fun_declaration", "formal_pars", "formal_par", "block",
  "var_declarations", "var_declaration", "type", "statements",
  "statement_semicol", "statement", "lexp", "exp", "binop", "unop", "pars",
  "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,   -77,   -77,    10,   -77,   -77,   -77,    55,   -77,   -77,
      14,    -1,     2,    14,   -77,   -77,   -77,     1,    22,   121,
      14,   -77,    37,   -77,    14,   133,   -77,    22,    14,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,    14,   181,
       0,   -77,    64,   181,    38,   -77,   145,   181,    37,    15,
     -77,    14,   -77,   -77,   -77,    30,   -77,   181,    36,    14,
      14,     1,    42,    45,   -77,    30,   -77,    66,    32,   -77,
       7,    14,    81,    85,    -2,    14,    14,   -77,    34,    43,
     -77,    62,    14,    47,   -77,   -77,   -77,   157,   169,   -77,
     -77,   107,   -77,    62,    62,   -77,   -77,    44,    62,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    17,     0,     2,     4,     5,     0,     1,     3,
       0,     0,    53,     0,    40,    38,    50,     0,    34,     0,
       0,    32,     9,    15,     0,     0,    53,    41,     0,    44,
      45,    42,    43,    18,    49,    46,    48,    47,     0,    36,
       0,     7,     0,    51,     0,    37,     0,    35,     0,     0,
      10,     0,    39,    33,     8,    20,     6,    52,    53,     0,
       0,     0,     0,     0,    31,    20,    13,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
      12,    19,     0,     0,    24,    26,    27,     0,     0,    11,
      21,     0,    25,     0,     0,    23,    30,    28,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,    75,   -77,   -77,    35,    31,   -77,   -39,   -20,
      17,   -77,   -76,   -17,    -9,   -77,   -77,    13,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    40,    41,    64,    65,     6,     7,
      68,    81,    69,    18,    43,    38,    20,    44,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      27,    19,    42,    28,    25,    90,    22,    26,    48,    24,
       8,    39,    28,     1,     2,    49,    66,    96,    97,    46,
      12,    13,    99,    14,    15,    82,    77,    28,    42,    47,
      86,    23,    55,     1,     2,    67,    58,    16,    70,    17,
       1,     2,    57,    71,    74,    67,    51,    55,    70,    75,
      72,    73,    76,    52,    59,    51,    60,    61,    62,    63,
      10,    11,    92,    80,    70,    89,    87,    88,    58,    10,
      50,    10,    79,    91,    98,    23,    70,    70,     9,    55,
      56,    70,    78,    54,    83,     0,    59,     0,    60,    61,
      62,    63,    29,    30,    31,    32,    29,    30,    31,    32,
      34,    35,    36,    37,    34,    35,    36,    37,     0,     0,
       0,     0,     0,    84,     0,     0,     0,    85,    29,    30,
      31,    32,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,    29,    30,    31,    32,     0,    33,     0,    95,
      34,    35,    36,    37,    29,    30,    31,    32,    45,     0,
       0,     0,    34,    35,    36,    37,    29,    30,    31,    32,
       0,    53,     0,     0,    34,    35,    36,    37,    29,    30,
      31,    32,    93,     0,     0,     0,    34,    35,    36,    37,
      29,    30,    31,    32,    94,     0,     0,     0,    34,    35,
      36,    37,    29,    30,    31,    32,     0,     0,     0,     0,
      34,    35,    36,    37
};

static const yytype_int8 yycheck[] =
{
      17,    10,    22,     5,    13,    81,     7,     6,     8,     7,
       0,    20,     5,     3,     4,    15,    55,    93,    94,    28,
       6,     7,    98,     9,    10,    18,    65,     5,    48,    38,
      32,    32,    17,     3,     4,    55,     6,    23,    55,    25,
       3,     4,    51,     7,    61,    65,     8,    17,    65,     7,
      59,    60,     7,    15,    24,     8,    26,    27,    28,    29,
       5,     6,    15,    31,    81,    31,    75,    76,     6,     5,
       6,     5,     6,    82,    30,    32,    93,    94,     3,    17,
      49,    98,    65,    48,    71,    -1,    24,    -1,    26,    27,
      28,    29,    11,    12,    13,    14,    11,    12,    13,    14,
      19,    20,    21,    22,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    32,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    -1,    32,
      19,    20,    21,    22,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    11,    12,    13,    14,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    34,    35,    36,    41,    42,     0,    35,
       5,     6,     6,     7,     9,    10,    23,    25,    46,    47,
      49,    51,     7,    32,     7,    47,     6,    46,     5,    11,
      12,    13,    14,    16,    19,    20,    21,    22,    48,    47,
      37,    38,    42,    47,    50,    15,    47,    47,     8,    15,
       6,     8,    15,    16,    38,    17,    39,    47,     6,    24,
      26,    27,    28,    29,    39,    40,    41,    42,    43,    45,
      46,     7,    47,    47,    46,     7,     7,    41,    43,     6,
      31,    44,    18,    50,    32,    32,    32,    47,    47,    31,
      45,    47,    15,    15,    15,    32,    45,    45,    30,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    37,    37,    37,
      38,    39,    39,    40,    40,    41,    42,    42,    42,    43,
      43,    44,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    50,    50,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     6,     1,     3,     0,
       2,     4,     3,     1,     2,     3,     1,     1,     4,     2,
       0,     2,     0,     4,     3,     4,     3,     3,     5,     7,
       5,     1,     1,     4,     1,     3,     2,     3,     1,     4,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: declaration  */
#line 69 "c.y"
                                                                                                { (yyval.node) = createProgramNode((yyvsp[0].node)); astRoot = (yyval.node);}
#line 1196 "c.tab.c"
    break;

  case 3: /* program: program declaration  */
#line 70 "c.y"
                                                                                                { (yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1202 "c.tab.c"
    break;

  case 4: /* declaration: fun_declaration  */
#line 73 "c.y"
                                                                                        { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 1208 "c.tab.c"
    break;

  case 5: /* declaration: var_declaration  */
#line 74 "c.y"
                                                                                        { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 1214 "c.tab.c"
    break;

  case 6: /* fun_declaration: type NAME LPAR formal_pars RPAR block  */
#line 77 "c.y"
                                                            { (yyval.node) = createFunctionDefinitionNode((yyvsp[-5].node), (yyvsp[-4].strings), (yyvsp[-2].node), (yyvsp[0].node));  }
#line 1220 "c.tab.c"
    break;

  case 7: /* formal_pars: formal_par  */
#line 80 "c.y"
                                                                                                { (yyval.node) = createListNode("ParametersList", (yyvsp[0].node));}
#line 1226 "c.tab.c"
    break;

  case 8: /* formal_pars: formal_pars COMMA formal_par  */
#line 81 "c.y"
                                                                                { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1232 "c.tab.c"
    break;

  case 9: /* formal_pars: %empty  */
#line 82 "c.y"
                                                                                                        { (yyval.node) = createListNode("", NULL); }
#line 1238 "c.tab.c"
    break;

  case 10: /* formal_par: type NAME  */
#line 85 "c.y"
                                                                                                { (yyval.node) = createVarDeclaration((yyvsp[-1].node), (yyvsp[0].strings));}
#line 1244 "c.tab.c"
    break;

  case 11: /* block: LBRACE var_declarations statements RBRACE  */
#line 88 "c.y"
                                                                        { (yyval.node) = createBlock((yyvsp[-2].node), (yyvsp[-1].node));}
#line 1250 "c.tab.c"
    break;

  case 12: /* block: LBRACE statements RBRACE  */
#line 89 "c.y"
                                                                                        { (yyval.node) = createBlock(NULL, (yyvsp[-1].node));}
#line 1256 "c.tab.c"
    break;

  case 13: /* var_declarations: var_declaration  */
#line 92 "c.y"
                                                                                        { (yyval.node) = createListNode("VarDeclarations", (yyvsp[0].node));}
#line 1262 "c.tab.c"
    break;

  case 14: /* var_declarations: var_declarations var_declaration  */
#line 93 "c.y"
                                                                        { (yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1268 "c.tab.c"
    break;

  case 15: /* var_declaration: type NAME SEMICOLON  */
#line 96 "c.y"
                                                                                { (yyval.node) = createVarDeclaration((yyvsp[-2].node), (yyvsp[-1].strings));}
#line 1274 "c.tab.c"
    break;

  case 16: /* type: INT  */
#line 98 "c.y"
                                                                                                                { (yyval.node) = createTypeSpecifier("INT"); }
#line 1280 "c.tab.c"
    break;

  case 17: /* type: CHAR  */
#line 99 "c.y"
                                                                                                                { (yyval.node) = createTypeSpecifier("CHAR");	}
#line 1286 "c.tab.c"
    break;

  case 18: /* type: type LBRACK exp RBRACK  */
#line 100 "c.y"
                                                                                        { (yyval.node) = createArrayDeclaration((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 1292 "c.tab.c"
    break;

  case 19: /* statements: statement statement_semicol  */
#line 103 "c.y"
                                                                                { (yyval.node) = createStatement((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1298 "c.tab.c"
    break;

  case 20: /* statements: %empty  */
#line 104 "c.y"
                                                                                                                { (yyval.node) = createListNode("", NULL); }
#line 1304 "c.tab.c"
    break;

  case 21: /* statement_semicol: statement_semicol statement  */
#line 107 "c.y"
                                                                        { (yyval.node) = createListNode("Statement", (yyvsp[0].node)); }
#line 1310 "c.tab.c"
    break;

  case 22: /* statement_semicol: %empty  */
#line 108 "c.y"
                                                                                                                { (yyval.node) = createListNode("", NULL); }
#line 1316 "c.tab.c"
    break;

  case 23: /* statement: lexp ASSIGN exp SEMICOLON  */
#line 111 "c.y"
                                                                                { (yyval.node) = createAssignStatement((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 1322 "c.tab.c"
    break;

  case 24: /* statement: RETURN exp SEMICOLON  */
#line 112 "c.y"
                                                                                                { (yyval.node) = createReturnStatement((yyvsp[-1].node)); }
#line 1328 "c.tab.c"
    break;

  case 25: /* statement: NAME LPAR pars RPAR  */
#line 113 "c.y"
                                                                                                { (yyval.node) = createFunctionCall((yyvsp[-3].strings),(yyvsp[-1].node)); }
#line 1334 "c.tab.c"
    break;

  case 26: /* statement: WRITE exp SEMICOLON  */
#line 114 "c.y"
                                                                                                { (yyval.node) = createIOStatement((yyvsp[-1].node),1); }
#line 1340 "c.tab.c"
    break;

  case 27: /* statement: READ lexp SEMICOLON  */
#line 115 "c.y"
                                                                                                { (yyval.node) = createIOStatement((yyvsp[-1].node),2); }
#line 1346 "c.tab.c"
    break;

  case 28: /* statement: IF LPAR exp RPAR statement  */
#line 116 "c.y"
                                                                                        { (yyval.node) = createIfStatement((yyvsp[-2].node),(yyvsp[0].node),NULL); }
#line 1352 "c.tab.c"
    break;

  case 29: /* statement: IF LPAR exp RPAR statement ELSE statement  */
#line 117 "c.y"
                                                                        { (yyval.node) = createIfStatement((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1358 "c.tab.c"
    break;

  case 30: /* statement: WHILE LPAR exp RPAR statement  */
#line 118 "c.y"
                                                                                        { (yyval.node) = createWhileStatement((yyvsp[-2].node),(yyvsp[0].node)); }
#line 1364 "c.tab.c"
    break;

  case 31: /* statement: block  */
#line 119 "c.y"
                                                                                                                { (yyval.node) = createListNode("Block", (yyvsp[0].node)); }
#line 1370 "c.tab.c"
    break;

  case 32: /* lexp: var  */
#line 122 "c.y"
                                                                                                                { (yyval.node) = createListNode("VarName", (yyvsp[0].node)); }
#line 1376 "c.tab.c"
    break;

  case 33: /* lexp: lexp LBRACK exp RBRACK  */
#line 123 "c.y"
                                                                                                { (yyval.node) = createAccessStatement((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1382 "c.tab.c"
    break;

  case 34: /* exp: lexp  */
#line 126 "c.y"
                                                                                                                { (yyval.node) = createListNode("lexp", (yyvsp[0].node)); }
#line 1388 "c.tab.c"
    break;

  case 35: /* exp: exp binop exp  */
#line 127 "c.y"
                                                                                                        { (yyval.node) = createOperation((yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1394 "c.tab.c"
    break;

  case 36: /* exp: unop exp  */
#line 128 "c.y"
                                                                                                                { (yyval.node) = createOperation((yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1400 "c.tab.c"
    break;

  case 37: /* exp: LPAR exp RPAR  */
#line 129 "c.y"
                                                                                                        { (yyval.node) = createListNode("Expression", (yyvsp[-1].node)); }
#line 1406 "c.tab.c"
    break;

  case 38: /* exp: NUMBER  */
#line 130 "c.y"
                                                                                                                { (yyval.node) = createTypeSpecifier("NUMBER"); }
#line 1412 "c.tab.c"
    break;

  case 39: /* exp: NAME LPAR pars RPAR  */
#line 131 "c.y"
                                                                                                { (yyval.node) = createFunctionCall((yyvsp[-3].strings),(yyvsp[-1].node)); }
#line 1418 "c.tab.c"
    break;

  case 40: /* exp: QCHAR  */
#line 132 "c.y"
                                                                                                                { (yyval.node) = createTypeSpecifier("QCHAR"); }
#line 1424 "c.tab.c"
    break;

  case 41: /* exp: LENGTH lexp  */
#line 133 "c.y"
                                                                                                        { (yyval.node) = createLengthStatement((yyvsp[0].node)); }
#line 1430 "c.tab.c"
    break;

  case 42: /* binop: PLUS  */
#line 136 "c.y"
                                                                                                        { (yyval.node) = createOperator("PLUS"); }
#line 1436 "c.tab.c"
    break;

  case 43: /* binop: MINUS  */
#line 137 "c.y"
                                                                                                                { (yyval.node) = createOperator("MINUS"); }
#line 1442 "c.tab.c"
    break;

  case 44: /* binop: TIMES  */
#line 138 "c.y"
                                                                                                                { (yyval.node) = createOperator("TIMES"); }
#line 1448 "c.tab.c"
    break;

  case 45: /* binop: DIVIDE  */
#line 139 "c.y"
                                                                                                                { (yyval.node) = createOperator("DIVIDE"); }
#line 1454 "c.tab.c"
    break;

  case 46: /* binop: EQUAL  */
#line 140 "c.y"
                                                                                                                { (yyval.node) = createOperator("EQUAL"); }
#line 1460 "c.tab.c"
    break;

  case 47: /* binop: NEQUAL  */
#line 141 "c.y"
                                                                                                                { (yyval.node) = createOperator("NEQUAL"); }
#line 1466 "c.tab.c"
    break;

  case 48: /* binop: GREATER  */
#line 142 "c.y"
                                                                                                                { (yyval.node) = createOperator("GREATER"); }
#line 1472 "c.tab.c"
    break;

  case 49: /* binop: LESS  */
#line 143 "c.y"
                                                                                                                { (yyval.node) = createOperator("LESS"); }
#line 1478 "c.tab.c"
    break;

  case 50: /* unop: NOT  */
#line 146 "c.y"
                                                                                                                { (yyval.node) = createOperator("NOT"); }
#line 1484 "c.tab.c"
    break;

  case 51: /* pars: exp  */
#line 149 "c.y"
                                                                                                                { (yyval.node) = createListNode("Expression", (yyvsp[0].node));}
#line 1490 "c.tab.c"
    break;

  case 52: /* pars: pars COMMA exp  */
#line 150 "c.y"
                                                                                                        { (yyval.node) = (yyvsp[-2].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1496 "c.tab.c"
    break;

  case 53: /* var: NAME  */
#line 153 "c.y"
                                                                                                                { (yyval.node) = createTypeSpecifier("NAME"); }
#line 1502 "c.tab.c"
    break;


#line 1506 "c.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 157 "c.y"


int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}
