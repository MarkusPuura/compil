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
#line 1 "ANSYNyacc.y"


// inclusions de fichiers d'en-tête
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "Structure.h"
// -

// Variables globales
Fonctions *listfonctions; // Liste des fonctions
Blocks *block; // Liste des blocs

Sommets *sommets; // Liste des Sommets
Sommets *sommets2; // Une deuxieme liste de Sommets (pour pallier la lecture inversé du parseur parfois)

Arretes *arretes; // Liste des arretes
BlocksArr *blocksarr; // Liste bloc - arr

int yylineno;
char stockervar[100];
char stockervar2[100];
char stockertab[100];
char stockertab2[100];

char stockertabaff[50];
char stockertabaff2[50];
int esttableauaff;

int estvariable;
int estfonction;
int esttableau;
int nombrepar;
int estfonctdansfonct;

int idDot;  //nom du sommet pour le Dot
char listop[20];
char listcomp[20];
int hautaffecta[20];
char opaprestab[20];
char opaprespar[20];
int finfonc[20];
int parametresDot[20];
int zeroParametres;
int enregistrer[20];
int enraff1; enraff2; enrif; enrif2; enrif3;
int enrfor1, enrfor2, enrfor3;
int enrwhile1; enrwhile2;
int enrswitchaff;
int enrswitch[50];
int boucleblock[20];

char declarationblock[200]; // pour verifier si des variables sont declarés lors de creation de fonction

// -

#line 129 "y.tab.c"

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
    IDENTIFICATEUR = 258,
    CONSTANTE = 259,
    VOID = 260,
    INT = 261,
    FOR = 262,
    WHILE = 263,
    IF = 264,
    SWITCH = 265,
    CASE = 266,
    DEFAULT = 267,
    BREAK = 268,
    RETURN = 269,
    LT = 270,
    GT = 271,
    GEQ = 272,
    LEQ = 273,
    EQ = 274,
    NEQ = 275,
    NOT = 276,
    EXTERN = 277,
    NOMBRE = 278,
    PLUS = 279,
    MOINS = 280,
    MUL = 281,
    DIV = 282,
    LSHIFT = 283,
    RSHIFT = 284,
    BOR = 285,
    BAND = 286,
    LAND = 287,
    LOR = 288,
    ELSE = 289
  };
#endif
/* Tokens.  */
#define IDENTIFICATEUR 258
#define CONSTANTE 259
#define VOID 260
#define INT 261
#define FOR 262
#define WHILE 263
#define IF 264
#define SWITCH 265
#define CASE 266
#define DEFAULT 267
#define BREAK 268
#define RETURN 269
#define LT 270
#define GT 271
#define GEQ 272
#define LEQ 273
#define EQ 274
#define NEQ 275
#define NOT 276
#define EXTERN 277
#define NOMBRE 278
#define PLUS 279
#define MOINS 280
#define MUL 281
#define DIV 282
#define LSHIFT 283
#define RSHIFT 284
#define BOR 285
#define BAND 286
#define LAND 287
#define LOR 288
#define ELSE 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 60 "ANSYNyacc.y"

    char *name[50];
    int val;

#line 254 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


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
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
      35,    36,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    37,
      46,    41,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,    45,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    80,    80,    85,    86,    89,    90,   136,   283,   380,
     536,   555,   576,   577,   609,   610,   635,   680,   683,   688,
     689,   708,   709,   733,   734,   758,   762,   797,   801,   807,
     808,   841,   849,   850,   853,   866,   869,   878,   880,   882,
     908,   991,  1051,  1052,  1053,  1058,  1059,  1062,  1065,  1068,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1081,  1089,
    1092,  1118,  1199,  1257,  1258,  1261,  1262,  1263,  1264,  1268,
    1278,  1281,  1284,  1304,  1305,  1339,  1360,  1466,  1490,  1502,
    1537,  1570,  1573,  1576,  1580,  1589,  1607,  1610,  1629,  1740,
    1749,  1784,  1787,  1793,  1794,  1795,  1801,  1810,  1812,  1815,
    1823,  1831,  1832,  1843,  1846,  1881,  1882,  1893,  1894,  1912,
    1913,  1914,  1916,  2009,  2010,  2011,  2012,  2013,  2014,  2017,
    2026,  2035,  2040,  2157,  2158,  2160,  2215,  2216,  2217,  2218,
    2267,  2268,  2270,  2272,  2285,  2288,  2303,  2322,  2341,  2356
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICATEUR", "CONSTANTE", "VOID",
  "INT", "FOR", "WHILE", "IF", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "RETURN", "LT", "GT", "GEQ", "LEQ", "EQ", "NEQ", "NOT", "EXTERN",
  "NOMBRE", "PLUS", "MOINS", "MUL", "DIV", "LSHIFT", "RSHIFT", "BOR",
  "BAND", "LAND", "LOR", "ELSE", "'('", "')'", "';'", "','", "'['", "']'",
  "'='", "'{'", "'}'", "'&'", "'|'", "'<'", "'>'", "':'", "$accept", "R1",
  "R", "S", "EX", "FONCEXT", "EXTPLUSIEURSPARAM", "S1", "PLUSIEURSIDS",
  "TABL", "TABLAFF1", "S2", "FONC", "RT", "BLOCK1", "FPLUSIEURSIDS",
  "MOINSCHOISIRPAR", "ENR", "CHOISIRPAR", "OPOUFIN", "OPOUFINOUFONC",
  "OPERATEUR", "MOINSCHOISIRPARSANSVIRGULE", "CHOISIRPARSANSVIRGULE",
  "OPOUFINSANSVIRGULE", "OPOUFINOUFONCSANSVIRGULE", "AFFECTA",
  "PARANTHESE", "AFFECTASANSMOINS", "AFF1", "TABLAFF", "BLOCK", "ENRIF",
  "RETURNA", "IDS", "IDST", "PLUSIEURSIDSBLOCK", "TABBLOCK", "ENRFOR1",
  "ENRFOR2", "ENRFOR3", "CFOR", "COMP", "BOUCLE", "ENRWHILE1", "ENRWHILE2",
  "CWHILE", "ENR1", "ENR2", "CIF", "CELSE", "NVBLOCKID", "CSWITCH",
  "NOAFF", "CCASE", YY_NULLPTR
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
     285,   286,   287,   288,   289,    40,    41,    59,    44,    91,
      93,    61,   123,   125,    38,   124,    60,    62,    58
};
# endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,    86,     2,    20,    42,   156,    57,  -270,   136,    38,
      43,    52,  -270,    79,    55,   129,    96,   109,  -270,  -270,
    -270,   158,   180,    36,    97,    65,   138,  -270,    83,   205,
     268,   108,    52,   140,  -270,   129,    26,    26,  -270,   143,
     172,  -270,  -270,   124,   166,  -270,  -270,  -270,  -270,  -270,
    -270,    44,  -270,   101,  -270,  -270,  -270,    36,  -270,   101,
    -270,    36,  -270,   232,   246,   115,    97,  -270,  -270,  -270,
    -270,     1,    78,   187,   108,  -270,   108,  -270,   176,  -270,
    -270,   210,   173,  -270,  -270,   135,   174,    62,    62,   180,
     180,  -270,  -270,  -270,  -270,    94,  -270,   115,  -270,  -270,
     115,  -270,  -270,  -270,   180,   194,  -270,    52,   268,   268,
     179,  -270,  -270,   281,   268,    40,  -270,  -270,    56,   217,
     184,  -270,  -270,  -270,  -270,   246,   246,  -270,  -270,   246,
    -270,   182,   186,   108,   108,   259,   108,   193,   220,  -270,
      21,  -270,   213,  -270,    99,  -270,  -270,  -270,  -270,     1,
    -270,  -270,  -270,   214,   108,  -270,  -270,  -270,   235,    86,
     233,   238,   207,   208,   211,   212,   215,    35,  -270,  -270,
      21,   222,   216,   239,  -270,  -270,   223,  -270,    21,    40,
    -270,   245,   151,   248,  -270,    52,  -270,    52,   230,    52,
    -270,  -270,  -270,   229,  -270,  -270,    56,  -270,   251,   259,
    -270,  -270,   154,  -270,   266,   255,  -270,  -270,   258,  -270,
    -270,   267,   243,  -270,  -270,    99,  -270,  -270,   277,  -270,
     160,   249,    52,   134,   134,     4,  -270,  -270,   154,  -270,
     132,  -270,  -270,  -270,  -270,  -270,  -270,  -270,    52,    52,
      86,   211,   263,    35,  -270,  -270,  -270,   260,  -270,  -270,
     288,  -270,   278,  -270,  -270,  -270,  -270,  -270,  -270,    21,
     188,   274,   313,   282,   283,  -270,    52,   269,  -270,   132,
     134,    23,    23,  -270,    23,  -270,    52,  -270,  -270,   272,
     279,  -270,    23,  -270,   284,    73,   320,   287,  -270,  -270,
     286,   122,    52,  -270,  -270,  -270,   292,    23,  -270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     5,     1,
       4,     0,     0,     0,     0,     0,     0,    37,     0,    78,
      75,     0,     0,     0,    70,     0,     0,     0,    19,     0,
       0,     7,    18,     0,     0,    50,    51,    52,    53,    57,
      56,     0,    49,     0,    54,    55,    40,     0,    42,     0,
      41,     0,    36,     0,     0,     0,     0,    38,    59,    28,
      27,     0,     0,     0,     0,    76,     0,    69,     0,    25,
       6,     0,     0,     8,    17,     0,     0,     0,     0,     0,
       0,    48,    45,    44,    43,     0,    65,     0,    61,    63,
       0,    62,    58,    38,     0,     0,    23,     0,    82,    84,
       0,    77,    74,    73,     0,     0,    31,    20,     0,     0,
       0,    11,    10,    46,    47,     0,     0,    66,    64,     0,
      39,     0,     0,     0,     0,    80,     0,     0,     0,    30,
       0,    21,     0,    16,     0,    12,    67,    68,    60,     0,
      26,    81,    83,     0,     0,    79,    72,    31,     0,     0,
       0,     0,     0,     0,   128,     0,     0,     0,    32,    29,
       0,     0,     0,     0,    13,    24,     0,    86,     0,     0,
      88,     0,     0,     0,    93,     0,    94,     0,    95,     0,
      97,    92,   100,     0,    91,    33,     0,    14,     0,    87,
      35,    34,     0,   105,     0,     0,    90,   103,     0,   123,
     126,     0,     0,    99,    22,     0,    85,   101,     0,    89,
       0,     0,     0,     0,     0,     0,   132,    15,     0,   106,
       0,   109,   116,   115,   117,   118,   113,   114,     0,     0,
       0,   128,     0,     0,    31,   131,    96,     0,   102,   107,
       0,   104,     0,   124,   127,   122,   130,   120,   121,     0,
       0,     0,     0,     0,     0,   119,     0,     0,   133,     0,
       0,     0,     0,   134,     0,   108,     0,   125,   129,     0,
       0,   110,     0,   137,     0,     0,     0,     0,   139,   136,
       0,     0,     0,   138,   135,   111,     0,     0,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,   321,  -270,  -270,   242,   116,   297,   250,   137,
     185,  -157,   299,  -153,  -167,   159,   -39,   234,    -8,    59,
    -270,   -20,   273,   -46,    31,  -270,   -11,  -270,   -26,  -270,
     141,  -270,  -270,    98,   114,  -270,   123,    75,  -270,  -270,
    -270,  -270,  -218,  -127,  -270,  -270,  -270,  -270,  -270,   104,
    -270,  -270,  -270,  -270,  -269
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    18,   121,   174,    41,    42,   143,
     107,    12,    83,   140,   169,   139,    26,   104,    27,    60,
      56,    61,    67,    68,   101,    98,   193,   114,    34,    75,
     155,   170,   211,   194,   219,   206,   207,   251,   252,   284,
     296,   184,   238,   245,   223,   263,   186,   224,   264,   188,
     246,   247,   190,   279,   268
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    57,   180,   195,   178,    77,   239,   240,    13,    74,
      76,   200,    90,   241,    91,    62,   289,   242,   243,   102,
      93,    78,   294,    14,   159,   160,   240,   161,   162,   163,
     164,   165,    81,   109,   166,   167,   242,   243,    29,    21,
     105,    21,   106,    97,   100,    15,   244,    21,   111,    92,
     112,   127,   276,    94,   128,    29,   126,    19,    30,    22,
      31,    22,    82,    23,   168,   244,    28,    22,   119,    23,
      32,    24,   192,    24,    25,    30,   137,    31,   138,    24,
      89,    21,    35,   255,   266,   267,   287,    32,   133,   134,
      36,   259,   265,   141,   136,   142,   132,    21,   120,    43,
      63,    22,    69,    23,    21,   100,   100,   151,   152,   100,
     156,    29,    44,    24,   108,   154,   288,    22,    63,    23,
      64,     9,    65,    71,    22,    10,    23,    11,   177,    24,
     125,    30,    66,   266,   267,   172,    24,   173,    64,     1,
       2,     3,     4,    32,   277,   278,    85,   280,   123,   124,
      66,   232,   233,   234,   235,   285,   146,   147,     5,    87,
     148,    16,    17,   130,    37,   293,    38,    39,    40,   249,
     298,   250,    38,    39,   209,    70,   210,    79,   212,   154,
     236,   237,    45,    46,    47,    48,    49,    50,   203,   204,
     205,   217,   218,    51,    52,    86,    53,   203,   204,   266,
     267,    88,    54,    55,    45,    46,    47,    48,    49,    50,
     110,   231,   113,   115,   118,   116,    58,   131,    59,   135,
     144,   145,   149,   150,    54,    55,   158,   253,   254,    45,
      46,    47,    48,    49,    50,   157,   171,   176,   179,   181,
      72,   182,   183,   185,    73,   198,   187,   189,   202,    54,
      55,   208,   191,   197,   215,   273,    45,    46,    47,    48,
      49,    50,   196,   199,   -98,   281,   213,    95,    96,   220,
      45,    46,    47,    48,    49,    50,    54,    55,   221,   226,
     228,   295,    99,    45,    46,    47,    48,    49,    50,   230,
      54,    55,    45,    46,    47,    48,    49,    50,   153,   222,
     257,   225,   260,    54,    55,   -71,   -71,   -71,   -71,   -71,
     -71,   261,    54,    55,   269,   262,   270,   274,   271,   272,
     282,   286,   283,   290,   291,   -71,   -71,   292,   297,    20,
     122,   227,    80,   214,   175,   117,    84,   129,   201,   103,
     216,   258,   248,   229,   275,   256
};

