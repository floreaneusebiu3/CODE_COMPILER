/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "interpreter.y"

#include <stdio.h>
#include <limits.h>

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include<stdbool.h>
#include "types.h"

memory_type memory[26]; /* symbol table */
void yyerror(const char* s);
extern char* yytext;
int table[3][3];
int round;

#line 88 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    STRING = 259,                  /* STRING  */
    FLOAT = 260,                   /* FLOAT  */
    TYPEE = 261,                   /* TYPEE  */
    VARIABLE = 262,                /* VARIABLE  */
    PUT = 263,                     /* PUT  */
    WHILE = 264,                   /* WHILE  */
    IF = 265,                      /* IF  */
    PRINT = 266,                   /* PRINT  */
    REPEAT = 267,                  /* REPEAT  */
    UNTIL = 268,                   /* UNTIL  */
    FOR = 269,                     /* FOR  */
    SWITCH = 270,                  /* SWITCH  */
    CASE = 271,                    /* CASE  */
    END_SWITCH = 272,              /* END_SWITCH  */
    DEFAULT = 273,                 /* DEFAULT  */
    START = 274,                   /* START  */
    IFX = 275,                     /* IFX  */
    ELSE = 276,                    /* ELSE  */
    GE = 277,                      /* GE  */
    LE = 278,                      /* LE  */
    EQ = 279,                      /* EQ  */
    NE = 280,                      /* NE  */
    UMINUS = 281                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define STRING 259
#define FLOAT 260
#define TYPEE 261
#define VARIABLE 262
#define PUT 263
#define WHILE 264
#define IF 265
#define PRINT 266
#define REPEAT 267
#define UNTIL 268
#define FOR 269
#define SWITCH 270
#define CASE 271
#define END_SWITCH 272
#define DEFAULT 273
#define START 274
#define IFX 275
#define ELSE 276
#define GE 277
#define LE 278
#define EQ 279
#define NE 280
#define UMINUS 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "interpreter.y"

  tic ticValue;
  int iValue;      /* integer value */
  float fValue;
  char* sValue;
  char *typee;
  nodeType *nPtr;  /* node pointer */

