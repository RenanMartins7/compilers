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
#line 6 "parser.y"

/*Definições em C, bibliotecas e variáveis externas*/
int yylex(void);
void yyerror (char const *mensagem);
extern int yylineno;
#include <stdio.h>
extern void *arvore;



/*  O tipo do campo valor_lexico (e por consequência o valor que será retido) deve ser uma estrutura de dados
(struct) que contém os seguintes campos: (a) número da linha onde apareceu o lexema; (b) tipo do token
(identificador ou literal); (c) valor do token. O valor do token é uma cadeia de caracteres (duplicada com
strdup a partir de yytext) para todos os tipos de tokens.
*/




#line 91 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PR_INT = 3,                  /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 4,                /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 5,                 /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_IF = 6,                   /* TK_PR_IF  */
  YYSYMBOL_TK_PR_ELSE = 7,                 /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 8,                /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_RETURN = 9,               /* TK_PR_RETURN  */
  YYSYMBOL_TK_OC_LE = 10,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 11,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 12,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 13,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 14,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 15,                  /* TK_OC_OR  */
  YYSYMBOL_TK_IDENTIFICADOR = 16,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_LIT_INT = 17,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 18,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 19,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 20,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_ERRO = 21,                   /* TK_ERRO  */
  YYSYMBOL_22_ = 22,                       /* ','  */
  YYSYMBOL_23_ = 23,                       /* ';'  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_27_ = 27,                       /* '{'  */
  YYSYMBOL_28_ = 28,                       /* '}'  */
  YYSYMBOL_29_ = 29,                       /* '='  */
  YYSYMBOL_30_ = 30,                       /* '>'  */
  YYSYMBOL_31_ = 31,                       /* '<'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '%'  */
  YYSYMBOL_36_ = 36,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_raizPrograma = 38,              /* raizPrograma  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_declaracao_global = 40,         /* declaracao_global  */
  YYSYMBOL_lista_variaveis_globais = 41,   /* lista_variaveis_globais  */
  YYSYMBOL_tipo = 42,                      /* tipo  */
  YYSYMBOL_declaracao_funcao = 43,         /* declaracao_funcao  */
  YYSYMBOL_parametros_dec_funcao = 44,     /* parametros_dec_funcao  */
  YYSYMBOL_lista_parametros_dec_funcao = 45, /* lista_parametros_dec_funcao  */
  YYSYMBOL_bloco_de_comandos = 46,         /* bloco_de_comandos  */
  YYSYMBOL_lista_de_comandos = 47,         /* lista_de_comandos  */
  YYSYMBOL_comando_simples = 48,           /* comando_simples  */
  YYSYMBOL_declaracao_variavel = 49,       /* declaracao_variavel  */
  YYSYMBOL_lista_declaracao_variaveis = 50, /* lista_declaracao_variaveis  */
  YYSYMBOL_atribuicao_variavel = 51,       /* atribuicao_variavel  */
  YYSYMBOL_comando_return = 52,            /* comando_return  */
  YYSYMBOL_chamada_funcao = 53,            /* chamada_funcao  */
  YYSYMBOL_argumentos_chamada_funcao = 54, /* argumentos_chamada_funcao  */
  YYSYMBOL_lista_argumentos_chamada_funcao = 55, /* lista_argumentos_chamada_funcao  */
  YYSYMBOL_comando_condicional = 56,       /* comando_condicional  */
  YYSYMBOL_comando_else = 57,              /* comando_else  */
  YYSYMBOL_comando_while = 58,             /* comando_while  */
  YYSYMBOL_expressao = 59,                 /* expressao  */
  YYSYMBOL_expressao_or = 60,              /* expressao_or  */
  YYSYMBOL_expressao_and = 61,             /* expressao_and  */
  YYSYMBOL_expressao_eq_ne = 62,           /* expressao_eq_ne  */
  YYSYMBOL_expressao_comparativa = 63,     /* expressao_comparativa  */
  YYSYMBOL_expressao_soma_sub = 64,        /* expressao_soma_sub  */
  YYSYMBOL_expressao_div_mult = 65,        /* expressao_div_mult  */
  YYSYMBOL_expressao_unaria = 66,          /* expressao_unaria  */
  YYSYMBOL_valor = 67                      /* valor  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
       2,     2,     2,    36,     2,     2,     2,    35,     2,     2,
      24,    25,    34,    32,    22,    33,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      31,    29,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   105,   105,   109,   110,   111,   123,   125,   126,   135,
     136,   137,   152,   165,   166,   168,   169,   187,   189,   191,
     206,   207,   208,   209,   210,   211,   212,   222,   224,   225,
     233,   241,   249,   253,   254,   257,   258,   267,   274,   275,
     283,   297,   299,   300,   302,   303,   305,   306,   307,   309,
     310,   311,   312,   313,   315,   316,   317,   319,   320,   321,
     322,   324,   325,   326,   329,   330,   331,   332,   333,   334,
     335
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_PR_INT",
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_IF", "TK_PR_ELSE", "TK_PR_WHILE",
  "TK_PR_RETURN", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE",
  "TK_OC_AND", "TK_OC_OR", "TK_IDENTIFICADOR", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_ERRO", "','", "';'",
  "'('", "')'", "'/'", "'{'", "'}'", "'='", "'>'", "'<'", "'+'", "'-'",
  "'*'", "'%'", "'!'", "$accept", "raizPrograma", "programa",
  "declaracao_global", "lista_variaveis_globais", "tipo",
  "declaracao_funcao", "parametros_dec_funcao",
  "lista_parametros_dec_funcao", "bloco_de_comandos", "lista_de_comandos",
  "comando_simples", "declaracao_variavel", "lista_declaracao_variaveis",
  "atribuicao_variavel", "comando_return", "chamada_funcao",
  "argumentos_chamada_funcao", "lista_argumentos_chamada_funcao",
  "comando_condicional", "comando_else", "comando_while", "expressao",
  "expressao_or", "expressao_and", "expressao_eq_ne",
  "expressao_comparativa", "expressao_soma_sub", "expressao_div_mult",
  "expressao_unaria", "valor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,   -52,   -52,   -52,    37,     7,   -52,    10,     2,    10,
       8,    26,   -52,   -52,    47,   -52,    48,    58,    46,    52,
      37,   -52,    37,    47,   -52,    60,    51,   -52,    48,    62,
     -52,    53,    27,   -52,    55,    57,    39,   -13,    66,   -52,
      56,    61,   -52,   -52,   -52,   -52,   -52,   -52,    39,    39,
      63,   -52,   -52,   -52,   -52,    39,    39,    39,   -52,   -52,
      70,    72,    40,    15,    -5,   -14,   -52,   -52,    39,    39,
      65,   -52,    27,    64,    67,    68,   -52,   -52,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    69,    73,   -52,    75,   -52,   -52,    53,    53,   -52,
      72,    40,    15,    15,    -5,    -5,    -5,    -5,   -14,   -14,
     -52,   -52,   -52,   -52,    39,   -52,    65,    88,   -52,    73,
     -52,    53,   -52,   -52,   -52
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    11,    10,     9,    14,     0,     2,     5,     0,     5,
       0,     0,     1,     3,     8,     4,    16,     0,     0,     0,
       0,    13,     0,     8,     6,     0,     0,     7,    16,     0,
      15,     0,    19,    12,     0,     0,     0,     0,     0,    26,
       0,     0,    20,    21,    23,    22,    24,    25,     0,     0,
      64,    66,    65,    67,    68,     0,     0,     0,    69,    31,
      41,    43,    45,    48,    53,    56,    60,    63,    34,     0,
      29,    17,    19,     0,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    30,     0,    27,    18,     0,     0,    70,
      42,    44,    46,    47,    49,    50,    51,    52,    54,    55,
      58,    57,    59,    32,     0,    33,    29,    39,    40,    36,
      28,     0,    37,    35,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,     1,   -52,    74,    -3,   -52,   -52,    71,   -31,
      28,   -52,   -52,   -18,   -52,   -52,   -28,   -52,   -17,   -52,
     -52,   -52,   -46,   -52,    23,    24,   -20,   -35,   -22,   -51,
     -52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    19,     8,     9,    11,    21,    39,
      40,    41,    42,    95,    43,    44,    58,    91,   115,    46,
     122,    47,    59,    60,    61,    62,    63,    64,    65,    66,
      67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    10,    73,    74,    45,    76,    77,    12,    13,    75,
      15,    68,    88,     1,     2,     3,    69,    25,    14,    26,
      89,    90,    92,    93,    16,    82,    83,    86,    87,    38,
       1,     2,     3,    34,     4,    35,    36,   110,   111,   112,
       1,     2,     3,    37,    45,    84,    85,   104,   105,   106,
     107,    17,    80,    81,    32,    50,    51,    52,    53,    54,
     102,   103,    23,    55,   108,   109,   117,   118,   119,    38,
      18,    20,    56,    22,    24,    57,    28,    29,    31,    48,
      32,    49,    70,    72,    71,    78,    79,    68,    94,    97,
     124,   116,    98,    99,   113,   121,   114,    27,   120,    30,
      96,   100,   123,   101
};

static const yytype_int8 yycheck[] =
{
      31,     4,    48,    49,    32,    56,    57,     0,     7,    55,
       9,    24,    26,     3,     4,     5,    29,    20,    16,    22,
      34,    35,    68,    69,    16,    10,    11,    32,    33,    32,
       3,     4,     5,     6,    24,     8,     9,    88,    89,    90,
       3,     4,     5,    16,    72,    30,    31,    82,    83,    84,
      85,    25,    12,    13,    27,    16,    17,    18,    19,    20,
      80,    81,    16,    24,    86,    87,    97,    98,   114,    72,
      23,    23,    33,    15,    22,    36,    16,    26,    16,    24,
      27,    24,    16,    22,    28,    15,    14,    24,    23,    25,
     121,    16,    25,    25,    25,     7,    23,    23,   116,    28,
      72,    78,   119,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    24,    38,    39,    40,    42,    43,
      42,    44,     0,    39,    16,    39,    16,    25,    23,    41,
      23,    45,    15,    16,    22,    42,    42,    41,    16,    26,
      45,    16,    27,    46,     6,     8,     9,    16,    42,    46,
      47,    48,    49,    51,    52,    53,    56,    58,    24,    24,
      16,    17,    18,    19,    20,    24,    33,    36,    53,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    24,    29,
      16,    28,    22,    59,    59,    59,    66,    66,    15,    14,
      12,    13,    10,    11,    30,    31,    32,    33,    26,    34,
      35,    54,    59,    59,    23,    50,    47,    25,    25,    25,
      61,    62,    63,    63,    64,    64,    64,    64,    65,    65,
      66,    66,    66,    25,    23,    55,    16,    46,    46,    59,
      50,     7,    57,    55,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    39,    40,    41,    41,    42,
      42,    42,    43,    44,    44,    45,    45,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    49,    50,    50,
      51,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    59,    60,    60,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    64,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     4,     3,     0,     1,
       1,     1,     8,     3,     0,     4,     0,     3,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     0,
       3,     2,     4,     2,     0,     3,     0,     6,     2,     0,
       5,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* raizPrograma: programa  */