static const yytype_int16 yycheck[] =
{
      11,    21,   159,   170,   157,    31,   224,     3,     6,    29,
      30,   178,    51,     9,    53,    23,   285,    13,    14,    65,
      59,    32,   291,     3,     3,     4,     3,     6,     7,     8,
       9,    10,     6,    72,    13,    14,    13,    14,     3,     3,
      39,     3,    41,    63,    64,     3,    42,     3,    74,    57,
      76,    97,   270,    61,   100,     3,    95,     0,    23,    23,
      25,    23,    36,    25,    43,    42,    23,    23,     6,    25,
      35,    35,    37,    35,    36,    23,    36,    25,    38,    35,
      36,     3,     3,   240,    11,    12,    13,    35,   108,   109,
      35,   244,   259,    37,   114,    39,   107,     3,    36,     3,
       3,    23,    37,    25,     3,   125,   126,   133,   134,   129,
     136,     3,     3,    35,    36,   135,    43,    23,     3,    25,
      23,    35,    25,    40,    23,    39,    25,    41,   154,    35,
      36,    23,    35,    11,    12,    36,    35,    38,    23,     3,
       4,     5,     6,    35,   271,   272,     3,   274,    89,    90,
      35,    17,    18,    19,    20,   282,   125,   126,    22,    35,
     129,     5,     6,   104,    35,    43,    37,    38,    39,    37,
     297,    39,    37,    38,   185,    37,   187,    37,   189,   199,
      46,    47,    24,    25,    26,    27,    28,    29,    37,    38,
      39,    37,    38,    35,    36,    23,    38,    37,    38,    11,
      12,    35,    44,    45,    24,    25,    26,    27,    28,    29,
      23,   222,    36,     3,    40,    42,    36,    23,    38,    40,
       3,    37,    40,    37,    44,    45,     6,   238,   239,    24,
      25,    26,    27,    28,    29,    42,    23,    23,     3,     6,
      35,     3,    35,    35,    39,     6,    35,    35,     3,    44,
      45,     3,    37,    37,     3,   266,    24,    25,    26,    27,
      28,    29,    40,    40,    34,   276,    37,    35,    36,     3,
      24,    25,    26,    27,    28,    29,    44,    45,    23,    36,
       3,   292,    36,    24,    25,    26,    27,    28,    29,    40,
      44,    45,    24,    25,    26,    27,    28,    29,    39,    41,
      37,    34,    42,    44,    45,    24,    25,    26,    27,    28,
      29,    23,    44,    45,    40,    37,     3,    48,    36,    36,
      48,    37,    43,     3,    37,    44,    45,    41,    36,     8,
      88,   215,    35,   196,   149,    85,    37,   103,   179,    66,
     199,   243,   228,   220,   269,   241
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    22,    50,    51,    52,    35,
      39,    41,    60,     6,     3,     3,     5,     6,    53,     0,
      51,     3,    23,    25,    35,    36,    65,    67,    23,     3,
      23,    25,    35,    75,    77,     3,    35,    35,    37,    38,
      39,    56,    57,     3,     3,    24,    25,    26,    27,    28,
      29,    35,    36,    38,    44,    45,    69,    70,    36,    38,
      68,    70,    67,     3,    23,    25,    35,    71,    72,    37,
      37,    40,    35,    39,    70,    78,    70,    77,    75,    37,
      56,     6,    36,    61,    61,     3,    23,    35,    35,    36,
      65,    65,    67,    65,    67,    35,    36,    70,    74,    36,
      70,    73,    72,    71,    66,    39,    41,    59,    36,    65,
      23,    77,    77,    36,    76,     3,    42,    57,    40,     6,
      36,    54,    54,    68,    68,    36,    65,    72,    72,    66,
      68,    23,    75,    70,    70,    40,    70,    36,    38,    64,
      62,    37,    39,    58,     3,    37,    73,    73,    73,    40,
      37,    77,    77,    39,    70,    79,    77,    42,     6,     3,
       4,     6,     7,     8,     9,    10,    13,    14,    43,    63,
      80,    23,    36,    38,    55,    59,    23,    77,    62,     3,
      60,     6,     3,    35,    90,    35,    95,    35,    98,    35,
     101,    37,    37,    75,    82,    63,    40,    37,     6,    40,
      63,    64,     3,    37,    38,    39,    84,    85,     3,    75,
      75,    81,    75,    37,    58,     3,    79,    37,    38,    83,
       3,    23,    41,    93,    96,    34,    36,    55,     3,    85,
      40,    75,    17,    18,    19,    20,    46,    47,    91,    91,
       3,     9,    13,    14,    42,    92,    99,   100,    83,    37,
      39,    86,    87,    75,    75,    60,    98,    37,    82,    62,
      42,    23,    37,    94,    97,    63,    11,    12,   103,    40,
       3,    36,    36,    75,    48,    86,    91,    92,    92,   102,
      92,    75,    48,    43,    88,    92,    37,    13,    43,   103,
       3,    37,    41,    43,   103,    75,    89,    36,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    60,    60,    61,
      61,    62,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      88,    89,    90,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    94,    95,    96,    97,    98,    98,
      99,    99,   100,   101,   102,   103,   103,   103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     4,     3,     4,     2,
       4,     4,     2,     3,     2,     4,     4,     2,     1,     1,
       3,     1,     4,     1,     4,     3,     6,     3,     3,     4,
       3,     0,     1,     2,     4,     4,     2,     1,     0,     4,
       2,     2,     1,     2,     2,     2,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     2,     2,     1,     2,     1,     2,     3,     3,     2,
       1,     1,     5,     3,     3,     1,     2,     3,     1,     4,
       3,     4,     2,     4,     2,     4,     2,     3,     2,     4,
       3,     2,     2,     2,     2,     2,     5,     2,     0,     2,
       1,     1,     3,     1,     4,     1,     3,     1,     4,     0,
       0,     0,    17,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     2,     0,     0,     8,     0,     0,     0,     8,
       2,     1,     0,     6,     0,     8,     6,     4,     8,     6
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
#line 80 "ANSYNyacc.y"
      {
        printf("pas d'erreur, fichier Dot généré.\n");
    }
#line 1643 "y.tab.c"
    break;

  case 6:
#line 90 "ANSYNyacc.y"
                                        {
        if (stockertab2[0] != '\0') {        // c'est un tableau
            char nom[50]; int cop = 0; 

            while((yyvsp[-1].name)[cop] != '\0') {
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            printf("un tableau ne peut pas être constant: %s\n", nom);
            yyerror();
        }
        if (estvariable == 1){      // c'est une variable globale
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0') {
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 

            nom[cop]='\0';
            int dec = DeclarationVariableBlockCourrant(block, nom);

            if (dec == 1 || dec == 2) {
                printf("variable %s déjà declaré\n", nom);
                yyerror();
            }

            ajoutervariable(block, nom);
            estvariable = 0;
        }
        if (estfonction == 1) {
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0'){
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            printf("une fonction ne peut pas être constante: %s\n", nom);
            yyerror();
        }

    }
#line 1694 "y.tab.c"
    break;

  case 7:
#line 136 "ANSYNyacc.y"
                                {
        if (stockertab2[0] != '\0') {        // c'est un tableau
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0') {
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            int i = 0; int j = 0;

            while(nom[i] != '\0') {
                stockertab[i]=nom[i]; i++;
            }

            while(stockertab2[j] != '\0') {
                stockertab[i] = stockertab2[j]; i++; j++;
            }

            vider(stockertab2);
            int dec = DeclarationVariableBlockCourrant(block, stockertab);

            if (dec == 2) {
                printf("tableau %s déjà déclaré\n", nom);
                yyerror();
            }

            if (dec == 1) {
                printf("nom: %s déjà possédé par une variable\n", nom);
                yyerror();
            }

            ajoutervariable(block, stockertab);
            vider(stockertab);
        }
        if (estvariable == 1) {      // c'est une variable globale
            char nom[50]; int cop = 0; 

            while((yyvsp[-1].name)[cop] != '\0') {
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 

            nom[cop]='\0';
            int dec = DeclarationVariableBlockCourrant(block, nom);

            if (dec == 1 || dec == 2) {
                printf("variable: %s déjà declaré\n", nom);
                yyerror();
            }

            ajoutervariable(block, nom);
            estvariable = 0;
        }
        if (estfonction == 1) {
            estfonction = 0;
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0') {
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';  //$2 copié dans nom car yacc copie que le &er caractère quand juste $2
            int dec = DeclarationFonction(listfonctions, nom);
            
            if (dec == 1) {
                printf("fonction: %s déjà declaré\n", nom);
                yyerror();
            }
            insertionFonction(listfonctions, nom, stockervar2, 1);
            
            if (AffichePossedeReturn(block) == 0) {
                printf("la fonction: %s doit renvoyer un int\n", nom);
                yyerror();
            }

            int i=0;
            int j;
            char element[20];
            int e;

            while(declarationblock[i] != '\0') {
                if (declarationblock[i] == '/') {
                    i++;
                }

                j=i;
                e=0;

                while(declarationblock[i] != '\0' && declarationblock[i] != '/') {
                    element[e] = declarationblock[i];
                    i++; e++;
                }

                if (estDansTableau(stockervar2, element) == 1) {
                    SupprimerDansTab(declarationblock, element);
                    i=j;
                }

                vider(element);
            }
            if (declarationblock[0] != '\0') {
                int p=0;

                while(declarationblock[p] != '\0' && declarationblock[p] != '/') {
                    p++;
                }

                if (declarationblock[p] == '\0') {
                    printf("variable: %s non declaré\n", declarationblock);
                    yyerror();
                }
                else {
                    p=0;
                    while(declarationblock[p] != '\0') {
                        if (declarationblock[p] == '/') {
                            declarationblock[p] = ';';
                        }
                        p++;
                    }
                    
                    printf("variables: %s non declarés\n", declarationblock);
                    yyerror();
                }     
            }

            vider(stockervar2);
            suppressionBlock(block);         // quand on quitte la fonction on supprime son block    

            idDot++;
            nom[cop] = ','; 
            cop++; 
            nom[cop] = ' '; 
            cop++; 
            nom[cop] = 'i'; 
            nom[cop+1] = 'n'; 
            nom[cop+2] = 't'; 
            nom[cop+3] = '\0';

            insertionSommets(sommets, nom, idDot, 1, 1);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
        }
    }
#line 1846 "y.tab.c"
    break;

  case 8:
#line 283 "ANSYNyacc.y"
                                    {
         
        estfonction = 0;
        char nom[50]; int cop = 0; 
        
        while((yyvsp[-2].name)[cop] != '\0') {
            nom[cop]=(yyvsp[-2].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0';  //je copie $2 dans nom car yacc bizarement copie que le 1er caractère quand je mets juste $2
        int dec = DeclarationFonction(listfonctions, nom);
        
        if (dec == 1) {
            printf("fonction: %s déjà declaré\n", nom);
            yyerror();
        }

        insertionFonction(listfonctions, nom, stockervar2, 1);
    
        if (AffichePossedeReturn(block) == 1) {
            printf("la fonction: %s doit renvoyer void\n", nom);
            yyerror();
        }
        
        int i=0;
        int j;
        char element[20];
        int e;

        while(declarationblock[i] != '\0') {
            if (declarationblock[i] == '/') {
                i++;
            }

            j=i;
            e=0;

            while(declarationblock[i] != '\0' && declarationblock[i] != '/') {
                element[e] = declarationblock[i];
                i++; e++;
            }

            if (estDansTableau(stockervar2, element) == 1) {
                SupprimerDansTab(declarationblock, element);
                i=j;
            }

            vider(element);
        }

        if (declarationblock[0] != '\0') {
            int p=0;

            while(declarationblock[p] != '\0' && declarationblock[p] != '/'){
                p++;
            }

            if (declarationblock[p] == '\0'){
                printf("variable: %s non declaré\n", declarationblock);
                yyerror();
            }
            else {
                p=0;
                
                while(declarationblock[p] != '\0') {
                    if (declarationblock[p] == '/') {
                        declarationblock[p] = ';';
                    }
                    p++;
                }

                printf("variables: %s non declarés\n", declarationblock);
                yyerror();
            }
        }

        vider(stockervar2);
        suppressionBlock(block);

        idDot++;
        nom[cop] = ','; 
        cop++; 
        nom[cop] = ' '; 
        cop++; 
        nom[cop] = 'v'; 
        nom[cop+1] = 'o'; 
        nom[cop+2] = 'i'; 
        nom[cop+3] = 'd'; 
        nom[cop+4] = '\0';

        insertionSommets(sommets, nom, idDot, 1, 1);
        insertionSommetBlocksArr(blocksarr, idDot);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        
    }
#line 1948 "y.tab.c"
    break;

  case 9:
#line 380 "ANSYNyacc.y"
                            {
        if (estvariable == 1){
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0'){
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);

            if (dec == 0){
                printf("variable: %s non declaré\n", nom);
                yyerror();
            }

            estvariable = 0;

            idDot++;
            insertionSommets(sommets, nom, idDot, 0, 0);
            idDot++;
            char egal[3] = {':', '=', '\0'};

            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, idDot-2);
        }

        if (esttableau == 1) {
            esttableau =0;
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0'){
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);

            if (dec == 0){
                printf("tableau: %s non declaré\n", nom);
                yyerror();
            }

            if (dec == 1){
                printf("%s n'est pas un tableau\n", nom);
                yyerror();
            }

            int i = 0; int j = 0;
            while(nom[i] != '\0') {
                stockertab[i]=nom[i]; i++;
            }

            while(stockertab2[j] != '\0') {
                stockertab[i] = stockertab2[j]; i++; j++;
            }

            dec = ControleTailleTableauBlocks(block, stockertab);
            if (dec == 0){
                printf("erreur de segmentation avec le tableau: %s\n", nom);
                yyerror();
            }

            vider(stockertab);

            int enregistreraff = idDot;
            idDot++;
            insertionSommets(sommets2, nom, idDot, 0, 0);
            int debut = idDot;
            char stockeraffpourDot[7];
            i=0; j=0;

            while(stockertab2[i] != '\0'){
                j=0;
                vider(stockeraffpourDot);
                i++;

                while(stockertab2[i] != ']'){
                    stockeraffpourDot[j] = stockertab2[i];
                    i++; j++;
                }

                i++;
                idDot++;
                if (stockeraffpourDot[0] == '\0'){stockeraffpourDot[0] = '0';}   //si = 0;
                
                insertionSommets(sommets2, stockeraffpourDot, idDot, 0, 0);
            }

            ViderPileSommets2();
            idDot++;
            char tabl[4] = {'T', 'A', 'B', '\0'};
            insertionSommets(sommets, tabl, idDot, 0, 0);

            while(debut < idDot){
                insertionArretes(arretes, idDot, debut);
                debut++;
            }

            vider(stockertab2);

            idDot++;
            char egal[3] = {':', '=', '\0'};
            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, enregistreraff);
        }
        if (estfonction == 1){
            estfonction = 0;
            char nom[50]; int cop = 0; 
            
            while((yyvsp[-1].name)[cop] != '\0'){
                nom[cop]=(yyvsp[-1].name)[cop];
                cop++;
            }; 
            
            nom[cop]='\0';
            int dec = DeclarationFonction(listfonctions, nom);
            
            if (dec == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            
            int n;
            n = NombreParametreFonction(listfonctions, nom);
            
            if (nombrepar != n){
                printf("nombre de paramètres incorrecte pour la fonction %s\n", nom);
                yyerror();
            }
            
            nombrepar = 0;
            idDot++;
            insertionSommets(sommets, nom, idDot, 5, 0);
            int k=0;
            
            while(parametresDot[k] != -1){
                insertionArretes(arretes, idDot, parametresDot[k]);
                parametresDot[k] = -1;
                k++;
            }
            
            k=0; 
            while(finfonc[k] != -1) {
                k++;
            }

            finfonc[k-1] = -1;
        }
    }
#line 2107 "y.tab.c"
    break;

  case 10:
#line 536 "ANSYNyacc.y"
                                        {
        char nom[50]; int cop = 0; 
        
        while((yyvsp[-2].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-2].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0';  //je copie $2 dans nom car yacc bizarement copie que le &er caractère quand je mets juste $2
        int dec = DeclarationFonction(listfonctions, nom);

        if (dec == 1){
            printf("fonction: %s déjà declaré\n", nom);
            yyerror();
        }

        insertionFonction(listfonctions, nom, stockervar2, 1);
        vider(stockervar2);
    }
#line 2131 "y.tab.c"
    break;

  case 11:
#line 555 "ANSYNyacc.y"
                                        {
        char nom[50]; int cop = 0; 
        
        while((yyvsp[-2].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-2].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0'; 
        int dec = DeclarationFonction(listfonctions, nom);
        
        if (dec == 1){
            printf("fonction: %s déjà declaré\n", nom);
            yyerror();
        }

        insertionFonction(listfonctions, nom, stockervar2, 0); 
        vider(stockervar2);
    }
#line 2155 "y.tab.c"
    break;

  case 13:
#line 577 "ANSYNyacc.y"
                                            {
        char nom[50]; int cop = 0; 
        
        while((yyvsp[-1].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-1].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0';
        int i=0;

        while(nom[i] != '\0'){
            stockervar2[i] = nom[i];
            i++;
        }

        if (stockervar[0] != '\0'){
            stockervar2[i] = '/';
            i++;
        }

        int j=0;
        while(stockervar[j] != '\0'){
            stockervar2[i] = stockervar[j];
            i++;
            j++;
        }

        vider(stockervar);
    }
#line 2190 "y.tab.c"
    break;

  case 15:
#line 610 "ANSYNyacc.y"
                                                {
        int i=0; while(stockervar[i] != '\0'){
            i++;
        }

        if (i != 0){
            stockervar[i] = '/'; i++;
        }

        char nom[50]; int cop = 0; 
        while((yyvsp[-1].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-1].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0';
        int j=0;

        while(nom[j] != '\0'){
            stockervar[i] = nom[j];
            j++;
        }
    }
#line 2218 "y.tab.c"
    break;

  case 16:
#line 635 "ANSYNyacc.y"
                            {
        int i=0;
        while(stockertab[i] != '\0'){ 
            i++;
        };

        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;

        while(nombre > 0) {
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }

        stockertab[i] = ']', i++;
        i =0; int j = 0; int k = 0;            //le tableau est à l'envers, donc on le met à l'endroit
        while(stockertab[i] != '\0'){
            i++;
        }
        
        j = i-2;
        while(i>0) {
            while(stockertab[i] != '['){
                i--;
            }

            stockertab2[k] = '['; k++;

            while(stockertab[j] != '['){
                stockertab2[k] = stockertab[j]; k++; j--;
            }

            stockertab2[k] = ']'; k++;
            i--;
            j = i-1;
        }

        vider(stockertab);
    }
#line 2268 "y.tab.c"
    break;

  case 17:
#line 680 "ANSYNyacc.y"
                {
        estfonction = 1;
    }
#line 2276 "y.tab.c"
    break;

  case 18:
#line 683 "ANSYNyacc.y"
                    {
        estvariable = 1;
    }
#line 2284 "y.tab.c"
    break;

  case 20:
#line 689 "ANSYNyacc.y"
                                        {
        char nom[50]; int cop = 0; 
        while((yyvsp[-1].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-1].name)[cop];
            cop++;
        }; 
        
        nom[cop]='\0';
        int dec = DeclarationVariableBlockCourrant(block, nom);
        
        if (dec == 1 || dec == 2){
            printf("variable: %s déjà declaré\n", nom);
            yyerror();
        }

        ajoutervariable(block, nom);
    }
#line 2306 "y.tab.c"
    break;

  case 22:
#line 709 "ANSYNyacc.y"
                            {
        int i=0;
        while(stockertab[i] != '\0'){ 
            i++;
        };

        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;

        while(nombre > 0) {
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }

        stockertab[i] = ']', i++;
    }
#line 2333 "y.tab.c"
    break;

  case 24:
#line 734 "ANSYNyacc.y"
                                {
        int i=0;
        while(stockertab[i] != '\0'){ 
            i++;
        };

        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;

        while(nombre > 0) {
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }

        stockertab[i] = ']', i++;
    }
#line 2360 "y.tab.c"
    break;

  case 25:
#line 758 "ANSYNyacc.y"
                    {
        estvariable = 1;

    }
#line 2369 "y.tab.c"
    break;

  case 26:
#line 762 "ANSYNyacc.y"
                                            {
        esttableau = 1;
        int i=0;
        while(stockertab[i] != '\0'){ i++;};
        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-4].val);
        char tabintermed[10];
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertab[i] = ']', i++;
        i =0; int j = 0; int k = 0;            //le tableau est à l'envers, donc on le met à l'endroit
        while(stockertab[i] != '\0'){i++;}
        j = i-2;
        while(i>0){
            while(stockertab[i] != '['){
                i--;
            }
            stockertab2[k] = '['; k++;
            while(stockertab[j] != '['){
                stockertab2[k] = stockertab[j]; k++; j--;
            }
            stockertab2[k] = ']'; k++;
            i--;
            j = i-1;
        }
        vider(stockertab);

    }
#line 2409 "y.tab.c"
    break;

  case 27:
#line 797 "ANSYNyacc.y"
                                {
        estfonction = 1;
        nombrepar++;
    }
#line 2418 "y.tab.c"
    break;

  case 28:
#line 801 "ANSYNyacc.y"
                    {
        estfonction = 1;
    }
#line 2426 "y.tab.c"
    break;

  case 30:
#line 808 "ANSYNyacc.y"
                                        {
        char nom[50]; int cop = 0; 
        
        while((yyvsp[-1].name)[cop] != '\0'){
            nom[cop]=(yyvsp[-1].name)[cop];
            cop++;
        }; 
            
        nom[cop]='\0';
        int i=0;

        while(nom[i] != '\0') {
            stockervar2[i] = nom[i];
            i++;
        }

        if (stockervar[0] != '\0'){
            stockervar2[i] = '/';
            i++;
        }

        int j=0;

        while(stockervar[j] != '\0'){
            stockervar2[i] = stockervar[j];
            i++;
            j++;
        }
        
        vider(stockervar);
    }
#line 2462 "y.tab.c"
    break;

  case 31:
#line 841 "ANSYNyacc.y"
     { 
    char variables[2] = {'\0'};
    insertionBlock(block, variables, 0, 0);
    insertionBlocksArr(blocksarr, 0);
    }
#line 2472 "y.tab.c"
    break;

  case 34:
#line 853 "ANSYNyacc.y"
                                            {
        int i=0; while(stockervar[i] != '\0'){i++;}
        if (i != 0){
            stockervar[i] = '/'; i++;
        }
        char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
        int j=0;
        while(nom[j] != '\0'){
            stockervar[i] = nom[j];
            j++;
            i++;
        }
    }
#line 2490 "y.tab.c"
    break;

  case 36:
#line 869 "ANSYNyacc.y"
                     {
        char zero[2] = {'0', '\0'}; idDot++;
        insertionSommets(sommets, zero, idDot, 0, 0);
        char moins[2] = {'-', '\0'}; idDot++;
        insertionSommets(sommets, moins, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, idDot-2);
        int i=0; while(parametresDot[i] != -1){i++;} parametresDot[i]=idDot; parametresDot[i+1]=-1;
    }
#line 2504 "y.tab.c"
    break;

  case 37:
#line 878 "ANSYNyacc.y"
                 {int i=0; while(parametresDot[i] != -1){i++;} parametresDot[i]=idDot; parametresDot[i+1]=-1;}
#line 2510 "y.tab.c"
    break;

  case 38:
#line 880 "ANSYNyacc.y"
        {int i=0; while(enregistrer[i]!=-1){i++;} enregistrer[i] = idDot; enregistrer[i+1] = -1;}
#line 2516 "y.tab.c"
    break;

  case 39:
#line 882 "ANSYNyacc.y"
                                               {
        int j=0; while(enregistrer[j] != -1){j++;}
        if (opaprespar[0] != '\0'){
            int oo=0; while(opaprespar[oo] != '\0'){oo++;} opaprespar[oo-1] = '\0';
            idDot++;
            int i=0; while(listop[i]!='\0'){i++;}
            char oper[3] = {listop[i-1], '\0'};
            if (listop[i-1] == 'r'){
                oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
            }
            if (listop[i-1] == 'l'){
                oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
            }
            listop[i-1] = '\0';
            insertionSommets(sommets, oper, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, enregistrer[j-1]);
        }
        else{
            idDot++;
            char vide[1] = {'\0'};
            insertionSommets(sommets, vide, idDot, 0, 0);    // todo effacer à la fin
            insertionArretes(arretes, idDot, enregistrer[j-1]);
        }
        enregistrer[j-1] = -1;
    }
#line 2547 "y.tab.c"
    break;

  case 40:
#line 908 "ANSYNyacc.y"
                                    {           // fonction dans appel de fonction, à ameliorer
        if (estfonctdansfonct == 1){
            estfonctdansfonct = 0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int n;
            n = DeclarationFonction(listfonctions, nom);
            if (n == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            n = NombreParametreFonction(listfonctions, nom);
            nombrepar = nombrepar - n;
            int ret = AfficheFonctionReturn(listfonctions, nom);
            if (ret == 0){
                printf("la fonction %s ne renvoi pas de int, donc ne peut pas être un paramètre\n", nom);
                yyerror();
            }

            if (zeroParametres == 1){
                idDot++;
                insertionSommets(sommets, nom, idDot, 5, 0);
            }
            else{
                
                idDot++;
                insertionSommets(sommets, nom, idDot, 5, 0);
                int k=0;
                int kk=0; while(finfonc[kk] != -1){kk++;}
                while(parametresDot[k] <= finfonc[kk-1] && parametresDot[k] != -1){
                    insertionArretes(arretes, idDot, parametresDot[k]);
                    k++;
                }
                int k2 = 0;
                while(parametresDot[k] != -1){
                    parametresDot[k2] = parametresDot[k];
                    k++; k2++;
                }
                while(parametresDot[k2] != -1){
                    parametresDot[k2] = -1;
                    k2++;
                }
                finfonc[kk-1] = -1;

            }
        }
        else{
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int n;
            n = DeclarationVariable(block, nom);

            if (n == 0){
                ajouterDansTableau(declarationblock, nom);
            }
            if (n == 2){
                printf("les fonctions n'acceptent pas les tableaux en paramètre, fonction: %s\n", nom);
                yyerror();
            }

            if (opaprespar[0] != '\0'){
                int x=0; while(opaprespar[x]!='\0'){x++;} opaprespar[x-1] = '\0';
                idDot++;
                insertionSommets(sommets, nom, idDot, 0, 0);
                idDot++;
                int i=0; while(listop[i]!='\0'){i++;}
                char oper[3] = {listop[i-1], '\0'};
                if (listop[i-1] == 'r'){
                    oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
                }
                if (listop[i-1] == 'l'){
                    oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
                }
                listop[i-1] = '\0';
                insertionSommets(sommets, oper, idDot, 0, 0);
                insertionArretes(arretes, idDot, idDot-2);
                insertionArretes(arretes, idDot, idDot-1);
            }
            else{
                idDot++;
                insertionSommets(sommets, nom, idDot, 0, 0);
            }

        }
    }
#line 2635 "y.tab.c"
    break;

  case 41:
#line 991 "ANSYNyacc.y"
                     {
        if (opaprespar[0] != '\0'){
            int x=0; while(opaprespar[x]!='\0'){x++;} opaprespar[x-1] = '\0';
            int t1 = (yyvsp[-1].val);
            int div = 10;
            int jj = 0;
            char chaine[10] = {'0', '\0'};
            while(t1/div >= 1){
                div = div * 10;
            }
            div = div/10;
            while(div>1){
                
                chaine[jj] = floor(t1/div) + '0';
                t1 = t1 - floor(t1/div)*div;
                div = div/10;
                jj++;
            }
            chaine[jj] = t1 + '0';
            idDot++;
            insertionSommets(sommets, chaine, idDot, 0, 0);
            idDot++;
            int i=0; while(listop[i]!='\0'){i++;}
            char oper[3] = {listop[i-1], '\0'};
            if (listop[i-1] == 'r'){
                oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
            }
            if (listop[i-1] == 'l'){
                oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
            }
            listop[i-1] = '\0';
            insertionSommets(sommets, oper, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-2);
            insertionArretes(arretes, idDot, idDot-1);

        }
        else{
            int t1 = (yyvsp[-1].val);
            int div = 10;
            int jj = 0;
            char chaine[10] = {'0', '\0'};
            while(t1/div >= 1){
                div = div * 10;
            }
            div = div/10;
            while(div>1){
                
                chaine[jj] = floor(t1/div) + '0';
                t1 = t1 - floor(t1/div)*div;
                div = div/10;
                jj++;
            }
            chaine[jj] = t1 + '0';
            idDot++;
            insertionSommets(sommets, chaine, idDot, 0, 0);
        }
    }
#line 2697 "y.tab.c"
    break;

  case 42:
#line 1051 "ANSYNyacc.y"
            {int i=0; while(finfonc[i] != -1){i++;} finfonc[i] = idDot, finfonc[i+1] = -1;}
#line 2703 "y.tab.c"
    break;

  case 43:
#line 1052 "ANSYNyacc.y"
                            {int i=0; while(opaprespar[i]!='\0'){i++;} opaprespar[i]='a';}
#line 2709 "y.tab.c"
    break;

  case 44:
#line 1053 "ANSYNyacc.y"
                          {
        nombrepar++;
    }
#line 2717 "y.tab.c"
    break;

  case 45:
#line 1058 "ANSYNyacc.y"
                          {int i=0; while(opaprespar[i]!='\0'){i++;} opaprespar[i]='a';}
#line 2723 "y.tab.c"
    break;

  case 46:
#line 1059 "ANSYNyacc.y"
                        {estfonctdansfonct = 1;
        zeroParametres = 1;
    }
#line 2731 "y.tab.c"
    break;

  case 47:
#line 1062 "ANSYNyacc.y"
                                    {estfonctdansfonct = 1; nombrepar++;
        zeroParametres = 0;
    }
#line 2739 "y.tab.c"
    break;

  case 48:
#line 1065 "ANSYNyacc.y"
                          {
        nombrepar++;
    }
#line 2747 "y.tab.c"
    break;

  case 49:
#line 1068 "ANSYNyacc.y"
          {int i=0; while(finfonc[i] != -1){i++;} finfonc[i] = idDot, finfonc[i+1] = -1;}
#line 2753 "y.tab.c"
    break;

  case 50:
#line 1071 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '+';}
#line 2759 "y.tab.c"
    break;

  case 51:
#line 1072 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '-';}
#line 2765 "y.tab.c"
    break;

  case 52:
#line 1073 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '*';}
#line 2771 "y.tab.c"
    break;

  case 53:
#line 1074 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '/';}
#line 2777 "y.tab.c"
    break;

  case 54:
#line 1075 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '&';}
#line 2783 "y.tab.c"
    break;

  case 55:
#line 1076 "ANSYNyacc.y"
            {int i=0; while(listop[i] != '\0'){i++;} listop[i] = '|';}
#line 2789 "y.tab.c"
    break;

  case 56:
#line 1077 "ANSYNyacc.y"
                {int i=0; while(listop[i] != '\0'){i++;} listop[i] = 'r';}
#line 2795 "y.tab.c"
    break;

  case 57:
#line 1078 "ANSYNyacc.y"
                {int i=0; while(listop[i] != '\0'){i++;} listop[i] = 'l';}
#line 2801 "y.tab.c"
    break;

  case 58:
#line 1081 "ANSYNyacc.y"
                                {
        char zero[2] = {'0', '\0'}; idDot++;
        insertionSommets(sommets, zero, idDot, 0, 0);
        char moins[2] = {'-', '\0'}; idDot++;
        insertionSommets(sommets, moins, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, idDot-2);
    }
#line 2814 "y.tab.c"
    break;

  case 60:
#line 1092 "ANSYNyacc.y"
                                                            {
        int j=0; while(enregistrer[j] != -1){j++;}
        if (opaprespar[0] != '\0'){
            int oo=0; while(opaprespar[oo] != '\0'){oo++;} opaprespar[oo-1] = '\0';
            idDot++;
            int i=0; while(listop[i]!='\0'){i++;}
            char oper[3] = {listop[i-1], '\0'};
            if (listop[i-1] == 'r'){
                oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
            }
            if (listop[i-1] == 'l'){
                oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
            }
            listop[i-1] = '\0';
            insertionSommets(sommets, oper, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, enregistrer[j-1]);
        }
        else{
            idDot++;
            char vide[1] = {'\0'};
            insertionSommets(sommets, vide, idDot, 0, 0);    // todo effacer à la fin
            insertionArretes(arretes, idDot, enregistrer[j-1]);
        }
        enregistrer[j-1] = -1;
    }
#line 2845 "y.tab.c"
    break;

  case 61:
#line 1118 "ANSYNyacc.y"
                                              {           // fonction dans appel de fonction, à ameliorer
        if (estfonctdansfonct == 1){
            estfonctdansfonct = 0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int n;
            n = DeclarationFonction(listfonctions, nom);
            if (n == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            n = NombreParametreFonction(listfonctions, nom);
            nombrepar = nombrepar - n;
            int ret = AfficheFonctionReturn(listfonctions, nom);
            if (ret == 0){
                printf("la fonction %s ne renvoi pas de int, donc ne peut pas être un paramètre\n", nom);
                yyerror();
            }

            if (zeroParametres == 1){
                idDot++;
                insertionSommets(sommets, nom, idDot, 5, 0);
            }
            else{
                
                idDot++;
                insertionSommets(sommets, nom, idDot, 5, 0);
                int k=0;
                int kk=0; while(finfonc[kk] != -1){kk++;}
                while(parametresDot[k] <= finfonc[kk-1] && parametresDot[k] != -1){
                    insertionArretes(arretes, idDot, parametresDot[k]);
                    k++;
                }
                int k2 = 0;
                while(parametresDot[k] != -1){
                    parametresDot[k2] = parametresDot[k];
                    k++; k2++;
                }
                while(parametresDot[k2] != -1){
                    parametresDot[k2] = -1;
                    k2++;
                }
                finfonc[kk-1] = -1;

            }
        }
        else{
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int n;
            n = DeclarationVariable(block, nom);
            if (n == 0){
                ajouterDansTableau(declarationblock, nom);
            }
            if (n == 2){
                printf("les fonctions n'acceptent pas les tableaux en paramètre, fonction: %s\n", nom);
                yyerror();
            }

            if (opaprespar[0] != '\0'){
                int x=0; while(opaprespar[x]!='\0'){x++;} opaprespar[x-1] = '\0';
                idDot++;
                insertionSommets(sommets, nom, idDot, 0, 0);
                idDot++;
                int i=0; while(listop[i]!='\0'){i++;}
                char oper[3] = {listop[i-1], '\0'};
                if (listop[i-1] == 'r'){
                    oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
                }
                if (listop[i-1] == 'l'){
                    oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
                }
                listop[i-1] = '\0';
                insertionSommets(sommets, oper, idDot, 0, 0);
                insertionArretes(arretes, idDot, idDot-2);
                insertionArretes(arretes, idDot, idDot-1);
            }
            else{
                idDot++;
                insertionSommets(sommets, nom, idDot, 0, 0);
            }
        }
    }
#line 2931 "y.tab.c"
    break;

  case 62:
#line 1199 "ANSYNyacc.y"
                                {
        if (opaprespar[0] != '\0'){
            int x=0; while(opaprespar[x]!='\0'){x++;} opaprespar[x-1] = '\0';
            int t1 = (yyvsp[-1].val);
            int div = 10;
            int jj = 0;
            char chaine[10] = {'0', '\0'};
            while(t1/div >= 1){
                div = div * 10;
            }
            div = div/10;
            while(div>1){
                
                chaine[jj] = floor(t1/div) + '0';
                t1 = t1 - floor(t1/div)*div;
                div = div/10;
                jj++;
            }
            chaine[jj] = t1 + '0';
            idDot++;
            insertionSommets(sommets, chaine, idDot, 0, 0);
            idDot++;
            int i=0; while(listop[i]!='\0'){i++;}
            char oper[3] = {listop[i-1], '\0'};
            if (listop[i-1] == 'r'){
                oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
            }
            if (listop[i-1] == 'l'){
                oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
            }
            listop[i-1] = '\0';
            insertionSommets(sommets, oper, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-2);
            insertionArretes(arretes, idDot, idDot-1);
        }
        else{
            int t1 = (yyvsp[-1].val);
            int div = 10;
            int jj = 0;
            char chaine[10] = {'0', '\0'};
            while(t1/div >= 1){
                div = div * 10;
            }
            div = div/10;
            while(div>1){
                
                chaine[jj] = floor(t1/div) + '0';
                t1 = t1 - floor(t1/div)*div;
                div = div/10;
                jj++;
            }
            chaine[jj] = t1 + '0';
            idDot++;
            insertionSommets(sommets, chaine, idDot, 0, 0);
        }
    }
#line 2992 "y.tab.c"
    break;

  case 64:
#line 1258 "ANSYNyacc.y"
                                        {int i=0; while(opaprespar[i]!='\0'){i++;} opaprespar[i]='a';}
#line 2998 "y.tab.c"
    break;

  case 66:
#line 1262 "ANSYNyacc.y"
                                        {int i=0; while(opaprespar[i]!='\0'){i++;} opaprespar[i]='a';}
#line 3004 "y.tab.c"
    break;

  case 67:
#line 1263 "ANSYNyacc.y"
                                    {estfonctdansfonct = 1; zeroParametres = 1;}
#line 3010 "y.tab.c"
    break;

  case 68:
#line 1264 "ANSYNyacc.y"
                                                {estfonctdansfonct = 1; nombrepar++; zeroParametres = 0;}
#line 3016 "y.tab.c"
    break;

  case 69:
#line 1268 "ANSYNyacc.y"
                            {
        idDot++;
        char moin[2] = {'-', '\0'};
        char zero[2] = {'0', '\0'};
        insertionSommets(sommets, zero, idDot, 0, 0);
        idDot++;
        insertionSommets(sommets, moin, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, idDot-2);
    }
#line 3031 "y.tab.c"
    break;

  case 71:
#line 1281 "ANSYNyacc.y"
        {int i=0; while(hautaffecta[i]!=0){i++;} hautaffecta[i] = idDot; hautaffecta[i+1] = 0;}
#line 3037 "y.tab.c"
    break;

  case 72:
#line 1284 "ANSYNyacc.y"
                                                       {
        idDot++;    // l'opperateur
        int i=0; while(listop[i]!='\0'){i++;}
        char oper[3] = {listop[i-1], '\0'};
        if (listop[i-1] == 'r'){
            oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
        }
        if (listop[i-1] == 'l'){
            oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
        }
        listop[i-1] = '\0';
        insertionSommets(sommets, oper, idDot, 0, 0);

        insertionArretes(arretes, idDot, idDot-1);  // celui de droite
        int j=0; while(hautaffecta[j]!=0){j++;}
        insertionArretes(arretes, idDot, hautaffecta[j-1]);
        hautaffecta[j-1] = 0;

        
    }
#line 3062 "y.tab.c"
    break;

  case 74:
#line 1305 "ANSYNyacc.y"
                                        {
        int t1 = (yyvsp[-2].val);
        int div = 10;
        int jj = 0;
        char chaine[10] = {'0', '\0'};
        while(t1/div >= 1){
            div = div * 10;
        }
        div = div/10;
        while(div>1){
            
            chaine[jj] = floor(t1/div) + '0';
            t1 = t1 - floor(t1/div)*div;
            div = div/10;
            jj++;
        }
        chaine[jj] = t1 + '0';
        idDot++;
        insertionSommets(sommets, chaine, idDot, 0, 0);
        idDot++;
        int i=0; while(listop[i]!='\0'){i++;}
        char oper[3] = {listop[i-1], '\0'};
        if (listop[i-1] == 'r'){
            oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
        }
        if (listop[i-1] == 'l'){
            oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
        }
        listop[i-1] = '\0';
        insertionSommets(sommets, oper, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-2);
        insertionArretes(arretes, idDot, idDot-1);
        
    }
#line 3101 "y.tab.c"
    break;

  case 75:
#line 1339 "ANSYNyacc.y"
                {
        int t1 = (yyvsp[0].val);
        int div = 10;
        int jj = 0;
        char chaine[10] = {'0', '\0'};
        while(t1/div >= 1){
            div = div * 10;
        }
        div = div/10;
        while(div>1){
            
            chaine[jj] = floor(t1/div) + '0';
            t1 = t1 - floor(t1/div)*div;
            div = div/10;
            jj++;
        }
        chaine[jj] = t1 + '0';
        idDot++;
        insertionSommets(sommets, chaine, idDot, 0, 0);
        
    }
#line 3127 "y.tab.c"
    break;

  case 76:
#line 1360 "ANSYNyacc.y"
                           {
        if (esttableauaff == 1){
            esttableauaff =0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);
            if (dec == 0){
                printf("tableau: %s non declaré\n", nom);
                yyerror();
            }
            if (dec == 1){
                printf("%s n'est pas un tableau\n", nom);
                yyerror();
            }
            int i = 0; int j = 0;
            while(nom[i] != '\0'){
                stockertabaff[i]=nom[i]; i++;
            }
            while(stockertabaff2[j] != '\0'){
                stockertabaff[i] = stockertabaff2[j]; i++; j++;
            }

            dec = ControleTailleTableauBlocks(block, stockertabaff);
            if (dec == 0){
                printf("erreur de segmentation avec le tableau: %s\n");
                yyerror();
            }
            vider(stockertabaff);

            int aoper = 0;
            if (opaprestab[0] != '\0'){   //si on fait une operation après le tableau
                aoper = idDot;
                int m=0; while(opaprestab[m] != '\0'){m++;} opaprestab[m-1] = '\0';
            }

            idDot++;
            insertionSommets(sommets2, nom, idDot, 0, 0);
            int debut = idDot;
            char stockeraffpourDot[7];
            i=0; j=0;
            while(stockertabaff2[i] != '\0'){
                j=0;
                vider(stockeraffpourDot);
                i++;
                while(stockertabaff2[i] != ']'){
                    stockeraffpourDot[j] = stockertabaff2[i];
                    i++; j++;
                }
                i++;
                idDot++;
                if (stockeraffpourDot[0] == '\0'){stockeraffpourDot[0] = '0';}   //si = 0;
                insertionSommets(sommets2, stockeraffpourDot, idDot, 0, 0);
            }
            ViderPileSommets2();
            idDot++;
            char tabl[4] = {'T', 'A', 'B', '\0'};
            insertionSommets(sommets, tabl, idDot, 0, 0);
            while(debut < idDot){
                insertionArretes(arretes, idDot, debut);
                debut++;
            }
            if (aoper != 0){    //operation après tableau, suite
                idDot++;
                int i=0; while(listop[i]!='\0'){i++;}
                char oper[3] = {listop[i-1], '\0'};
                if (listop[i-1] == 'r'){
                    oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
                }
                if (listop[i-1] == 'l'){
                    oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
                }
                listop[i-1] = '\0';
                insertionSommets(sommets, oper, idDot, 0, 0);
                insertionArretes(arretes, idDot, aoper);
                insertionArretes(arretes, idDot, idDot-1);
            }

            vider(stockertabaff2);
        }
        if (estfonction == 1){
            estfonction = 0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationFonction(listfonctions, nom);
            if (dec == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            int n;
            n = NombreParametreFonction(listfonctions, nom);
            if (nombrepar != n){
                printf("nombre de paramètres incorrecte pour la fonction: %s\n", nom);
                yyerror();
            }
            nombrepar = 0;

            idDot++;
            insertionSommets(sommets, nom, idDot, 5, 0);
            int k=0;
            while(parametresDot[k] != -1){
                insertionArretes(arretes, idDot, parametresDot[k]);
                parametresDot[k] = -1;
                k++;
            }
            k=0; while(finfonc[k] != -1){k++;}
            finfonc[k-1] = -1;
        }
    }
#line 3238 "y.tab.c"
    break;

  case 77:
#line 1466 "ANSYNyacc.y"
                                                {
        char nom[50]; int cop = 0; while((yyvsp[-2].name)[cop] != '\0'){nom[cop]=(yyvsp[-2].name)[cop];cop++;}; nom[cop]='\0';
        int dec;
        dec = DeclarationVariable(block, nom);
        if (dec == 0){
            ajouterDansTableau(declarationblock, nom);
        }

        idDot++;
        insertionSommets(sommets, nom, idDot, 0, 0);
        idDot++;
        int i=0; while(listop[i]!='\0'){i++;}
        char oper[3] = {listop[i-1], '\0'};
        if (listop[i-1] == 'r'){
            oper[0] = '>'; oper[1] = '>'; oper[2] = '\0';
        }
        if (listop[i-1] == 'l'){
            oper[0] = '<'; oper[1] = '<'; oper[2] = '\0';
        }
        listop[i-1] = '\0';
        insertionSommets(sommets, oper, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-2);
        insertionArretes(arretes, idDot, idDot-1);
    }
#line 3267 "y.tab.c"
    break;

  case 78:
#line 1490 "ANSYNyacc.y"
                        {
        char nom[50]; int cop = 0; while((yyvsp[0].name)[cop] != '\0'){nom[cop]=(yyvsp[0].name)[cop];cop++;}; nom[cop]='\0';
        int dec;
        dec = DeclarationVariable(block, nom);
        if (dec == 0){
            ajouterDansTableau(declarationblock, nom);
        }
        idDot++;
        insertionSommets(sommets, nom, idDot, 0, 0);
    }
#line 3282 "y.tab.c"
    break;

  case 79:
#line 1502 "ANSYNyacc.y"
                            {
        esttableauaff = 1;
        int i=0;
        while(stockertabaff[i] != '\0'){ i++;};
        stockertabaff[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertabaff[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertabaff[i] = ']', i++;
        i =0; int j = 0; int k = 0;            //le tableau est à l'envers, donc on le met à l'endroit
        while(stockertabaff[i] != '\0'){i++;}
        j = i-2;
        while(i>0){
            while(stockertabaff[i] != '['){
                i--;
            }
            stockertabaff2[k] = '['; k++;
            while(stockertabaff[j] != '['){
                stockertabaff2[k] = stockertabaff[j]; k++; j--;
            }
            stockertabaff2[k] = ']'; k++;
            i--;
            j = i-1;
        }
        vider(stockertabaff);

    }
#line 3321 "y.tab.c"
    break;

  case 80:
#line 1537 "ANSYNyacc.y"
                        {
        esttableauaff = 1;
        int i=0;
        stockertabaff[i] = '['; i++;
        int nombre = (yyvsp[-1].val);
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertabaff[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertabaff[i] = ']';
        i =0; int j = 0; int k = 0;            //le tableau est à l'envers, donc on le met à l'endroit
        while(stockertabaff[i] != '\0'){i++;}
        j = i-2;
        while(i>0){
            while(stockertabaff[i] != '['){
                i--;
            }
            stockertabaff2[k] = '['; k++;
            while(stockertabaff[j] != '['){
                stockertabaff2[k] = stockertabaff[j]; k++; j--;
            }
            stockertabaff2[k] = ']'; k++;
            i--;
            j = i-1;
        }
        vider(stockertabaff);

    }
#line 3359 "y.tab.c"
    break;

  case 81:
#line 1570 "ANSYNyacc.y"
                                         {
        estfonction = 1;
    }
#line 3367 "y.tab.c"
    break;

  case 82:
#line 1573 "ANSYNyacc.y"
                {
        estfonction = 1;
    }
#line 3375 "y.tab.c"
    break;

  case 83:
#line 1576 "ANSYNyacc.y"
                                                        {
        estfonction = 1;
        nombrepar++;
    }
#line 3384 "y.tab.c"
    break;

  case 84:
#line 1580 "ANSYNyacc.y"
                            {
        estfonction = 1;
        nombrepar++;


    }
#line 3395 "y.tab.c"
    break;

  case 85:
#line 1589 "ANSYNyacc.y"
                            {
        int i=0;
        while(stockertabaff[i] != '\0'){ i++;};
        stockertabaff[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertabaff[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertabaff[i] = ']', i++;
    }
#line 3417 "y.tab.c"
    break;

  case 86:
#line 1607 "ANSYNyacc.y"
                                    {
        int i=0; while(opaprestab[i] != '\0'){i++;} opaprestab[i] = 'a';
    }
#line 3425 "y.tab.c"
    break;

  case 87:
#line 1610 "ANSYNyacc.y"
                       {
        int i=0;
        while(stockertabaff[i] != '\0'){ i++;};
        stockertabaff[i] = '['; i++;
        int nombre = (yyvsp[-1].val);
        char tabintermed[10];
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertabaff[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertabaff[i] = ']', i++;
    }
#line 3447 "y.tab.c"
    break;

  case 88:
#line 1629 "ANSYNyacc.y"
                        {
        if (estvariable == 1){
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);
            if (dec == 0){
                ajouterDansTableau(declarationblock, nom);
            }
            estvariable = 0;

            idDot++;
            insertionSommets(sommets, nom, idDot, 0, 0);
            idDot++;
            char egal[3] = {':', '=', '\0'};
            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, idDot-2);
            insertionId(blocksarr, idDot);
        }
        if (esttableau == 1){
            esttableau =0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);
            if (dec == 0){
                printf("tableau: %s non declaré\n", nom);
                yyerror();
            }
            if (dec == 1){
                printf("%s n'est pas un tableau\n", nom);
                yyerror();
            }
            int i = 0; int j = 0;
            while(nom[i] != '\0'){
                stockertab[i]=nom[i]; i++;
            }
            while(stockertab2[j] != '\0'){
                stockertab[i] = stockertab2[j]; i++; j++;
            }
            //vider(stockertab2);
            dec = ControleTailleTableauBlocks(block, stockertab);
            if (dec == 0){
                printf("erreur de segmentation avec le tableau: %s\n", nom);
                yyerror();
            }
            vider(stockertab);

            int enregistreraff = idDot;
            idDot++;
            insertionSommets(sommets2, nom, idDot, 0, 0);
            int debut = idDot;
            char stockeraffpourDot[7];
            i=0; j=0;
            while(stockertab2[i] != '\0'){
                j=0;
                vider(stockeraffpourDot);
                i++;
                while(stockertab2[i] != ']'){
                    stockeraffpourDot[j] = stockertab2[i];
                    i++; j++;
                }
                i++;
                idDot++;
                if (stockeraffpourDot[0] == '\0'){stockeraffpourDot[0] = '0';}   //si = 0;
                insertionSommets(sommets2, stockeraffpourDot, idDot, 0, 0);
            }
            ViderPileSommets2();
            idDot++;
            char tabl[4] = {'T', 'A', 'B', '\0'};
            insertionSommets(sommets, tabl, idDot, 0, 0);
            while(debut < idDot){
                insertionArretes(arretes, idDot, debut);
                debut++;
            }
            vider(stockertab2);

            idDot++;
            char egal[3] = {':', '=', '\0'};
            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, enregistreraff);
            insertionId(blocksarr, idDot);
        }
        if (estfonction == 1){
            estfonction = 0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationFonction(listfonctions, nom);
            if (dec == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            int n;
            n = NombreParametreFonction(listfonctions, nom);
            if (nombrepar != n){
                printf("nombre de paramètres incorrecte pour la fonction: %s\n", nom);
                yyerror();
            }
            nombrepar = 0;

            idDot++;
            insertionSommets(sommets, nom, idDot, 5, 0);
            int k=0;
            while(parametresDot[k] != -1){
                insertionArretes(arretes, idDot, parametresDot[k]);
                parametresDot[k] = -1;
                k++;
            }
            k=0; while(finfonc[k] != -1){k++;}
            finfonc[k-1] = -1;
            insertionId(blocksarr, idDot);
        }
        
    }
#line 3563 "y.tab.c"
    break;

  case 89:
#line 1740 "ANSYNyacc.y"
                                        {
        char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
        int dec = DeclarationVariableBlockCourrant(block, nom);
        if (dec == 1 || dec == 2){
            printf("variable: %s déjà declaré\n", nom);
            yyerror();
        }
        ajoutervariable(block, nom);
    }
#line 3577 "y.tab.c"
    break;

  case 90:
#line 1749 "ANSYNyacc.y"
                                {
        if (stockertab2[0] != '\0'){        // c'est un tab
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int i = 0; int j = 0;
            while(nom[i] != '\0'){
                stockertab[i]=nom[i]; i++;
            }
            while(stockertab2[j] != '\0'){
                stockertab[i] = stockertab2[j]; i++; j++;
            }
            vider(stockertab2);
            int dec = DeclarationVariableBlockCourrant(block, stockertab);
            if (dec == 2){
                printf("tableau: %s déjà declaré\n", nom);
                yyerror();
            }
            if (dec == 1){
                printf("nom: %s déjà possédé par une variable\n", nom);
                yyerror();
            }
            ajoutervariable(block, stockertab);
            vider(stockertab);
        }
        if (estvariable == 1){      // c'est un variable
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariableBlockCourrant(block, nom);
            if (dec == 1 || dec == 2){
                printf("variable: %s déjà declaré\n", nom);
                yyerror();
            }
            ajoutervariable(block, nom);
            estvariable = 0;
        }
        
    }
#line 3617 "y.tab.c"
    break;

  case 91:
#line 1784 "ANSYNyacc.y"
                        {
        insertionId(blocksarr, idDot);
    }
#line 3625 "y.tab.c"
    break;

  case 92:
#line 1787 "ANSYNyacc.y"
                {
        idDot++;
        char break_[6] ={ 'B', 'R', 'E', 'A', 'K', '\0'};
        insertionSommets(sommets, break_, idDot, 4, 0);
        insertionId(blocksarr, idDot);
    }
#line 3636 "y.tab.c"
    break;

  case 95:
#line 1795 "ANSYNyacc.y"
             {
        insertionSommetBlocksArr(blocksarr, enrif);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        insertionId(blocksarr, idDot);
    }
#line 3647 "y.tab.c"
    break;

  case 96:
#line 1801 "ANSYNyacc.y"
                              {
        insertionSommetBlocksArr(blocksarr, enrif2);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        insertionSommetBlocksArr(blocksarr, enrif3);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        insertionId(blocksarr, enrif3);
    }
#line 3661 "y.tab.c"
    break;

  case 98:
#line 1812 "ANSYNyacc.y"
       {enrif2 = enrif; enrif3 = idDot;}
#line 3667 "y.tab.c"
    break;

  case 99:
#line 1815 "ANSYNyacc.y"
                  {
        AjoutePoosedeReturn(block);
        idDot++;
        char return_[7] = {'R', 'E', 'T', 'U', 'R', 'N', '\0'};
        insertionSommets(sommets, return_, idDot, 2, 1);
        insertionArretes(arretes, idDot, idDot-1);
        
    }
#line 3680 "y.tab.c"
    break;

  case 100:
#line 1823 "ANSYNyacc.y"
            {
        idDot++;
        char return_[7] = {'R', 'E', 'T', 'U', 'R', 'N', '\0'};
        insertionSommets(sommets, return_, idDot, 2, 1);
        
    }
#line 3691 "y.tab.c"
    break;

  case 102:
#line 1832 "ANSYNyacc.y"
                                {
        char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
        int dec = DeclarationVariableBlockCourrant(block, nom);
        if (dec == 1 || dec == 2){
            printf("variable: %s déjà declaré\n", nom);
            yyerror();
        }
        ajoutervariable(block, nom); 
    }
#line 3705 "y.tab.c"
    break;

  case 103:
#line 1843 "ANSYNyacc.y"
                        {
        estvariable = 1;
    }
#line 3713 "y.tab.c"
    break;

  case 104:
#line 1846 "ANSYNyacc.y"
                                {
        int i=0;
        while(stockertab[i] != '\0'){ i++;};
        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertab[i] = ']', i++;
        i =0; int j = 0; int k = 0;            //le tableau est à l'envers, donc on le met à l'endroit
        while(stockertab[i] != '\0'){i++;}
        j = i-2;
        while(i>0){
            while(stockertab[i] != '['){
                i--;
            }
            stockertab2[k] = '['; k++;
            while(stockertab[j] != '['){
                stockertab2[k] = stockertab[j]; k++; j--;
            }
            stockertab2[k] = ']'; k++;
            i--;
            j = i-1;
        }
        vider(stockertab);
    }
#line 3751 "y.tab.c"
    break;

  case 106:
#line 1882 "ANSYNyacc.y"
                                            {
        char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
        int dec = DeclarationVariableBlockCourrant(block, nom);
        if (dec == 1 || dec == 2){
            printf("variable: %s déjà declaré\n", nom);
            yyerror();
        }
        ajoutervariable(block, nom);
    }
#line 3765 "y.tab.c"
    break;

  case 108:
#line 1894 "ANSYNyacc.y"
                                {
        int i=0;
        while(stockertab[i] != '\0'){ i++;};
        stockertab[i] = '['; i++;
        int nombre = (yyvsp[-2].val);
        char tabintermed[10];
        int n2;
        char n3;
        while(nombre > 0){
            n2 = nombre%10;
            n3 = n2 + '0';
            stockertab[i] = n3; i++;
            nombre = nombre - n2;
            nombre = nombre / 10;
        }
        stockertab[i] = ']', i++;
    }
#line 3787 "y.tab.c"
    break;

  case 109:
#line 1912 "ANSYNyacc.y"
            {enrfor1 = idDot;}
#line 3793 "y.tab.c"
    break;

  case 110:
#line 1913 "ANSYNyacc.y"
            {enrfor2 = idDot;}
#line 3799 "y.tab.c"
    break;

  case 111:
#line 1914 "ANSYNyacc.y"
            {enrfor3 = idDot;}
#line 3805 "y.tab.c"
    break;

  case 112:
#line 1916 "ANSYNyacc.y"
                                                                                                                                    {
        char nom[50]; int cop = 0; while((yyvsp[-15].name)[cop] != '\0'){nom[cop]=(yyvsp[-15].name)[cop];cop++;}; nom[cop]='\0';
        int dec = DeclarationVariable(block, nom);
        if (dec == 0){
            ajouterDansTableau(declarationblock, nom);
        }
        char nom2[50]; int cop2 = 0; while((yyvsp[-10].name)[cop2] != '\0'){nom2[cop2]=(yyvsp[-10].name)[cop2];cop2++;}; nom2[cop2]='\0';
        dec = DeclarationVariable(block, nom2);
        if (dec == 0){
            ajouterDansTableau(declarationblock, nom2);
        }
        char nom3[50]; int cop3 = 0; while((yyvsp[-5].name)[cop3] != '\0'){nom3[cop3]=(yyvsp[-5].name)[cop3];cop3++;}; nom3[cop3]='\0';
        dec = DeclarationVariable(block, nom3);
        if (dec == 0){
            ajouterDansTableau(declarationblock, nom3);
        }

        char eg[3] = {':', '=', '\0'};
        idDot++;
        insertionSommets(sommets, nom, idDot, 0, 0);
        idDot++;
        insertionSommets(sommets2, eg, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, enrfor1);

        idDot++;
        insertionSommets(sommets, nom2, idDot, 0, 0);
        idDot++;    // le comparateur
        int i=0; while(listcomp[i]!='\0'){i++;}
        char compar[3] = {listcomp[i-1], '\0'};
        if (listcomp[i-1] == 'l'){
            compar[0] = '<'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'g'){
            compar[0] = '>'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'e'){
            compar[0] = '='; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'n'){
            compar[0] = '!'; compar[1] = '='; compar[2] = '\0';
        }
        listcomp[i-1] = '\0';
        insertionSommets(sommets2, compar, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, enrfor2);


        idDot++;
        insertionSommets(sommets, nom3, idDot, 0, 0);
        idDot++;
        insertionSommets(sommets2, eg, idDot, 0, 0);
        insertionArretes(arretes, idDot, idDot-1);
        insertionArretes(arretes, idDot, enrfor3);
        
        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 0){
            ViderPileSommets2();
            boucleblock[j-1] = -1;
            idDot++;
            char nomfor[4] = {'F', 'O', 'R', '\0'};
            insertionSommets(sommets, nomfor, idDot, 0, 0);

            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            insertionId(blocksarr, idDot);

            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, idDot-3);
            insertionArretes(arretes, idDot, idDot-5);
        } else{     // si block
            boucleblock[j-1] = -1;
            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            idDot++;
            char nomfor[4] = {'F', 'O', 'R', '\0'};
            insertionSommets(sommets, nomfor, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);

            insertionArretes(arretes, idDot, idDot-2);
            insertionArretes(arretes, idDot, idDot-4);
            insertionArretes(arretes, idDot, idDot-6);
            insertionId(blocksarr, idDot);
            ViderPileSommets2();
        }
    }
#line 3901 "y.tab.c"
    break;

  case 113:
#line 2009 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = '<';}
#line 3907 "y.tab.c"
    break;

  case 114:
#line 2010 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = '>';}
#line 3913 "y.tab.c"
    break;

  case 115:
#line 2011 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = 'l';}
#line 3919 "y.tab.c"
    break;

  case 116:
#line 2012 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = 'g';}
#line 3925 "y.tab.c"
    break;

  case 117:
#line 2013 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = 'e';}
#line 3931 "y.tab.c"
    break;

  case 118:
#line 2014 "ANSYNyacc.y"
            {int i=0; while(listcomp[i] != '\0'){i++;} listcomp[i] = 'n';}
#line 3937 "y.tab.c"
    break;

  case 119:
#line 2017 "ANSYNyacc.y"
                  {
        int ret = AffichePossedeReturn(block);  //lorsqu'on quitte un boucle et que son possede return est à 1
        suppressionBlock(block);                //on met egalement à 1 dans son block (fonction)
        if (ret == 1){
            AjoutePoosedeReturn(block);
        }
        int i=0; while(boucleblock[i] != -1){i++;} boucleblock[i] = 1; boucleblock[i+1] = -1; 
    
    }
#line 3951 "y.tab.c"
    break;

  case 120:
#line 2026 "ANSYNyacc.y"
                    {
        insertionBlocksArr(blocksarr, 0);
        idDot++;
        char break_[6] = {'B', 'R', 'E', 'A', 'K', '\0'};
        insertionSommets(sommets, break_, idDot, 4, 0);
        insertionId(blocksarr, idDot);
        int i=0; while(boucleblock[i] != -1){i++;} boucleblock[i] = 0; boucleblock[i+1] = -1;

    }
#line 3965 "y.tab.c"
    break;

  case 121:
#line 2035 "ANSYNyacc.y"
                        {AjoutePoosedeReturn(block);
        insertionBlocksArr(blocksarr, 0);
        insertionId(blocksarr, idDot);
        int i=0; while(boucleblock[i] != -1){i++;} boucleblock[i] = 0; boucleblock[i+1] = -1;
    }
#line 3975 "y.tab.c"
    break;

  case 122:
#line 2040 "ANSYNyacc.y"
                            {
        if (estvariable == 1){
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);
            if (dec == 0){
                printf("variable: %s non declaré\n", nom);
                yyerror();
            }
            estvariable = 0;

            insertionBlocksArr(blocksarr, 0);
            idDot++;
            insertionSommets(sommets, nom, idDot, 0, 0);
            idDot++;
            char egal[3] = {':', '=', '\0'};
            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, idDot-2);
            insertionId(blocksarr, idDot);
        }
        if (esttableau == 1){
            esttableau =0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationVariable(block, nom);
            if (dec == 0){
                printf("tableau: %s non declaré\n", nom);
                yyerror();
            }
            if (dec == 1){
                printf("%s n'est pas un tableau\n", nom);
                yyerror();
            }
            int i = 0; int j = 0;
            while(nom[i] != '\0'){
                stockertab[i]=nom[i]; i++;
            }
            while(stockertab2[j] != '\0'){
                stockertab[i] = stockertab2[j]; i++; j++;
            }
            
            dec = ControleTailleTableauBlocks(block, stockertab);
            if (dec == 0){
                printf("erreur de segmentation avec le tableau: %s\n", nom);
                yyerror();
            }
            vider(stockertab);

            insertionBlocksArr(blocksarr, 0);
            int enregistreraff = idDot;
            idDot++;
            insertionSommets(sommets2, nom, idDot, 0, 0);
            int debut = idDot;
            char stockeraffpourDot[7];
            i=0; j=0;
            while(stockertab2[i] != '\0'){
                j=0;
                vider(stockeraffpourDot);
                i++;
                while(stockertab2[i] != ']'){
                    stockeraffpourDot[j] = stockertab2[i];
                    i++; j++;
                }
                i++;
                idDot++;
                if (stockeraffpourDot[0] == '\0'){stockeraffpourDot[0] = '0';}   //si = 0;
                insertionSommets(sommets2, stockeraffpourDot, idDot, 0, 0);
            }
            ViderPileSommets2();
            idDot++;
            char tabl[4] = {'T', 'A', 'B', '\0'};
            insertionSommets(sommets, tabl, idDot, 0, 0);
            while(debut < idDot){
                insertionArretes(arretes, idDot, debut);
                debut++;
            }
            vider(stockertab2);

            idDot++;
            char egal[3] = {':', '=', '\0'};
            insertionSommets(sommets, egal, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, enregistreraff);
            insertionId(blocksarr, idDot);

        }
        if (estfonction == 1){
            estfonction = 0;
            char nom[50]; int cop = 0; while((yyvsp[-1].name)[cop] != '\0'){nom[cop]=(yyvsp[-1].name)[cop];cop++;}; nom[cop]='\0';
            int dec = DeclarationFonction(listfonctions, nom);
            if (dec == 0){
                printf("fonction: %s non declaré\n", nom);
                yyerror();
            }
            int n;
            n = NombreParametreFonction(listfonctions, nom);
            if (nombrepar != n){
                printf("nombre de paramètres incorrecte pour la fonction: %s\n", nom);
                yyerror();
            }
            nombrepar = 0;

            insertionBlocksArr(blocksarr, 0);
            idDot++;
            insertionSommets(sommets, nom, idDot, 5, 0);
            int k=0;
            while(parametresDot[k] != -1){
                insertionArretes(arretes, idDot, parametresDot[k]);
                parametresDot[k] = -1;
                k++;
            }
            k=0; while(finfonc[k] != -1){k++;}
            finfonc[k-1] = -1;
            insertionId(blocksarr, idDot);
        }
        int i=0; while(boucleblock[i] != -1){i++;} boucleblock[i] = 0; boucleblock[i+1] = -1;
    }
#line 4096 "y.tab.c"
    break;

  case 123:
#line 2157 "ANSYNyacc.y"
           {enrwhile1 = idDot;}
#line 4102 "y.tab.c"
    break;

  case 124:
#line 2158 "ANSYNyacc.y"
           {enrwhile2 = idDot;}
#line 4108 "y.tab.c"
    break;

  case 125:
#line 2160 "ANSYNyacc.y"
                                                             {
        idDot++;    // le comparateur
        int i=0; while(listcomp[i]!='\0'){i++;}
        char compar[3] = {listcomp[i-1], '\0'};
        if (listcomp[i-1] == 'l'){
            compar[0] = '<'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'g'){
            compar[0] = '>'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'e'){
            compar[0] = '='; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'n'){
            compar[0] = '!'; compar[1] = '='; compar[2] = '\0';
        }
        listcomp[i-1] = '\0';
        insertionSommets(sommets2, compar, idDot, 0, 0);
        insertionArretes(arretes, idDot, enrwhile1);
        insertionArretes(arretes, idDot, enrwhile2);

        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 0){
            ViderPileSommets2();
            boucleblock[j-1] = -1;
            idDot++;
            char nomwhile[6] = {'W', 'H', 'I', 'L', 'E', '\0'};
            insertionSommets(sommets, nomwhile, idDot, 0, 0);

            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            insertionId(blocksarr, idDot);

            insertionArretes(arretes, idDot, idDot-1);
        }
        else{
            boucleblock[j-1] = -1;
            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            idDot++;
            ViderPileSommets2();
            char nomwhile[6] = {'W', 'H', 'I', 'L', 'E', '\0'};
            insertionSommets(sommets, nomwhile, idDot, 0, 0);
            insertionArretes(arretes, idDot, idDot-1);

            insertionArretes(arretes, idDot, idDot-2);
            insertionId(blocksarr, idDot);
        }
    }
#line 4167 "y.tab.c"
    break;

  case 126:
#line 2215 "ANSYNyacc.y"
         {enraff1 = idDot; EneleverPileSommet();}
#line 4173 "y.tab.c"
    break;

  case 127:
#line 2216 "ANSYNyacc.y"
         {enraff2 = idDot; ViderPileSommets2();}
#line 4179 "y.tab.c"
    break;

  case 129:
#line 2218 "ANSYNyacc.y"
                                                      {
        idDot++;    // le comparateur
        int i=0; while(listcomp[i]!='\0'){i++;}
        char compar[3] = {listcomp[i-1], '\0'};
        if (listcomp[i-1] == 'l'){
            compar[0] = '<'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'g'){
            compar[0] = '>'; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'e'){
            compar[0] = '='; compar[1] = '='; compar[2] = '\0';
        }
        if (listcomp[i-1] == 'n'){
            compar[0] = '!'; compar[1] = '='; compar[2] = '\0';
        }
        listcomp[i-1] = '\0';
        insertionSommets(sommets, compar, idDot, 0, 0);

        insertionArretes(arretes, idDot, enraff1);
        insertionArretes(arretes, idDot, enraff2);


        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 1){
            boucleblock[j-1] = -1;

            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            idDot++;
            char if_[3] = {'I', 'F', '\0'};
            insertionSommets(sommets, if_, idDot, 3, 0);
            insertionArretes(arretes, idDot, idDot-1);
            insertionArretes(arretes, idDot, idDot-2);
            enrif=idDot-1;
        }
        else{
            boucleblock[j-1] = -1;
            idDot++;
            char if_[3] = {'I', 'F', '\0'};
            insertionSommets(sommets, if_, idDot, 3, 0);
            insertionArretes(arretes, idDot, idDot-1);

            enrif=idDot;
        }
    }
#line 4231 "y.tab.c"
    break;

  case 132:
#line 2270 "ANSYNyacc.y"
           {int i=0; while(enrswitch[i] != -1){enrswitch[i] = -1;i++;}; enrswitchaff = idDot;}
#line 4237 "y.tab.c"
    break;

  case 133:
#line 2272 "ANSYNyacc.y"
                                          {
        int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = enrswitchaff; enrswitch[i+1] = -1;
        idDot++;
        char nomswitch[7] = {'S', 'W', 'I', 'T', 'C', 'H', '\0'};
        insertionSommets(sommets, nomswitch, idDot, 0, 0);
        int j=0;
        while(enrswitch[j] != -1){
            insertionArretes(arretes, idDot, enrswitch[j]);
            j++;
        }
        insertionId(blocksarr, idDot);
    }
#line 4254 "y.tab.c"
    break;

  case 134:
#line 2285 "ANSYNyacc.y"
       {suppressionSommets(sommets);}
#line 4260 "y.tab.c"
    break;

  case 135:
#line 2288 "ANSYNyacc.y"
                                                  {
        int j=0; while(boucleblock[j] != -1){j++;}
        boucleblock[j-1] = -1;
        idDot++;
        char break_[6] = {'B', 'R', 'E', 'A', 'K', '\0'};
        insertionSommets(sommets, break_, idDot, 4, 0);
        insertionId(blocksarr, idDot);
        idDot++;
        char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
        insertionSommets(sommets, nomblock, idDot, 0, 0);
        insertionSommetBlocksArr(blocksarr, idDot);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = idDot; enrswitch[i+1] = -1;
    }
#line 4280 "y.tab.c"
    break;

  case 136:
#line 2303 "ANSYNyacc.y"
                                          {
        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 1){
            boucleblock[j-1] = -1;
            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = idDot; enrswitch[i+1] = -1;
        } else{
            boucleblock[j-1] = -1;
            ElemBlocksArr *actuel = blocksarr->premier;
            int s = actuel->tabids[0];
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = s; enrswitch[i+1] = -1;
        }
    }
#line 4304 "y.tab.c"
    break;

  case 137:
#line 2322 "ANSYNyacc.y"
                                {
        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 1){
            boucleblock[j-1] = -1;
            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = idDot; enrswitch[i+1] = -1;
        } else{
            boucleblock[j-1] = -1;
            ElemBlocksArr *actuel = blocksarr->premier;
            int s = actuel->tabids[0];
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = s; enrswitch[i+1] = -1;
        }
    }