#line 202 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_TYPEE = 6,                      /* TYPEE  */
  YYSYMBOL_VARIABLE = 7,                   /* VARIABLE  */
  YYSYMBOL_PUT = 8,                        /* PUT  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_PRINT = 11,                     /* PRINT  */
  YYSYMBOL_REPEAT = 12,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 13,                     /* UNTIL  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_SWITCH = 15,                    /* SWITCH  */
  YYSYMBOL_CASE = 16,                      /* CASE  */
  YYSYMBOL_END_SWITCH = 17,                /* END_SWITCH  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_START = 19,                     /* START  */
  YYSYMBOL_IFX = 20,                       /* IFX  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_GE = 22,                        /* GE  */
  YYSYMBOL_LE = 23,                        /* LE  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_NE = 25,                        /* NE  */
  YYSYMBOL_26_ = 26,                       /* '>'  */
  YYSYMBOL_27_ = 27,                       /* '<'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_UMINUS = 32,                    /* UMINUS  */
  YYSYMBOL_33_ = 33,                       /* '.'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_36_ = 36,                       /* '('  */
  YYSYMBOL_37_ = 37,                       /* ')'  */
  YYSYMBOL_38_ = 38,                       /* '{'  */
  YYSYMBOL_39_ = 39,                       /* '}'  */
  YYSYMBOL_40_ = 40,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_function = 43,                  /* function  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_stmt_list = 45,                 /* stmt_list  */
  YYSYMBOL_case_stmt = 46,                 /* case_stmt  */
  YYSYMBOL_default_stmt = 47,              /* default_stmt  */
  YYSYMBOL_expr = 48                       /* expr  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  39
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
      36,    37,    30,    28,     2,    29,    33,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    34,
      27,    35,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    47,    47,    50,    54,    57,    58,    59,    60,    63,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    76,
      77,    80,    83,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "STRING",
  "FLOAT", "TYPEE", "VARIABLE", "PUT", "WHILE", "IF", "PRINT", "REPEAT",
  "UNTIL", "FOR", "SWITCH", "CASE", "END_SWITCH", "DEFAULT", "START",
  "IFX", "ELSE", "GE", "LE", "EQ", "NE", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "UMINUS", "'.'", "';'", "'='", "'('", "')'", "'{'", "'}'", "':'",
  "$accept", "program", "function", "statement", "stmt_list", "case_stmt",
  "default_stmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
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
     -77,     9,   130,   -77,   -77,   -77,   -77,     3,   -20,   -77,
     -19,   -16,     0,   166,   166,    -5,   -77,     0,   -77,   -77,
       0,   166,   -77,   247,   -18,     0,     0,     0,   -77,   -77,
     260,    17,     0,    25,   -77,   183,   -77,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     273,   199,   215,   -77,     2,   286,    -3,   -77,   -77,   -77,
      -6,    -6,    -6,    -6,    -6,    -6,   -29,   -29,   -77,   -77,
     -77,   166,   166,     0,   166,    21,   -77,    28,   231,    22,
      60,    21,   166,    30,   166,    27,    50,   -77,   -77,    93,
     166,    31,    48,   -77,   166,   166,   -77,   166
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,    23,    25,    24,    27,    26,     8,
       0,     0,     0,     0,     0,     0,     7,     0,     2,     5,
       0,     0,     3,     0,     0,     0,     0,     0,    27,    26,
       0,     0,     0,     0,    28,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    11,
       0,     0,     0,     9,     0,     0,     0,    39,    18,    20,
      35,    36,    38,    37,    34,    33,    29,    30,    31,    32,
      10,     0,     0,     0,     0,     0,    12,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    13,     0,
       0,     0,     0,    14,    21,     0,    15,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,   -77,    -2,   -76,    -8,   -77,     1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    36,    37,    81,    92,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,    46,    47,     4,     5,     6,    28,    29,    89,     3,
      24,    31,    32,    30,    94,    25,    49,    26,    34,    97,
      27,    35,    44,    45,    46,    47,    50,    51,    52,    17,
      54,    33,    56,    55,    75,    59,    20,    80,    73,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    82,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      84,    14,    15,    85,    88,    96,    16,    90,    91,    76,
      77,    95,    79,    86,    78,     0,    17,     0,     0,     0,
      87,    19,     0,    20,     0,    21,    58,    59,     0,     0,
       0,     0,    59,     0,     0,    59,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,    15,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    19,     0,    20,
       0,    21,    93,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
      19,     0,    20,     0,    21,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
      57,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,    72,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,    83,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,    48,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,     0,    53,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    70,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
      74
};

static const yytype_int8 yycheck[] =
{
       2,    30,    31,     3,     4,     5,     6,     7,    84,     0,
       7,    13,    14,    12,    90,    35,    34,    36,    17,    95,
      36,    20,    28,    29,    30,    31,    25,    26,    27,    29,
      13,    36,     7,    32,    37,    37,    36,    16,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    21,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      38,    14,    15,     3,    34,    17,    19,    40,    18,    71,
      72,    40,    74,    81,    73,    -1,    29,    -1,    -1,    -1,
      82,    34,    -1,    36,    -1,    38,    39,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    97,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    38,    39,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    -1,    36,    -1,    38,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      37,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    37,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    15,    19,    29,    33,    34,
      36,    38,    44,    48,     7,    35,    36,    36,     6,     7,
      48,    44,    44,    36,    48,    48,    44,    45,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    34,    34,
      48,    48,    48,    34,    13,    48,     7,    37,    39,    44,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      34,    37,    37,    36,    34,    37,    44,    44,    48,    44,
      16,    46,    21,    37,    38,     3,    46,    44,    34,    45,
      40,    18,    47,    39,    45,    40,    17,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    45,
      45,    46,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     1,     1,     3,
       4,     3,     5,     7,     8,     8,     5,     7,     3,     1,
       2,     4,     3,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: function '.'  */
#line 47 "interpreter.y"
                                                                 { exit(0); }
#line 1323 "y.tab.c"
    break;

  case 3: /* function: function statement  */
#line 50 "interpreter.y"
                                                                 {                   
                                                                   execute((yyvsp[0].nPtr)); 
                                                                   freeNode((yyvsp[0].nPtr)); 
                                                                 }
#line 1332 "y.tab.c"
    break;

  case 5: /* statement: ';'  */