#line 105 "parser.y"
                       {ast_print((yyval.arvore)); 
						arvore = (yyval.arvore);}
#line 1502 "parser.tab.c"
    break;

  case 3: /* programa: declaracao_global programa  */
#line 109 "parser.y"
                                    {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1508 "parser.tab.c"
    break;

  case 4: /* programa: declaracao_funcao programa  */
#line 110 "parser.y"
                                            {ast_add_child((yyvsp[-1].arvore), (yyvsp[0].arvore));}
#line 1514 "parser.tab.c"
    break;

  case 5: /* programa: %empty  */
#line 111 "parser.y"
                                                                        {(yyval.arvore) = NULL;}
#line 1520 "parser.tab.c"
    break;

  case 12: /* declaracao_funcao: '(' parametros_dec_funcao ')' TK_OC_OR tipo '/' TK_IDENTIFICADOR bloco_de_comandos  */
#line 152 "parser.y"
                                                                                                      {(yyval.arvore) = ast_add_child(ast_new((yyvsp[-1].valor).token_value), (yyvsp[0].arvore));}
#line 1526 "parser.tab.c"
    break;

  case 17: /* bloco_de_comandos: '{' lista_de_comandos '}'  */
#line 187 "parser.y"
                                             {(yyval.arvore) = (yyvsp[-1].arvore);}
#line 1532 "parser.tab.c"
    break;

  case 18: /* lista_de_comandos: comando_simples ',' lista_de_comandos  */
#line 189 "parser.y"
                                                                {if((yyvsp[-2].arvore) == NULL)(yyval.arvore) = (yyvsp[0].arvore);
															else (yyval.arvore) = ast_add_child((yyvsp[-2].arvore), (yyvsp[0].arvore));}
#line 1539 "parser.tab.c"
    break;

  case 19: /* lista_de_comandos: %empty  */
#line 191 "parser.y"
                                                                                                                        {(yyval.arvore) = NULL;}
#line 1545 "parser.tab.c"
    break;

  case 20: /* comando_simples: declaracao_variavel  */
#line 206 "parser.y"
                                        {(yyval.arvore) = NULL;}
#line 1551 "parser.tab.c"
    break;

  case 21: /* comando_simples: atribuicao_variavel  */
#line 207 "parser.y"
                                                        {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1557 "parser.tab.c"
    break;

  case 22: /* comando_simples: chamada_funcao  */
#line 208 "parser.y"
                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1563 "parser.tab.c"
    break;

  case 23: /* comando_simples: comando_return  */
#line 209 "parser.y"
                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1569 "parser.tab.c"
    break;

  case 24: /* comando_simples: comando_condicional  */
#line 210 "parser.y"
                                                        {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1575 "parser.tab.c"
    break;

  case 25: /* comando_simples: comando_while  */
#line 211 "parser.y"
                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1581 "parser.tab.c"
    break;

  case 26: /* comando_simples: bloco_de_comandos  */
#line 212 "parser.y"
                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1587 "parser.tab.c"
    break;

  case 30: /* atribuicao_variavel: TK_IDENTIFICADOR '=' expressao  */
#line 233 "parser.y"
                                                    {(yyval.arvore) = ast_new("=");
													(yyval.arvore) = ast_add_child((yyval.arvore), ast_new((yyvsp[-2].valor).token_value));
													(yyval.arvore) = ast_add_child((yyval.arvore), (yyvsp[0].arvore));}
#line 1595 "parser.tab.c"
    break;

  case 31: /* comando_return: TK_PR_RETURN expressao  */
#line 241 "parser.y"
                                       {(yyval.arvore) = ast_add_child(ast_new("return"), (yyvsp[0].arvore));}
#line 1601 "parser.tab.c"
    break;

  case 32: /* chamada_funcao: TK_IDENTIFICADOR '(' argumentos_chamada_funcao ')'  */
#line 249 "parser.y"
                                                                   {(yyval.arvore) = ast_add_child(ast_new("call "), (yyvsp[-1].arvore));
																	ast_cat_label((yyval.arvore), (yyvsp[-3].valor).token_value);}
#line 1608 "parser.tab.c"
    break;

  case 33: /* argumentos_chamada_funcao: expressao lista_argumentos_chamada_funcao  */
#line 253 "parser.y"
                                                                     {(yyval.arvore) = ast_add_child((yyvsp[-1].arvore),(yyvsp[0].arvore));}
#line 1614 "parser.tab.c"
    break;

  case 34: /* argumentos_chamada_funcao: %empty  */
#line 254 "parser.y"
                                                          {(yyval.arvore) = NULL;}
#line 1620 "parser.tab.c"
    break;

  case 35: /* lista_argumentos_chamada_funcao: ';' expressao lista_argumentos_chamada_funcao  */
#line 257 "parser.y"
                                                                              {(yyval.arvore) = ast_add_child((yyvsp[-1].arvore),(yyvsp[0].arvore));}
#line 1626 "parser.tab.c"
    break;

  case 36: /* lista_argumentos_chamada_funcao: %empty  */
#line 258 "parser.y"
                                                                 {(yyval.arvore) = NULL;}
#line 1632 "parser.tab.c"
    break;

  case 37: /* comando_condicional: TK_PR_IF '(' expressao ')' bloco_de_comandos comando_else  */
#line 267 "parser.y"
                                                                                {(yyval.arvore) = ast_new("if");
																				(yyval.arvore) = ast_add_child((yyval.arvore), (yyvsp[-3].arvore));
																				(yyval.arvore) = ast_add_child((yyval.arvore), (yyvsp[-1].arvore));
																				(yyval.arvore) = ast_add_child((yyval.arvore), (yyvsp[0].arvore));
}
#line 1642 "parser.tab.c"
    break;

  case 38: /* comando_else: TK_PR_ELSE bloco_de_comandos  */
#line 274 "parser.y"
                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1648 "parser.tab.c"
    break;

  case 39: /* comando_else: %empty  */
#line 275 "parser.y"
                                                                                        {(yyval.arvore) = NULL;}
#line 1654 "parser.tab.c"
    break;

  case 40: /* comando_while: TK_PR_WHILE '(' expressao ')' bloco_de_comandos  */
#line 283 "parser.y"
                                                                {(yyval.arvore) = ast_new("while");
																(yyval.arvore) = ast_add_child(ast_add_child((yyval.arvore), (yyvsp[-2].arvore)), (yyvsp[0].arvore));}
#line 1661 "parser.tab.c"
    break;

  case 41: /* expressao: expressao_or  */
#line 297 "parser.y"
                                                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1667 "parser.tab.c"
    break;

  case 42: /* expressao_or: expressao_or TK_OC_OR expressao_and  */
#line 299 "parser.y"
                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("|"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1673 "parser.tab.c"
    break;

  case 43: /* expressao_or: expressao_and  */
#line 300 "parser.y"
                                                                                                        {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1679 "parser.tab.c"
    break;

  case 44: /* expressao_and: expressao_and TK_OC_AND expressao_eq_ne  */
#line 302 "parser.y"
                                                                {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("&"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1685 "parser.tab.c"
    break;

  case 45: /* expressao_and: expressao_eq_ne  */
#line 303 "parser.y"
                                                                                                        {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1691 "parser.tab.c"
    break;

  case 46: /* expressao_eq_ne: expressao_eq_ne TK_OC_EQ expressao_comparativa  */
#line 305 "parser.y"
                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("=="), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1697 "parser.tab.c"
    break;

  case 47: /* expressao_eq_ne: expressao_eq_ne TK_OC_NE expressao_comparativa  */
#line 306 "parser.y"
                                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("!="), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1703 "parser.tab.c"
    break;

  case 48: /* expressao_eq_ne: expressao_comparativa  */
#line 307 "parser.y"
                                                                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1709 "parser.tab.c"
    break;

  case 49: /* expressao_comparativa: expressao_comparativa TK_OC_LE expressao_soma_sub  */
#line 309 "parser.y"
                                                                         {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("<="), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1715 "parser.tab.c"
    break;

  case 50: /* expressao_comparativa: expressao_comparativa TK_OC_GE expressao_soma_sub  */
#line 310 "parser.y"
                                                                                             {(yyval.arvore) = ast_add_child(ast_add_child(ast_new(">="), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1721 "parser.tab.c"
    break;

  case 51: /* expressao_comparativa: expressao_comparativa '>' expressao_soma_sub  */
#line 311 "parser.y"
                                                                                                 {(yyval.arvore) = ast_add_child(ast_add_child(ast_new(">"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1727 "parser.tab.c"
    break;

  case 52: /* expressao_comparativa: expressao_comparativa '<' expressao_soma_sub  */
#line 312 "parser.y"
                                                                                                 {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("<"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1733 "parser.tab.c"
    break;

  case 53: /* expressao_comparativa: expressao_soma_sub  */
#line 313 "parser.y"
                                                                                                                         {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1739 "parser.tab.c"
    break;

  case 54: /* expressao_soma_sub: expressao_soma_sub '+' expressao_div_mult  */
#line 315 "parser.y"
                                                                {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("+"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1745 "parser.tab.c"
    break;

  case 55: /* expressao_soma_sub: expressao_soma_sub '-' expressao_div_mult  */
#line 316 "parser.y"
                                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("-"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1751 "parser.tab.c"
    break;

  case 56: /* expressao_soma_sub: expressao_div_mult  */
#line 317 "parser.y"
                                                                                                        {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1757 "parser.tab.c"
    break;

  case 57: /* expressao_div_mult: expressao_div_mult '*' expressao_unaria  */
#line 319 "parser.y"
                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("*"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1763 "parser.tab.c"
    break;

  case 58: /* expressao_div_mult: expressao_div_mult '/' expressao_unaria  */
#line 320 "parser.y"
                                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("/"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1769 "parser.tab.c"
    break;

  case 59: /* expressao_div_mult: expressao_div_mult '%' expressao_unaria  */
#line 321 "parser.y"
                                                                                        {(yyval.arvore) = ast_add_child(ast_add_child(ast_new("%"), (yyvsp[-2].arvore)),(yyvsp[0].arvore));}
#line 1775 "parser.tab.c"
    break;

  case 60: /* expressao_div_mult: expressao_unaria  */
#line 322 "parser.y"
                                                                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1781 "parser.tab.c"
    break;

  case 61: /* expressao_unaria: '-' expressao_unaria  */
#line 324 "parser.y"
                                                {(yyval.arvore) = ast_add_child(ast_new("-"), (yyvsp[0].arvore));}
#line 1787 "parser.tab.c"
    break;

  case 62: /* expressao_unaria: '!' expressao_unaria  */
#line 325 "parser.y"
                                                                {(yyval.arvore) = ast_add_child(ast_new("!"), (yyvsp[0].arvore));}
#line 1793 "parser.tab.c"
    break;

  case 63: /* expressao_unaria: valor  */
#line 326 "parser.y"
                                                                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1799 "parser.tab.c"
    break;

  case 64: /* valor: TK_IDENTIFICADOR  */
#line 329 "parser.y"
                        {(yyval.arvore) = ast_new((yyvsp[0].valor).token_value);}
#line 1805 "parser.tab.c"
    break;

  case 65: /* valor: TK_LIT_FLOAT  */
#line 330 "parser.y"
                                {(yyval.arvore) = ast_new((yyvsp[0].valor).token_value);}
#line 1811 "parser.tab.c"
    break;

  case 66: /* valor: TK_LIT_INT  */
#line 331 "parser.y"
                                {(yyval.arvore) = ast_new((yyvsp[0].valor).token_value);}
#line 1817 "parser.tab.c"
    break;

  case 67: /* valor: TK_LIT_FALSE  */
#line 332 "parser.y"
                                {(yyval.arvore) = ast_new((yyvsp[0].valor).token_value);}
#line 1823 "parser.tab.c"
    break;

  case 68: /* valor: TK_LIT_TRUE  */
#line 333 "parser.y"
                                {(yyval.arvore) = ast_new((yyvsp[0].valor).token_value);}
#line 1829 "parser.tab.c"
    break;

  case 69: /* valor: chamada_funcao  */
#line 334 "parser.y"
                                {(yyval.arvore) = (yyvsp[0].arvore);}
#line 1835 "parser.tab.c"
    break;

  case 70: /* valor: '(' expressao ')'  */
#line 335 "parser.y"
                            {(yyval.arvore) = (yyvsp[-1].arvore);}
#line 1841 "parser.tab.c"
    break;


#line 1845 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 338 "parser.y"



void yyerror(const char* mensagem){

	printf("\nError on line %d: %s\n", yylineno, mensagem);
}

void exporta(void *arvore){

	ast* _arvore = (ast*)arvore;

	if(_arvore == NULL) return;

	int i;
	for(i=0;i<_arvore->number_of_children;i++){
		printf("%p, %p\n", _arvore, _arvore->children[i]);
	}
	printf("%p [label=\"%s\"];\n", _arvore, _arvore->label);
	for(i=0;i<_arvore->number_of_children;i++){
		exporta(_arvore->children[i]);
	}


}