#line 4328 "y.tab.c"
    break;

  case 138:
#line 2341 "ANSYNyacc.y"
                                                  {
        int j=0; while(boucleblock[j] != -1){j++;}
        boucleblock[j-1] = -1;
        idDot++;
        char break_[6] = {'B', 'R', 'E', 'A', 'K', '\0'};
        insertionSommets(sommets, break_, idDot, 4, 0);
        insertionId(blocksarr, idDot);
        idDot++;
        char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
        insertionSommets(sommets, nomblock, idDot, 0, 0);
        insertionSommetBlocksArr(blocksarr, idDot);
        creerArretes(blocksarr, arretes);
        suppressionBlocksArr(blocksarr);
        int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = idDot; enrswitch[i+1] = -1;
    }
#line 4348 "y.tab.c"
    break;

  case 139:
#line 2356 "ANSYNyacc.y"
                                       {
        int j=0; while(boucleblock[j] != -1){j++;}
        if (boucleblock[j-1] == 1){
            boucleblock[j-1] = -1;
            idDot++;
            char nomblock[5] = {'B', 'L', 'O', 'C', '\0'};
            insertionSommets(sommets, nomblock, idDot, 0, 0);
            insertionSommetBlocksArr(blocksarr, idDot);
            creerArretes(blocksarr, arretes);
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = idDot; enrswitch[i+1] = -1;
        } else{
            boucleblock[j-1] = -1;
            ElemBlocksArr *actuel = blocksarr->premier;
            int s = actuel->tabids[0];
            suppressionBlocksArr(blocksarr);
            int i=0; while(enrswitch[i] != -1){i++;} enrswitch[i] = s; enrswitch[i+1] = -1;
        }
    }