#line 57 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
#line 1338 "y.tab.c"
    break;

  case 6: /* statement: expr ';'  */
#line 58 "interpreter.y"
                                                                 { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1344 "y.tab.c"
    break;

  case 7: /* statement: START  */
#line 59 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(START, 0);}
#line 1350 "y.tab.c"
    break;

  case 8: /* statement: PUT  */
#line 60 "interpreter.y"
                                                                 {   
                                                                    (yyval.nPtr) = opr(PUT, 2, con(((yyvsp[0].ticValue)).x), con(((yyvsp[0].ticValue)).y));
                                                                 }
#line 1358 "y.tab.c"
    break;

  case 9: /* statement: PRINT expr ';'  */
#line 63 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[-1].nPtr)); }
#line 1364 "y.tab.c"
    break;

  case 10: /* statement: VARIABLE '=' expr ';'  */
#line 64 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('=', 2, id((yyvsp[-3].iValue)), (yyvsp[-1].nPtr)); }
#line 1370 "y.tab.c"
    break;

  case 11: /* statement: TYPEE VARIABLE ';'  */
#line 65 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(TYPEE, 2, text((yyvsp[-2].typee)), id((yyvsp[-1].iValue))); }
#line 1376 "y.tab.c"
    break;

  case 12: /* statement: WHILE '(' expr ')' statement  */
#line 66 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1382 "y.tab.c"
    break;

  case 13: /* statement: REPEAT statement UNTIL '(' expr ')' ';'  */
#line 67 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(REPEAT, 2, (yyvsp[-5].nPtr), (yyvsp[-2].nPtr)); }
#line 1388 "y.tab.c"
    break;

  case 14: /* statement: FOR statement expr ';' statement '{' stmt_list '}'  */
#line 68 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(FOR, 4, (yyvsp[-6].nPtr), (yyvsp[-5].nPtr), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1394 "y.tab.c"
    break;

  case 15: /* statement: SWITCH '(' VARIABLE ')' case_stmt case_stmt default_stmt END_SWITCH  */
#line 70 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(SWITCH, 4, id((yyvsp[-5].iValue)), (yyvsp[-3].nPtr), (yyvsp[-2].nPtr), (yyvsp[-1].nPtr)); }
#line 1400 "y.tab.c"
    break;

  case 16: /* statement: IF '(' expr ')' statement  */
#line 71 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(IF, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1406 "y.tab.c"
    break;

  case 17: /* statement: IF '(' expr ')' statement ELSE statement  */
#line 72 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(IF, 3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1412 "y.tab.c"
    break;

  case 18: /* statement: '{' stmt_list '}'  */
#line 73 "interpreter.y"
                                                                 { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1418 "y.tab.c"
    break;

  case 20: /* stmt_list: stmt_list statement  */
#line 77 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1424 "y.tab.c"
    break;

  case 21: /* case_stmt: CASE INTEGER ':' stmt_list  */
#line 80 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(CASE, 2, con((yyvsp[-2].iValue)), (yyvsp[0].nPtr)); }
#line 1430 "y.tab.c"
    break;

  case 22: /* default_stmt: DEFAULT ':' stmt_list  */
#line 83 "interpreter.y"
                                                                   { (yyval.nPtr) = opr(DEFAULT, 1, (yyvsp[0].nPtr)); }
#line 1436 "y.tab.c"
    break;

  case 23: /* expr: INTEGER  */
#line 85 "interpreter.y"
                                                                 { (yyval.nPtr) = con((yyvsp[0].iValue)); }
#line 1442 "y.tab.c"
    break;

  case 24: /* expr: FLOAT  */
#line 86 "interpreter.y"
                                                                 { (yyval.nPtr) = conF((yyvsp[0].fValue)); }
#line 1448 "y.tab.c"
    break;

  case 25: /* expr: STRING  */
#line 87 "interpreter.y"
                                                                 { (yyval.nPtr) = conS((yyvsp[0].sValue)); }
#line 1454 "y.tab.c"
    break;

  case 26: /* expr: VARIABLE  */
#line 88 "interpreter.y"
                                                                 { (yyval.nPtr) = id((yyvsp[0].iValue)); }
#line 1460 "y.tab.c"
    break;

  case 27: /* expr: TYPEE  */
#line 89 "interpreter.y"
                                                                 { (yyval.nPtr) = text((yyvsp[0].typee));}
#line 1466 "y.tab.c"
    break;

  case 28: /* expr: '-' expr  */
#line 90 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr)); }
#line 1472 "y.tab.c"
    break;

  case 29: /* expr: expr '+' expr  */
#line 91 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1478 "y.tab.c"
    break;

  case 30: /* expr: expr '-' expr  */
#line 92 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1484 "y.tab.c"
    break;

  case 31: /* expr: expr '*' expr  */
#line 93 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1490 "y.tab.c"
    break;

  case 32: /* expr: expr '/' expr  */
#line 94 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1496 "y.tab.c"
    break;

  case 33: /* expr: expr '<' expr  */
#line 95 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('<', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1502 "y.tab.c"
    break;

  case 34: /* expr: expr '>' expr  */
#line 96 "interpreter.y"
                                                                 { (yyval.nPtr) = opr('>', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1508 "y.tab.c"
    break;

  case 35: /* expr: expr GE expr  */
#line 97 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1514 "y.tab.c"
    break;

  case 36: /* expr: expr LE expr  */
#line 98 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1520 "y.tab.c"
    break;

  case 37: /* expr: expr NE expr  */
#line 99 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1526 "y.tab.c"
    break;

  case 38: /* expr: expr EQ expr  */
#line 100 "interpreter.y"
                                                                 { (yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1532 "y.tab.c"
    break;

  case 39: /* expr: '(' expr ')'  */
#line 101 "interpreter.y"
                                                                 { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1538 "y.tab.c"
    break;


#line 1542 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 103 "interpreter.y"

data_ execute(nodeType *node) {
  data_ data;
  data_ aux;
  data_ aux2;
  data.intValue = INT_MAX;
  data.floatValue = INT_MAX;
  if (!node) 
    return data; 
  switch(node->type) {
    case typeCon:  data.intValue = node->con.value; return data;
    case typeConF: data.floatValue = node->con.valueF; return data;
    case typeConS : data.stringValue = node->con.valueS; return data;
    case typeId :  
                    if(memory[node->id.i].type == NULL) {
                       yyerror("error:undeclared variable");
                       return data;
                    }
                    if (strcmp(memory[node->id.i].type, "int") == 0) {
                        data.intValue = atoi(memory[node->id.i].value);
                        return data;
                    }
                    if (strcmp(memory[node->id.i].type, "float") == 0) {
                        data.floatValue = atof(memory[node->id.i].value);
                        return data;
                    }
                    if (strcmp(memory[node->id.i].type, "string") == 0) {
                        data.stringValue = (char*)malloc(100 * sizeof(char));
                        data.stringValue = memory[node->id.i].value;
                        return data;
                    }
                      yyerror("error:incorrect assigment");
                      return data;
                    
    case typeOpr : switch(node->opr.oper) 
                  { case START  :    for (int i = 0; i < 3; i++) 
                                     for (int j = 0; j < 3; j++) 
                                        table[i][j] = 0;
                                     round = 0;
                                     printTable(table);
                                     if (round % 2 == 0) 
                                        printf("\nO's round\n");
                                     else 
                                        printf("\nX's round\n");

                                     return data;
                    case PUT :       if(round < 9 && !isWin(table)){
                                       playRound(table, &round, execute(node->opr.op[0]).intValue, execute(node->opr.op[1]).intValue);
                                       if (!isWin(table)) {
                                          printTable(table);
                                           if (round % 2 == 0) 
                                               printf("\nO's round\n");
                                           else 
                                               printf("\nX's round\n");                                      
                                            }    
                                      }
                                      return data;
                    case WHILE  :   if(node->opr.op[0]->opr.oper == '<' || node->opr.op[0]->opr.oper == '>' || 
                                         node->opr.op[0]->opr.oper == EQ  || node->opr.op[0]->opr.oper == NE ||
                                         node->opr.op[0]->opr.oper == GE  || node->opr.op[0]->opr.oper == LE ) {
                                          while (execute(node->opr.op[0]).intValue) {
                                            execute(node->opr.op[1]);
                                          }
                                         } 
                                         return data;
                      case REPEAT :     if(node->opr.op[1]->opr.oper == '<' || node->opr.op[1]->opr.oper == '>' || 
                                         node->opr.op[1]->opr.oper == EQ  || node->opr.op[1]->opr.oper == NE ||
                                         node->opr.op[1]->opr.oper == GE  || node->opr.op[1]->opr.oper == LE ) {
                                          do {
                                            execute(node->opr.op[0]);
                                          } while (execute(node->opr.op[1]).intValue);
                                         } 
                                         return data;
                                          
                      case IF    :       if(node->opr.op[0]->opr.oper == '<' || node->opr.op[0]->opr.oper == '>' || 
                                         node->opr.op[0]->opr.oper == EQ  || node->opr.op[0]->opr.oper == NE ||
                                         node->opr.op[0]->opr.oper == GE  || node->opr.op[0]->opr.oper == LE ) {
                                           if (execute(node->opr.op[0]).intValue) 
                                                execute(node->opr.op[1]);
                                            else if (node->opr.nops > 2) 
                                                execute(node->opr.op[2]);
                                         } 
                                         return data; 
                      case FOR  :        if(node->opr.op[1]->opr.oper == '<' || node->opr.op[1]->opr.oper == '>' || 
                                         node->opr.op[1]->opr.oper == EQ  || node->opr.op[1]->opr.oper == NE ||
                                         node->opr.op[1]->opr.oper == GE  || node->opr.op[1]->opr.oper == LE ) {
                                           execute(node->opr.op[0]).intValue;
                                           while (execute(node->opr.op[1]).intValue) {
                                            execute(node->opr.op[3]);
                                            execute(node->opr.op[2]);
                                          }
                                         } 
                                         return data; 
                      case SWITCH :    
                                      if(strcmp(memory[node->opr.op[0]->id.i].type, "int") == 0) {
                                           if (execute(node->opr.op[0]).intValue == execute(node->opr.op[1]->opr.op[0]).intValue) {
                                                execute(node->opr.op[1]->opr.op[1]);
                                                return data;
                                           }
                                           if (execute(node->opr.op[0]).intValue == execute(node->opr.op[2]->opr.op[0]).intValue) {
                                                execute(node->opr.op[2]->opr.op[1]);
                                                return data;
                                           }
                                           execute(node->opr.op[3]->opr.op[0]);
                                        }  
                                       return data;
                      case '='    :   saveValueInMemory(node); return data;
                      case TYPEE  :   memory[node->opr.op[1]->id.i].type = (char*)malloc(10 * sizeof(char));
                                      memory[node->opr.op[1]->id.i].type = getString(node->opr.op[0]);
                                      return data;
                      case PRINT :    aux = execute(node->opr.op[0]); 
                                      if (aux.intValue != INT_MAX)  {
                                          printf("%d\n", execute(node->opr.op[0]).intValue); 
                                          return data;
                                      }
                                      if (aux.floatValue != INT_MAX) {
                                          printf("%f\n", execute(node->opr.op[0]).floatValue); 
                                          return data;
                                      }
                                      if (aux.stringValue != NULL) {
                                          printf("%s\n", execute(node->opr.op[0]).stringValue); 
                                          return data;
                                      }
                                      return data;     
                      case ';':       execute(node->opr.op[0]); 
		                                      return execute(node->opr.op[1]); 
                      case '+'   :     aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue + execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue + execute(node->opr.op[1]).floatValue;
                                      return data;
                      case '-'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue - execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue - execute(node->opr.op[1]).floatValue;
                                      return data;
                      case '*'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue * execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue * execute(node->opr.op[1]).floatValue;
                                      return data;
                      case '/'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue / execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue / execute(node->opr.op[1]).floatValue;
                                      return data;
                      case '<'   :    aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue < aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue < aux2.floatValue;
                                      return data;
		                  case '>':       aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue > aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue > aux2.floatValue;
                                      return data;
		                  case GE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue >= aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue >= aux2.floatValue;
                                      return data; 
		                  case LE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue <= aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue <= aux2.floatValue;
                                      return data; 
		                  case NE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue != aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue != aux2.floatValue;
                                      return data;
		                  case EQ:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue == aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue == aux2.floatValue;
                                      return data;
                  }
  }
  }

char *getString(nodeType *node) {
  char *s = malloc(10 * sizeof(char));
  sprintf(s, "%s", node->txt.value);
  return s;
}

void saveValueInMemory(nodeType * node) {
  if(memory[node->opr.op[0]->id.i].value == NULL)
  memory[node->opr.op[0]->id.i].value = (char*)malloc(100 * sizeof(char));
  if (strcmp(memory[node->opr.op[0]->id.i].type, "int") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%d", execute(node->opr.op[1]).intValue); 
  if (strcmp(memory[node->opr.op[0]->id.i].type, "float") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%f", execute(node->opr.op[1]).floatValue);      
  if (strcmp(memory[node->opr.op[0]->id.i].type, "string") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%s", execute(node->opr.op[1]).stringValue);    
}

void freeNode(nodeType *p) 
{ 
  int i; 
  if (!p) 
    return; 
  if (p->type == typeOpr) { 
    for (i = 0; i < p->opr.nops; i++) 
      freeNode(p->opr.op[i]); 
  } 
  free (p); 
} 

nodeType *text(char* value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(textNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeText; 
  p->txt.value = value; 
  return p; 
} 

nodeType *con(int value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeCon; 
  p->con.value = value; 
  return p; 
} 

nodeType *conF(float value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeConF; 
  p->con.valueF = value; 
  return p; 
} 

nodeType *conS(char* value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeConS;
  p->con.valueS = (char*)malloc(100 * sizeof(char));
  p->con.valueS = value; 
  return p; 
} 

nodeType *id(int i) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(idNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeId; 
  p->id.i = i; 
  return p; 
} 

nodeType *opr(int oper, int nops, ...) 
{ 
  va_list ap; 
  nodeType *p; 
  size_t size; 
  int i; 
  /* allocate node */ 
  size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*); 
  if ((p = malloc(size)) == NULL) 
    yyerror("out of memory"); 
  /* copy information */
  p->type = typeOpr; 
  p->opr.oper = oper; 
  p->opr.nops = nops; 
  va_start(ap, nops); 
  for (i = 0; i < nops; i++) 
    p->opr.op[i] = va_arg(ap, nodeType*); 
  va_end(ap); 
  return p; 
}

void yyerror(const char* s) {
    fprintf(stderr, "Error: %s, input: %s\n", s, yytext);
}

int main(void) 
{
  yyparse();
  return 0; 
}

bool isWin(int t[3][3]){
    for (int i = 0; i < 3; i++){
        if ((t[0][i] == 1 && t[1][i] == 1 && t[2][i] == 1) ||
            (t[0][i] == 2 && t[1][i] == 2 && t[2][i] == 2) ||
            (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 1) ||
            (t[i][0] == 2 && t[i][1] == 2 && t[i][2] == 2)){
                return true;
            }
    }
    if ((t[0][0] == 1 && t[1][1] == 1 && t[2][2] == 1) ||
        (t[0][0] == 2 && t[1][1] == 2 && t[2][2] == 2) ||
        (t[0][2] == 1 && t[1][1] == 1 && t[2][0] == 1) ||
        (t[0][2] == 2 && t[1][1] == 2 && t[2][0] == 2)){
            return true;
        }
    return false;
}

void printTable(int table[3][3]){
    for (int i = 0; i<3; i++){
        printf("\n-------\n|");

        for (int j = 0; j<3; j++){
            if (table[i][j] == 0)
                printf(" |");
            if (table[i][j] == 1)
                printf("O|");
            if (table[i][j] == 2)
                printf("X|");
        }
    }
    printf("\n-------\n");
}

void playRound(int table[3][3], int* round, int x, int y){
    printf("ROUND = %d\n", (*round));
    char playerChar;
    int playerVal;
    if ((*round) % 2 == 0){
        playerChar = 'O';
        playerVal = 1;
    }
    else {
        playerChar = 'X';
        playerVal = 2;
    }
    if (table[x-1][y-1] == 0 && x >= 1 && x <=3 && y >= 1 && y <=3){
        (*round) ++;
        table[x-1][y-1] = playerVal;
        if (isWin(table)){
            printTable(table);
            printf("\n%c won!\n", playerChar);
        }
    }
}