#line 4372 "y.tab.c"
    break;


#line 4376 "y.tab.c"

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
#line 2376 "ANSYNyacc.y"


Fonctions *initialisationFonctions()    
{
    Fonctions *fonctions = malloc(sizeof(*fonctions));
    ElemFonc *elemfonc = malloc(sizeof(*elemfonc));

    elemfonc->nom[0] = '\0';
    elemfonc->suivant = NULL;
    fonctions->premier = elemfonc;
    elemfonc->typereturn = 0;
    elemfonc-> parametres[0] = '\0';

    return fonctions;
}

void insertionFonction(Fonctions *liste, char nvNom[50], char nvParametres[100], int nvTypereturn)
{
    // Création du nouvel élément 
    ElemFonc *nouveau = malloc(sizeof(*nouveau));
    
    int i=0;
    while(nvNom[i] != '\0')
    {
        nouveau->nom[i] = nvNom[i];
        i++;
    }
    i=0;
    while(nvParametres[i] != '\0')
    {   
        nouveau->parametres[i] = nvParametres[i];
        i++;
    }
    nouveau->typereturn = nvTypereturn;

    // Insertion de l'élément au début de la liste 
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void insertionParametre(Fonctions *fonctions, char nvParametre[100], char NomFonction[20]) //ajoute dans le fonction 1er de la liste un parametre
{
    ElemFonc *actuel = fonctions->premier;

    while (actuel != NULL)
    {
        
        int i=0;
        while(actuel->nom[i] != '\0'){
            
            if (actuel->nom[i] != NomFonction[i]){
                break;
            }
            i++;
        }
        if (actuel->nom[i] == '\0' && NomFonction[i] == '\0'){
            i=0;
            while(actuel->parametres[i] != '\0'){
                i++;
            }
            if (i != 0){        // si pas de parametres
                actuel->parametres[i] = '/';
                i++;
            }
            while(nvParametre[i] != '\0')
            {   
                actuel->parametres[i] = nvParametre[i];
                i++;
            }
            return 0;
        }
        i=0;
        actuel = actuel->suivant;
    }
}

void afficherListeFonctions(Fonctions *fonctions)
{

    ElemFonc *actuel = fonctions->premier;

    while (actuel != NULL)
    {
        
        int i=0;
        while(actuel->nom[i] != '\0'){
            printf("%c", actuel->nom[i]);
            i++;
        }
        printf(" ");
        actuel = actuel->suivant;
    }
    printf("fin\n");
}


int DeclarationFonction(Fonctions *fonctions, char tab[100]){ // renvoi 1 si la fonction inscrit
    ElemFonc *actuel = fonctions->premier;          // dans tab existe dans fonctions (nom), 0 sinon

    while (actuel != NULL)
    {
        
        int i=0;
        while(actuel->nom[i] != '\0'){
            
            if (actuel->nom[i] != tab[i]){
                break;
            }
            i++;
        }
        if (actuel->nom[i] == '\0' && tab[i] == '\0'){
            return 1;
        }
        i=0;
        actuel = actuel->suivant;
    }
    return 0;
}

int NombreParametreFonction(Fonctions *fonctions, char NomFonction[20]){ //retourne le nombre de prametres qu'a cette fonction
    ElemFonc *actuel = fonctions->premier;
    while (actuel != NULL)
    {
        
        int i=0;
        while(actuel->nom[i] != '\0'){
            
            if (actuel->nom[i] != NomFonction[i]){
                break;
            }
            i++;
        }
        if (actuel->nom[i] == '\0' && NomFonction[i] == '\0'){      // l'a trouvé
            int nbr = 0;
            i = 0;
            while(actuel->parametres[i] != '\0'){
                nbr++;
                i++;
                while(actuel->parametres[i] != '/' && actuel->parametres[i] != '\0'){
                    i++;
                }
            }
            return nbr;

        }
        i=0;
        actuel = actuel->suivant;
    }
}






Blocks *initialisationBlocks()
{
    Blocks *blocks = malloc(sizeof(*blocks));
    ElemBlock *elemblock = malloc(sizeof(*elemblock));

    elemblock->suivant = NULL;
    blocks->premier = elemblock;
    elemblock->possedereturn = 0;
    elemblock->attendreturn = 0;
    elemblock-> variables[0] = '\0';

    return blocks;
}

void insertionBlock(Blocks *liste, char nvVariables[100], int nvPossedereturn, int nvAttendreturn)
{
    // Création du nouvel élément
    ElemBlock *nouveau = malloc(sizeof(*nouveau));
    
    int i=0;
    while(nvVariables[i] != '\0')
    {
        nouveau->variables[i] = nvVariables[i];
        i++;
    }
    nouveau->possedereturn = nvPossedereturn;
    nouveau->attendreturn = nvAttendreturn;


    // Insertion de l'élément au début de la liste 
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppressionBlock(Blocks *blocks)   // Lorsqu'on quitte un block on le supprime
{


    if (blocks->premier != NULL)
    {
        ElemBlock *aSupprimer = blocks->premier;
        ElemBlock *a = blocks->premier;
        blocks->premier = a->suivant;
        free(aSupprimer);
    }
}


DeclarationVariable(Blocks *blocks, char tab[100]){  //renvoi 1 si le variable a été declaré dans un
                                            // block, 2 si c'est un tableau, sinon 0 (si declaré nul part).
    ElemBlock *actuel = blocks->premier;
    int br = 0;
    while (actuel != NULL){
        int i=0;
        int j=0;
        while(actuel->variables[i] != '\0'){
        
            if (tab[j] == '\0'){
                if (actuel->variables[i] == '/' || actuel->variables[i] == '=' || actuel->variables[i] == '['){
                    if (actuel->variables[i] == '['){
                        return 2;
                    }
                    
                    return 1;
                }
            
            }
            if (tab[j] != actuel->variables[i]){
                j = (-1);
                while(actuel->variables[i] != '\0' && actuel->variables[i] != '/'){
                    i++;
                }
                if (actuel->variables[i] == '\0'){
                    br = 1;
                    break;
                }
            }
            i++;
            j++;
        }
        if (br == 0){ 
            if (tab[j] == '\0'){        
                return 1;
            }
            if (tab[j] == '['){        
                return 2;
            }
        }
        br = 0;
        actuel = actuel->suivant;
    }
    return 0;
}

DeclarationVariableBlockCourrant(Blocks *blocks, char tab[100]){  //renvoi 1 si le variable a été declaré dans
                                            // block actuel, 2 si c'est un tableau, sinon 0.
    ElemBlock *actuel = blocks->premier;
    int br = 0;
    int i=0;
    int j=0;
    while(actuel->variables[i] != '\0'){
    
        if (tab[j] == '\0'){
            if (actuel->variables[i] == '/' || actuel->variables[i] == '=' || actuel->variables[i] == '['){
                if (actuel->variables[i] == '['){
                    return 2;
                }
                
                return 1;
            }
        
        }
        if (tab[j] != actuel->variables[i]){
            j = (-1);
            while(actuel->variables[i] != '\0' && actuel->variables[i] != '/'){
                i++;
            }
            if (actuel->variables[i] == '\0'){
                br = 1;
                break;
            }
        }
        i++;
        j++;
    }
    if (br == 0){ 
        if (tab[j] == '\0'){        
            return 1;
        }
        if (tab[j] == '['){        
            return 2;
        }
    }
    return 0;
}

ControleTailleTableau(char tab[100], ElemBlock *actuel){           // si tab a les bonnes dimensions et si la case
                                                // qu'on essaye d'acceder existe dans le tableau on renvoi 1.
                                                // dans le block actuel!
    int i=0;
    int j=0;
    while(tab[j] != '[' && (actuel->variables[i] != '[' && actuel->variables[i] != '/' && actuel->variables[i] != '=')){    //on le trouve
    
        if (actuel->variables == '\0'){
            return 0;
        }
        if (tab[j] != actuel->variables[i]){
            j= -1;
            while(actuel->variables[i] != '\0' && actuel->variables[i] != '/'){
                i++;
            }
            if (actuel->variables[i] == '\0'){
                return 0;
            }
        }
        i++;
        j++;
    }
    if (actuel->variables[i] == '\0' || actuel->variables[i] == '=' || actuel->variables[i] == '/'){
        return 0;
    }
    while (tab[j] != '\0' && actuel->variables[i] != '\0' && actuel->variables[i] != '/'){
        i++;
        j++;    //on passe le [
        int b=1;  
        while (tab[j] != ']' && actuel->variables[i] != ']'){ // on controle que l'indice de variables >= indice de tab
            if (((int)(tab[j])) > (int)(actuel->variables[i])){
                b=0;
                break;
            }
            if (((int)(tab[j])) < (int)(actuel->variables[i])){
                break;
            }
            i++;
            j++;
        }
        int jj=0;
        int ii=0;   //compte nombre de chiffres entre les crochets des deux tableaux
        while (tab[j] != ']'){
            jj++;
            j++;
        }
        while (actuel->variables[i] != ']'){
            ii++;
            i++;
        }
        if (jj > ii){
            return 0;
        }
        if (jj == ii){
            if (b == 0){
                return 0;
            }
        }
        i++;
        j++;
    }
    if (tab[j] == '[' || actuel->variables[i] == '['){
        return 0;
    }
    return 1;
}

ControleTailleTableauBlocks(Blocks *blocks, char tab[100]){  // idem pour tous les blocks
    
    ElemBlock *actuel = blocks->premier;
    int bon = 0;
    while (actuel != NULL){
        bon = ControleTailleTableau(tab, actuel);
        if (bon == 1){
            return 1;
        }
        actuel = actuel->suivant;
    }
    return 0;
}

void afficherListeBlocks(Blocks *blocks)    // pour tester des choses
{

    ElemBlock *actuel = blocks->premier;
  
    int i=0;
    while(actuel->variables[i] != '\0'){
        printf("%c", actuel->variables[i]);
        i++;
    }
    printf(" \n");
}

void decalertableau(int cases, int depart, Blocks *blocks){   //decale variables des cases a droite a partir de depart
    ElemBlock *actuel = blocks->premier;
    int i=0;
    while( actuel->variables[i] != '\0'){
        i++;
    }
    while(i>=depart){
        actuel->variables[i+cases] = actuel->variables[i];
        i--;
    }

}

void insererMilieuTableau(Blocks *blocks, char tabainserer[10], int indice){   //insere un autre tableau dans variables de Blocks
    ElemBlock *actuel = blocks->premier;
    int taille = 0;
    while(tabainserer[taille] != '\0'){
        taille++;
    }
    decalertableau(taille, indice, blocks);
    int i=0;
    while(i<taille){
        actuel->variables[indice] = tabainserer[i];
        indice++;
        i++;
    }
}


void ajoutervariable(Blocks *blocks, char nvVariable[20]){  // ajout variable ou tableau après une declaration
    ElemBlock *actuel = blocks->premier;
    int i=0;
    while(actuel->variables[i] != '\0'){    // on accede à la fin de la liste des variables
        i++;
    }
    if (i != 0){
        actuel->variables[i] = '/';
        i++;
    }
    int j=0;
    while(nvVariable[j] != '\0'){
        actuel->variables[i] = nvVariable[j];
        i++;
        j++;
    }
    actuel->variables[i] = '\0';
}


int ControleValeurVariable(Blocks *blocks, char variable[20]){ //renvoi 1 si le variable possede un valeur, 0 sinon
    ElemBlock *actuel = blocks->premier;
    int i=0;
    int j=0;
    while ((actuel->variables[i] != '/' && actuel->variables[i] != '\0' && actuel->variables[i] != '=') || variable[j] != '\0'){
        if (actuel->variables[i] != variable[j]){
            j= -1;
            while (actuel->variables[i] != '/'){
                i++;
            }

        }
        j++;
        i++;
    }
    if (actuel->variables[i] == '='){
        return 1;
    }
    return 0;
}

void AjoutePoosedeReturn(Blocks *blocks){    // met possedereturn du block courant à 1
    ElemBlock *actuel = blocks->premier;
    actuel->possedereturn = 1;
}

int AfficheAttendReturn(Blocks *blocks){     // renvoi attendreturn du block courant
    ElemBlock *actuel = blocks->premier;
    return (actuel->attendreturn);
}

int AffichePossedeReturn(Blocks *blocks){     // renvoi possedereturn du block courant
    ElemBlock *actuel = blocks->premier;
    return (actuel->possedereturn);
}

void copier(char tab1[20], char tab2[20]){
    //printf("%c\n", tab1[1]);
    int i=0;
    while(tab1[i] != '\0' && tab1[i] != NULL){
        tab2[i] = tab1[i];
        //printf("%c\n", tab1[i]);
        i++;
    }
    tab2[i] = '\0';
}

void vider(char tab[20]){
    for (int i=0; i<20; i++){
        tab[i] = NULL;
    }
}

void ajouterDansTableau(char tab[100], char element[30]){
    int i=0;
    while(tab[i] != '\0'){
        i++;
    }
    if (i != 0){
        tab[i] = '/';
        i++;
    }
    int j=0;
    while(element[j] != '\0'){
        tab[i] = element[j];
        i++;
        j++;
    }
}

int SupprimerDansTab(char tab[100], char element[20]){  // supprime element dans tab si il y est
    int i=0;
    int j=0;
    int taille=0;
    while(element[taille] != '\0'){
        taille++;
    }
    while(tab[i] != '\0'){
    
        if (element[j] == '\0'){
            if (tab[i] == '/'){
        
                i++;
                taille++;
                while(tab[i] != '\0'){
                    tab[i-taille] = tab[i];
                    i++;
                }
                i= i - taille;
                while(tab[i] != '\0'){
                    tab[i] = '\0';
                    i++;
                }
            }
        
        }
        if (element[j] != tab[i]){
            j = (-1);
            while(tab[i] != '\0' && tab[i] != '/'){
                i++;
            }
            if (tab[i] == '\0'){
                return 0;
            }
        }
        i++;
        j++;
    }
    if (element[j] != '\0'){        
        return 0;
    }

    taille++;
    i= i - taille;
    if (i == -1){
        i++;
    }
    while(tab[i] != '\0'){
        tab[i] = '\0';
        i++;
    }
    return 0;
}

int estDansTableau(char tab[100], char element[20]){    // 1 si est dans tableau 0 sinon
    int i=0;
    int j=0;
    while(tab[i] != '\0' && element[j] != '\0'){
        if (tab[i] != element[j]){
            j=0;
            while(tab[i] != '/' && tab[i] != '\0'){
                i++;
            }
            if (tab[i] == '\0'){
                return 0;
            }
            i++;
        }
        else{
            i++; j++;
            if (element[j] == '\0' && tab[i] != '\0' && tab[i] != '/'){
                while(tab[i] != '/' && tab[i] != '\0'){
                    i++;
                }
                if (tab[i] == '\0'){
                    return 0;
                }
                i++;
                j=0;
            }
        }        
    }
    if (element[j] == '\0' && (tab[i] == '\0' || tab[i] == '/')){
        return 1;
    }
    return 0;
}

int AfficheFonctionReturn(Fonctions *fonctions, char nom[20]){     // renvoi typereturn de la fonction
    ElemFonc *actuel = fonctions->premier;
    while (actuel != NULL){

        int i=0;
        while (nom[i] != '\0'){
            if (nom[i] != actuel->nom[i]){
                break;
            }
            i++;
        }
        if (actuel->nom[i] == '\0'){
            return actuel->typereturn;
        }
        actuel = actuel->suivant;
    }
}


Sommets *initialisationSommets()    
{
    Sommets *sommets = malloc(sizeof(*sommets));
    ElemSommets *elemsommets = malloc(sizeof(*elemsommets));

    elemsommets->nom[0] = '\0';
    elemsommets->suivant = NULL;
    sommets->premier = elemsommets;
    elemsommets->id = 0;
    elemsommets->forme = 0;
    elemsommets->couleur = 0;

    return sommets;
}

Arretes *initialisationArretes()    
{
    Arretes *arretes = malloc(sizeof(*arretes));
    ElemArretes *elemarretes = malloc(sizeof(*elemarretes));

    elemarretes->suivant = NULL;
    arretes->premier = elemarretes;
    elemarretes->id1 = 0;
    elemarretes->id2 = 0;

    return arretes;
}

BlocksArr *initialisationBlocksArr()    
{
    BlocksArr *blocksarr = malloc(sizeof(*blocksarr));
    ElemBlocksArr *elemblocksarr = malloc(sizeof(*elemblocksarr));

    elemblocksarr->suivant = NULL;
    blocksarr->premier = elemblocksarr;
    elemblocksarr->sommet = 0;
    elemblocksarr->tabids[0] = 0;       // termine tjrs par un 0 (equivalant du '\0' quand string)

    return elemblocksarr;
}


void insertionSommets(Sommets *liste, char nvNom[50], int nvId, int nvForme, int nvCouleur)
{
    // Création du nouvel élément 
    ElemSommets *nouveau = malloc(sizeof(*nouveau));
    
    int i=0;
    while(nvNom[i] != '\0')
    {
        nouveau->nom[i] = nvNom[i];
        i++;
    }
    nouveau->id = nvId;
    nouveau->forme = nvForme;
    nouveau->couleur = nvCouleur;

    // Insertion de l'élément au début de la liste 
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void insertionArretes(Arretes *liste, int nvId1, int nvId2)
{
    // Création du nouvel élément 
    ElemArretes *nouveau = malloc(sizeof(*nouveau));
    
    nouveau->id1 = nvId1;
    nouveau->id2 = nvId2;

    // Insertion de l'élément au début de la liste 
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void insertionBlocksArr(BlocksArr *liste, int nvSommet)
{
    // Création du nouvel élément 
    ElemBlocksArr *nouveau = malloc(sizeof(*nouveau));
    
    
    nouveau->sommet = nvSommet;
    nouveau->tabids[0] = 0;

    // Insertion de l'élément au début de la liste 
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void insertionId(BlocksArr *blocksarr, int nvId) //ajoute dans le block courrant un nouveau id dans la liste
{
    ElemBlocksArr *actuel = blocksarr->premier;
    int i=0;
    while(actuel->tabids[i] != 0){
        i++;
    }
    actuel->tabids[i] = nvId;
    actuel->tabids[i+1] = 0;
}

void insertionSommetBlocksArr(BlocksArr *blocksarr, int nvSommet) //ajoute dans le block courrant un sommet
{
    ElemBlocksArr *actuel = blocksarr->premier;
    actuel->sommet = nvSommet;
}

void suppressionBlocksArr(BlocksArr *blocksarr)  
{
    if (blocksarr->premier != NULL)
    {
        ElemBlocksArr *aSupprimer = blocksarr->premier;
        ElemBlocksArr *a = blocksarr->premier;
        blocksarr->premier = a->suivant;
        free(aSupprimer);
    }
}

void suppressionSommets(Sommets *sommets)
{
    if (sommets->premier != NULL)
    {
        ElemSommets *aSupprimer = sommets->premier;
        ElemSommets *a = sommets->premier;
        sommets->premier = a->suivant;
        free(aSupprimer);
    }
}

void creerArretes(BlocksArr *blocksarr, Arretes *arretes){
    ElemBlocksArr *actuel = blocksarr->premier;
    int i=0;
    while(actuel->tabids[i] != 0){
        insertionArretes(arretes, actuel->sommet, actuel->tabids[i]);
        i++;
    }
}


// Création du fichier DOT
int CreationfichierDot(Sommets *sommets, Arretes *arretes){

    ElemSommets *actuelS = sommets->premier;
    ElemArretes *actuelA = arretes->premier;
    FILE *f;

    f = fopen("FichierDot.dot", "w");
    if (f == NULL) {
        perror("FichierDot.dot");
        return -1;
    }

    fprintf(f, "digraph mon_programme {\n");

    // Parcours des sommets
    while (actuelS->suivant != NULL) {
        fprintf(f, "\tnode_%d [label=\"%s\" shape=", actuelS->id, actuelS->nom);

        // Choix de la forme en fonction du type de sommet
        switch (actuelS->forme) {
            case 0:
                fprintf(f, "ellipse");
                break;
            case 1:
                fprintf(f, "invtrapezium");
                break;
            case 2:
                fprintf(f, "trapezium");
                break;
            case 3:
                fprintf(f, "diamond");
                break;
            case 4:
                fprintf(f, "rect");
                break;
            case 5:
                fprintf(f, "septagon"); // polygon fait des rectangles bizarrement
                break;
            default:
                break;
        }

        fprintf(f, " color=");
        if (actuelS->couleur == 0) {
            fprintf(f, "black");
        } else if (actuelS->couleur == 1) {
            fprintf(f, "blue");
        }

        fprintf(f, "];\n");
        actuelS = actuelS->suivant;
    }

    fprintf(f, "\n");

    // Parcours des arêtes
    while (actuelA->suivant != NULL) {
        fprintf(f, "\tnode_%d -> node_%d;\n", actuelA->id1, actuelA->id2);
        actuelA = actuelA->suivant;
    }

    fprintf(f, "}");
    fclose(f);

    return 0;
}



// FOnction pour vider sommets2 dans sommets
void ViderPileSommets2()
{
    ElemSommets* sommetCourant2 = sommets2->premier;
    
    while (sommetCourant2->suivant != NULL){
        insertionSommets(sommets, sommetCourant2->nom, sommetCourant2->id, sommetCourant2->forme, sommetCourant2->couleur);
        suppressionSommets(sommets2);
        sommetCourant2 = sommetCourant2->suivant;
    }
}

void EneleverPileSommet()
{
    ElemSommets* sommetCourant = sommets->premier;
    insertionSommets(sommets2, sommetCourant->nom, sommetCourant->id, sommetCourant->forme, sommetCourant->couleur);
    suppressionSommets(sommets);
}


int yyerror( char *s) {
    fprintf( stderr, "ligne %d, %s\n", yylineno, s);
    exit(1); /* erreur de synthaxe */
}

int main(){
    hautaffecta[0] = 0;
    finfonc[0] = -1;
    parametresDot[0] = -1;
    enregistrer[0] = -1;
    boucleblock[0] = -1;    // 1 = on doit creer un sommet block, sinon 0
    enrswitch[0] = -1;
    idDot = 0;
    listfonctions = initialisationFonctions();
    block = initialisationBlocks();
    sommets = initialisationBlocks();
    sommets2 = initialisationBlocks();
    arretes = initialisationArretes();
    blocksarr = initialisationBlocksArr();
    yyparse();
    CreationfichierDot(sommets, arretes);
    system("dot -Tpdf FichierDot.dot -o FichierDotOut.pdf");
    return 0;
}
