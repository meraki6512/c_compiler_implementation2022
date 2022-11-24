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
#line 1 "kim.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "type.h"
#include <stdio.h>
#include <stdlib.h>

void yyerror(char* s);
int yywrap(void);
int yylex (void);

extern int line_no, syntax_err;
extern char *yytext;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

extern A_NODE *makeNode(NODE_NAME, A_NODE*, A_NODE*, A_NODE*);
extern A_NODE *makeNodeList(NODE_NAME, A_NODE*, A_NODE*);
extern A_ID *makeIdentifier(char*);
extern A_ID *makeDummyIdentifier();
extern A_TYPE *makeType(T_KIND);
extern A_SPECIFIER *makeSpecifier(A_TYPE*, S_KIND);
//extern A_ID *searchIdentifier(char*, A_ID*);
//extern A_ID *searchIdentifierAtCurrentLevel(char*, A_ID*);
extern A_SPECIFIER *updateSpecifier(A_SPECIFIER*, A_TYPE*, S_KIND);
extern void checkForwardReference();
//extern void setDefaultSpecifier(A_SPECIFIER*);
extern A_ID *linkDeclaratorList(A_ID*, A_ID*);
extern A_ID *getIdentifierDeclared(char*);
extern A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND, char*, ID_KIND);
extern A_ID *setDeclaratorInit(A_ID*, A_NODE*);
extern A_ID *setDeclaratorKind(A_ID*, ID_KIND);
extern A_ID *setDeclaratorType(A_ID*, A_TYPE*);
extern A_ID *setDeclaratorElementType(A_ID*, A_TYPE*);
//extern A_ID *setDeclaratorTypeAndKind(A_ID*, A_TYPE*, ID_KIND);
extern A_ID *setDeclaratorListSpecifier(A_ID*, A_SPECIFIER*);
extern A_ID *setFunctionDeclaratorSpecifier(A_ID*, A_SPECIFIER*);
extern A_ID *setFunctionDeclaratorBody(A_ID*, A_NODE*);
extern A_ID *setParameterDeclaratorSpecifier(A_ID*, A_SPECIFIER*);
extern A_ID *setStructDeclaratorListSpecifier(A_ID*, A_TYPE*);
extern A_TYPE *setTypeNameSpecifier(A_TYPE*, A_SPECIFIER*);
extern A_TYPE *setTypeElementType(A_TYPE*, A_TYPE*);
extern A_TYPE *setTypeField(A_TYPE*, A_ID*);
extern A_TYPE *setTypeExpr(A_TYPE*, A_NODE*);
//extern A_TYPE *setTypeAndKindOfDeclarator(A_TYPE*, ID_KIND, A_ID*);
extern A_TYPE *setTypeStructOrEnumIdentifier(T_KIND, char*, ID_KIND);
//extern BOOLEAN isNotSameFormalParameters(A_ID*, A_ID*);
//extern BOOLEAN isNotSameType(A_TYPE*, A_TYPE*);
//extern BOOLEAN isPointerOrArrayType(A_TYPE*);
//extern void syntax_error(int i, char* s);
extern void initialize();


#line 127 "y.tab.c"

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
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    FLOAT_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    PLUS = 263,
    MINUS = 264,
    PLUSPLUS = 265,
    MINUSMINUS = 266,
    BAR = 267,
    AMP = 268,
    BARBAR = 269,
    AMPAMP = 270,
    ARROW = 271,
    SEMICOLON = 272,
    LSS = 273,
    GTR = 274,
    LEQ = 275,
    GEQ = 276,
    EQL = 277,
    NEQ = 278,
    DOTDOTDOT = 279,
    LP = 280,
    RP = 281,
    LB = 282,
    RB = 283,
    LR = 284,
    RR = 285,
    PERIOD = 286,
    COMMA = 287,
    EXCL = 288,
    STAR = 289,
    SLASH = 290,
    PERCENT = 291,
    ASSIGN = 292,
    COLON = 293,
    AUTO_SYM = 294,
    STATIC_SYM = 295,
    TYPEDEF_SYM = 296,
    STRUCT_SYM = 297,
    ENUM_SYM = 298,
    SIZEOF_SYM = 299,
    UNION_SYM = 300,
    IF_SYM = 301,
    ELSE_SYM = 302,
    WHILE_SYM = 303,
    DO_SYM = 304,
    FOR_SYM = 305,
    CONTINUE_SYM = 306,
    BREAK_SYM = 307,
    RETURN_SYM = 308,
    SWITCH_SYM = 309,
    CASE_SYM = 310,
    DEFAULT_SYM = 311,
    PRINT_SYM = 312,
    CONST_SYM = 313,
    GOTO_SYM = 314,
    NOT = 315,
    STRING_LITERAL = 316,
    QUEST_MARK = 317
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define PLUS 263
#define MINUS 264
#define PLUSPLUS 265
#define MINUSMINUS 266
#define BAR 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311
#define PRINT_SYM 312
#define CONST_SYM 313
#define GOTO_SYM 314
#define NOT 315
#define STRING_LITERAL 316
#define QUEST_MARK 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   456

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    65,    66,    69,    70,    73,    73,    74,
      74,    77,    78,    81,    82,    85,    88,    89,    90,    91,
      94,    95,    96,    99,   100,   103,   104,   107,   108,   111,
     112,   115,   116,   119,   120,   121,   124,   124,   124,   125,
     125,   125,   126,   129,   130,   133,   134,   137,   140,   141,
     144,   147,   147,   148,   148,   149,   152,   153,   156,   157,
     157,   160,   161,   164,   165,   168,   169,   170,   171,   171,
     174,   175,   178,   179,   182,   183,   186,   187,   190,   191,
     194,   195,   196,   199,   200,   201,   202,   203,   206,   207,
     210,   211,   214,   215,   216,   217,   218,   219,   222,   223,
     226,   226,   229,   230,   233,   234,   235,   238,   239,   240,
     243,   246,   247,   250,   251,   252,   255,   256,   259,   260,
     263,   264,   267,   270,   273,   274,   277,   281,   282,   285,
     286,   289,   292,   295,   298,   299,   300,   303,   304,   305,
     306,   307,   310,   313,   314,   315,   318,   319,   320,   321,
     324,   325,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   341,   342,   343,   344,   345,   346,   347,   350,
     351,   352,   353,   354,   355,   358
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT", "PLUS",
  "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP",
  "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ",
  "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "PERIOD", "COMMA",
  "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON", "AUTO_SYM",
  "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM", "SIZEOF_SYM",
  "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM", "FOR_SYM",
  "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM", "CASE_SYM",
  "DEFAULT_SYM", "PRINT_SYM", "CONST_SYM", "GOTO_SYM", "NOT",
  "STRING_LITERAL", "QUEST_MARK", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     172,  -216,  -216,    38,    53,  -216,  -216,  -216,  -216,    41,
    -216,    93,   172,  -216,  -216,  -216,    38,    49,    49,  -216,
     112,  -216,  -216,    23,   118,    70,  -216,    95,    99,  -216,
    -216,   115,   108,  -216,    69,  -216,  -216,   121,   132,   141,
     118,  -216,   331,  -216,   153,   154,  -216,    38,    25,   141,
     156,  -216,  -216,  -216,    49,  -216,  -216,  -216,  -216,   331,
     331,   363,   363,   331,   318,   331,   331,   395,  -216,   145,
    -216,  -216,  -216,  -216,   178,   186,  -216,  -216,  -216,    33,
     210,  -216,    52,    76,  -216,   166,   216,  -216,   154,   168,
     116,  -216,  -216,   173,    25,  -216,  -216,  -216,  -216,    91,
      49,    96,   190,  -216,   192,  -216,  -216,  -216,  -216,   331,
    -216,  -216,  -216,   110,   208,   211,  -216,  -216,   318,  -216,
    -216,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,  -216,  -216,   215,   331,   331,
     233,   126,   201,  -216,   154,  -216,   130,    91,    38,    35,
    -216,   259,    49,  -216,    38,   138,   331,  -216,    18,  -216,
    -216,   144,  -216,   180,   391,   171,  -216,  -216,   331,   214,
     186,  -216,   210,   210,  -216,  -216,  -216,  -216,    76,    76,
    -216,  -216,  -216,  -216,  -216,   218,   213,  -216,   220,  -216,
    -216,   331,  -216,  -216,    25,    75,    10,  -216,  -216,  -216,
    -216,  -216,   217,   238,   259,   246,   256,   257,   331,   250,
     331,   243,   252,   259,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,   266,  -216,   260,   261,   262,   144,    49,   331,  -216,
    -216,  -216,  -216,  -216,   331,  -216,  -216,  -216,  -216,  -216,
      38,   331,   331,   237,   331,  -216,  -216,   272,  -216,   331,
     253,   259,  -216,  -216,  -216,  -216,  -216,  -216,   268,   267,
    -216,  -216,   271,   273,   275,   276,   281,  -216,   278,   259,
    -216,  -216,  -216,   259,   259,   331,   259,   331,   259,  -216,
     254,  -216,   280,  -216,   299,  -216,   259,   300,   331,  -216,
    -216,  -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   169,   171,   170,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
     121,   122,   123,   124,   126,   127,   129,   131,   132,   133,
     134,   137,   142,   143,   146,   150,   152,   162,     0,    58,
       0,    56,    26,    27,     0,    28,    29,     8,    37,     0,
      11,    78,     0,    71,    72,    74,   159,   150,   158,     0,
     153,   154,   155,    78,     0,     0,   157,   156,     0,   160,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,   168,     0,   116,     0,
       0,     0,     0,    54,     0,    31,     0,     0,     0,     0,
      45,    88,    12,    13,    23,    70,   120,    76,    80,    77,
      79,    81,    69,     0,    70,    80,   175,   174,     0,     0,
     128,   130,   135,   136,   138,   139,   140,   141,   144,   145,
     147,   148,   149,   125,   166,     0,   117,   118,     0,   165,
      52,     0,    57,    30,     0,     0,     0,    48,    50,    41,
      46,   102,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,    89,    90,    92,    93,    94,    95,    96,
      97,     0,    14,     0,     0,     0,    82,    70,   120,    73,
      75,   151,   161,   164,     0,   163,    60,    32,    38,    47,
       0,     0,     0,     0,   111,   114,   115,     0,   112,     0,
       0,     0,   101,    91,   103,    86,    83,    84,     0,     0,
     119,    49,     0,     0,     0,     0,     0,   113,     0,     0,
      99,    87,    85,     0,     0,     0,     0,   111,     0,    98,
     104,   107,     0,   109,     0,   106,     0,     0,   111,   105,
     108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,   306,  -216,  -216,  -216,  -216,  -216,   -77,
       7,  -216,  -216,  -216,   283,   -85,  -216,   -79,  -216,  -216,
    -216,  -216,  -216,  -216,   185,  -131,  -216,   105,  -216,  -216,
    -216,   231,   189,  -216,    -1,     0,   -20,  -216,   -53,  -216,
    -216,   183,   222,  -115,   -84,  -216,  -216,  -147,  -216,    -2,
    -216,  -216,  -216,  -216,  -216,  -215,  -216,  -216,  -216,  -143,
     -43,   -42,  -126,  -216,  -216,   226,   227,  -216,  -216,  -216,
     -21,   152,  -216,    79,   -49,   128,  -216,  -216,   230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   151,   152,    15,
     101,    17,    31,    32,    33,    95,   146,    18,    19,    50,
     147,    38,    99,    20,   149,   150,   196,   197,    21,    44,
      28,    90,    91,   142,    22,    23,    24,    54,   223,   103,
     104,   105,   159,   160,   161,   212,   213,   214,   215,   216,
     100,   217,   218,   219,   265,   247,   220,   185,   186,    69,
      70,   221,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   102,    25,    40,    26,    96,    71,    16,   183,   145,
     106,   108,   187,   225,   112,    34,   116,   117,   200,    16,
     148,     1,   114,   153,    35,    36,     1,   239,    55,   266,
      56,    57,    58,    59,    60,    61,    62,    53,    63,     2,
     224,     1,   240,   155,    27,   156,    93,    97,     3,   224,
      64,    96,    71,     2,    94,   123,   124,   243,    65,    66,
     129,   130,   284,     3,   200,   199,   253,   114,   148,    67,
     148,   113,     4,   291,   226,   222,   114,     8,     9,     2,
      10,   226,   180,   181,   182,   259,    68,     4,     5,     6,
       7,     8,     9,    29,    10,     2,    43,   188,    -7,     1,
     157,   158,   172,   173,   270,   238,    48,   154,   260,   237,
     131,   132,   133,   165,    71,    37,   148,     8,     9,   231,
      10,   155,   279,   156,   -51,   113,   280,   281,    45,   283,
       4,   285,    46,     8,     9,   164,    10,   156,    40,   289,
      47,     1,     2,    41,     4,    42,   143,   198,   144,   236,
     -36,    96,    71,    93,    25,   158,   190,    89,   144,   154,
     193,    51,   194,   155,   165,   156,   248,   250,    71,   227,
      52,   228,     4,   120,   258,     1,     2,     5,     6,     7,
       8,     9,    88,    10,     2,    98,    71,   107,   107,   110,
     111,   107,   121,   107,   107,   119,   164,     3,   156,   262,
     263,   122,   248,   134,   229,   -59,     4,   268,   178,   179,
      48,     5,     6,     7,     8,     9,   162,    10,   184,     5,
       6,     7,     8,     9,   163,    10,   135,   136,   125,   126,
     127,   128,   137,   282,   167,   248,   189,   168,   191,   198,
     232,   138,   241,   139,   233,   234,   248,   140,   235,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,    55,   242,    56,    57,    58,    59,    60,    61,
      62,   244,    63,   245,   246,   249,   201,   174,   175,   176,
     177,   251,   252,   254,    64,   264,   255,   256,    52,   267,
     257,   269,    65,    66,   271,   272,   107,   273,   277,   274,
     275,   286,   276,    67,   278,   202,   287,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   288,   290,    30,   141,
      68,    55,     2,    56,    57,    58,    59,    60,    61,    62,
      92,    63,   195,   192,    55,   166,    56,    57,    58,    59,
      60,    61,    62,    64,    63,   261,   230,   170,   169,   171,
       0,    65,    66,     0,     0,     0,    64,     5,     6,     7,
       8,     9,    67,    10,    65,    66,    55,     0,    56,    57,
      58,    59,    60,    61,    62,    67,    63,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,    68,     0,     0,     2,    65,    66,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    67,    63,     0,
       0,     0,     0,     0,     0,     0,   164,     0,   156,     0,
     118,     0,     0,     0,    68,     4,     0,     0,    65,    66,
       5,     6,     7,     8,     9,     0,    10,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   134,    94,
      59,    60,   138,   156,    63,    16,    65,    66,   149,    12,
      99,     3,    64,   100,    17,    18,     3,    17,     3,   244,
       5,     6,     7,     8,     9,    10,    11,    39,    13,     4,
     155,     3,    32,    25,     3,    27,    47,    49,    25,   164,
      25,    94,    94,     4,    29,    22,    23,   204,    33,    34,
       8,     9,   277,    25,   195,    30,   213,   109,   147,    44,
     149,    64,    34,   288,   158,   152,   118,    42,    43,     4,
      45,   165,   131,   132,   133,   228,    61,    34,    39,    40,
      41,    42,    43,     0,    45,     4,    26,   139,    29,     3,
     101,   101,   123,   124,   251,    30,    37,   100,   234,   194,
      34,    35,    36,   113,   156,     3,   195,    42,    43,   168,
      45,    25,   269,    27,    29,   118,   273,   274,    29,   276,
      34,   278,    17,    42,    43,    25,    45,    27,   158,   286,
      32,     3,     4,    25,    34,    27,    30,   148,    32,   191,
      29,   194,   194,   154,   155,   155,    30,     3,    32,   152,
      30,    29,    32,    25,   164,    27,   208,   210,   210,    25,
      29,    27,    34,    28,   227,     3,     4,    39,    40,    41,
      42,    43,    29,    45,     4,    29,   228,    59,    60,    61,
      62,    63,    14,    65,    66,    67,    25,    25,    27,   241,
     242,    15,   244,    37,    24,    37,    34,   249,   129,   130,
      37,    39,    40,    41,    42,    43,    26,    45,     3,    39,
      40,    41,    42,    43,    32,    45,    10,    11,    18,    19,
      20,    21,    16,   275,    26,   277,     3,    26,    37,   240,
      26,    25,    25,    27,    26,    32,   288,    31,    28,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     3,    25,     5,     6,     7,     8,     9,    10,
      11,    25,    13,    17,    17,    25,    17,   125,   126,   127,
     128,    38,    30,    17,    25,    48,    26,    26,    29,    17,
      28,    38,    33,    34,    26,    28,   168,    26,    17,    26,
      25,    47,    26,    44,    26,    46,    26,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    17,    17,    12,    88,
      61,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      47,    13,   147,   144,     3,   113,     5,     6,     7,     8,
       9,    10,    11,    25,    13,   240,   163,   121,   118,   122,
      -1,    33,    34,    -1,    -1,    -1,    25,    39,    40,    41,
      42,    43,    44,    45,    33,    34,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    44,    13,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    61,    -1,    -1,     4,    33,    34,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    44,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,
      25,    -1,    -1,    -1,    61,    34,    -1,    -1,    33,    34,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    25,    34,    39,    40,    41,    42,    43,
      45,    64,    65,    66,    67,    72,    73,    74,    80,    81,
      86,    91,    97,    98,    99,    97,    98,     3,    93,     0,
      66,    75,    76,    77,    97,    73,    73,     3,    84,    69,
      99,    25,    27,    26,    92,    29,    17,    32,    37,    68,
      82,    29,    29,   112,   100,     3,     5,     6,     7,     8,
       9,    10,    11,    13,    25,    33,    34,    44,    61,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    29,     3,
      94,    95,    77,    97,    29,    78,   123,   112,    29,    85,
     113,    73,   101,   102,   103,   104,   137,   138,   137,    25,
     138,   138,   137,    73,   124,   141,   137,   137,    25,   138,
      28,    14,    15,    22,    23,    18,    19,    20,    21,     8,
       9,    34,    35,    36,    37,    10,    11,    16,    25,    27,
      31,    94,    96,    30,    32,    78,    79,    83,    80,    87,
      88,    70,    71,    72,    73,    25,    27,    97,    98,   105,
     106,   107,    26,    32,    25,    98,   105,    26,    26,   141,
     128,   129,   133,   133,   134,   134,   134,   134,   136,   136,
     137,   137,   137,   125,     3,   120,   121,   125,   124,     3,
      30,    37,    95,    30,    32,    87,    89,    90,    97,    30,
      88,    17,    46,    48,    49,    50,    51,    52,    53,    54,
      55,    56,   108,   109,   110,   111,   112,   114,   115,   116,
     119,   124,    72,   101,   106,   122,   107,    25,    27,    24,
     104,   137,    26,    26,    32,    28,   124,    78,    30,    17,
      32,    25,    25,   110,    25,    17,    17,   118,   124,    25,
     123,    38,    30,   110,    17,    26,    26,    28,   101,   122,
     125,    90,   124,   124,    48,   117,   118,    17,   124,    38,
     110,    26,    28,    26,    26,    25,    26,    17,    26,   110,
     110,   110,   124,   110,   118,   110,    47,    26,    17,   110,
      17,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    68,    67,    69,
      67,    70,    70,    71,    71,    72,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    82,    83,    81,    84,
      85,    81,    81,    86,    86,    87,    87,    88,    89,    89,
      90,    92,    91,    93,    91,    91,    94,    94,    95,    96,
      95,    97,    97,    98,    98,    99,    99,    99,   100,    99,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   111,   111,
     113,   112,   114,   114,   115,   115,   115,   116,   116,   116,
     117,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   124,   125,   125,   126,   127,   127,   128,
     128,   129,   130,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   134,   135,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   141
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     3,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     4,     4,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     3,     2
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
#line 62 "kim.y"
                            {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1748 "y.tab.c"
    break;

  case 3:
#line 65 "kim.y"
                                                     {yyval=yyvsp[0];}
#line 1754 "y.tab.c"
    break;

  case 4:
#line 66 "kim.y"
                                                                        {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1760 "y.tab.c"
    break;

  case 5:
#line 69 "kim.y"
                                                            {yyval=yyvsp[0];}
#line 1766 "y.tab.c"
    break;

  case 6:
#line 70 "kim.y"
                                                      {yyval=yyvsp[0];}
#line 1772 "y.tab.c"
    break;

  case 7:
#line 73 "kim.y"
                                                                     {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1778 "y.tab.c"
    break;

  case 8:
#line 73 "kim.y"
                                                                                                                                     {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1784 "y.tab.c"
    break;

  case 9:
#line 74 "kim.y"
                                                {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1790 "y.tab.c"
    break;

  case 10:
#line 74 "kim.y"
                                                                                                                                        {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1796 "y.tab.c"
    break;

  case 11:
#line 77 "kim.y"
                                        {yyval=NIL;}
#line 1802 "y.tab.c"
    break;

  case 12:
#line 78 "kim.y"
                                                           {yyval=yyvsp[0];}
#line 1808 "y.tab.c"
    break;

  case 13:
#line 81 "kim.y"
                                            {yyval=yyvsp[0];}
#line 1814 "y.tab.c"
    break;

  case 14:
#line 82 "kim.y"
                                                               {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1820 "y.tab.c"
    break;

  case 15:
#line 85 "kim.y"
                                                                             {yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1826 "y.tab.c"
    break;

  case 16:
#line 88 "kim.y"
                                                         {yyval=makeSpecifier(yyvsp[0], 0);}
#line 1832 "y.tab.c"
    break;

  case 17:
#line 89 "kim.y"
                                                                    {yyval=makeSpecifier(0, yyvsp[0]);}
#line 1838 "y.tab.c"
    break;

  case 18:
#line 90 "kim.y"
                                                                                  {yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1844 "y.tab.c"
    break;

  case 19:
#line 91 "kim.y"
                                                                                           {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1850 "y.tab.c"
    break;

  case 20:
#line 94 "kim.y"
                                                        {yyval=S_AUTO;}
#line 1856 "y.tab.c"
    break;

  case 21:
#line 95 "kim.y"
                                                        {yyval=S_STATIC;}
#line 1862 "y.tab.c"
    break;

  case 22:
#line 96 "kim.y"
                                                         {yyval=S_TYPEDEF;}
#line 1868 "y.tab.c"
    break;

  case 23:
#line 99 "kim.y"
                                                {yyval=makeDummyIdentifier();}
#line 1874 "y.tab.c"
    break;

  case 24:
#line 100 "kim.y"
                                                                       {yyval=yyvsp[0];}
#line 1880 "y.tab.c"
    break;

  case 25:
#line 103 "kim.y"
                                                        {yyval=yyvsp[0];}
#line 1886 "y.tab.c"
    break;

  case 26:
#line 104 "kim.y"
                                                                                     {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1892 "y.tab.c"
    break;

  case 27:
#line 107 "kim.y"
                                      {yyval=yyvsp[0];}
#line 1898 "y.tab.c"
    break;

  case 28:
#line 108 "kim.y"
                                                          {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1904 "y.tab.c"
    break;

  case 29:
#line 111 "kim.y"
                                       {yyval=makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1910 "y.tab.c"
    break;

  case 30:
#line 112 "kim.y"
                                            {yyval=yyvsp[-1];}
#line 1916 "y.tab.c"
    break;

  case 31:
#line 115 "kim.y"
                                            {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1922 "y.tab.c"
    break;

  case 32:
#line 116 "kim.y"
                                                                     {yyval=makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1928 "y.tab.c"
    break;

  case 33:
#line 119 "kim.y"
                                                {yyval=yyvsp[0];}
#line 1934 "y.tab.c"
    break;

  case 34:
#line 120 "kim.y"
                                               {yyval=yyvsp[0];}
#line 1940 "y.tab.c"
    break;

  case 35:
#line 121 "kim.y"
                                           {yyval=yyvsp[0];}
#line 1946 "y.tab.c"
    break;

  case 36:
#line 124 "kim.y"
                                                                    {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1952 "y.tab.c"
    break;

  case 37:
#line 124 "kim.y"
                                                                                                                              {yyval=current_id; current_level++;}
#line 1958 "y.tab.c"
    break;

  case 38:
#line 124 "kim.y"
                                                                                                                                                                                           {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1964 "y.tab.c"
    break;

  case 39:
#line 125 "kim.y"
                                                           {yyval=makeType(yyvsp[0]);}
#line 1970 "y.tab.c"
    break;

  case 40:
#line 125 "kim.y"
                                                                                 {yyval=current_id; current_level++;}
#line 1976 "y.tab.c"
    break;

  case 41:
#line 125 "kim.y"
                                                                                                                                              {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1982 "y.tab.c"
    break;

  case 42:
#line 126 "kim.y"
                                                                      {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1988 "y.tab.c"
    break;

  case 43:
#line 129 "kim.y"
                                      {yyval=T_STRUCT;}
#line 1994 "y.tab.c"
    break;

  case 44:
#line 130 "kim.y"
                                       {yyval=T_UNION;}
#line 2000 "y.tab.c"
    break;

  case 45:
#line 133 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 2006 "y.tab.c"
    break;

  case 46:
#line 134 "kim.y"
                                                                                        {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 2012 "y.tab.c"
    break;

  case 47:
#line 137 "kim.y"
                                                                                  {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 2018 "y.tab.c"
    break;

  case 48:
#line 140 "kim.y"
                                                            {yyval=yyvsp[0];}
#line 2024 "y.tab.c"
    break;

  case 49:
#line 141 "kim.y"
                                                                                           {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2030 "y.tab.c"
    break;

  case 50:
#line 144 "kim.y"
                                            {yyval=yyvsp[0];}
#line 2036 "y.tab.c"
    break;

  case 51:
#line 147 "kim.y"
                                                       {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 2042 "y.tab.c"
    break;

  case 52:
#line 147 "kim.y"
                                                                                                                                      {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 2048 "y.tab.c"
    break;

  case 53:
#line 148 "kim.y"
                                              {yyval=makeType(T_ENUM);}
#line 2054 "y.tab.c"
    break;

  case 54:
#line 148 "kim.y"
                                                                                           {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 2060 "y.tab.c"
    break;

  case 55:
#line 149 "kim.y"
                                                         {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 2066 "y.tab.c"
    break;

  case 56:
#line 152 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2072 "y.tab.c"
    break;

  case 57:
#line 153 "kim.y"
                                                              {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2078 "y.tab.c"
    break;

  case 58:
#line 156 "kim.y"
                             {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2084 "y.tab.c"
    break;

  case 59:
#line 157 "kim.y"
                               {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 2090 "y.tab.c"
    break;

  case 60:
#line 157 "kim.y"
                                                                                                              {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 2096 "y.tab.c"
    break;

  case 61:
#line 160 "kim.y"
                                            {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 2102 "y.tab.c"
    break;

  case 62:
#line 161 "kim.y"
                                     {yyval=yyvsp[0];}
#line 2108 "y.tab.c"
    break;

  case 63:
#line 164 "kim.y"
                {yyval=makeType(T_POINTER);}
#line 2114 "y.tab.c"
    break;

  case 64:
#line 165 "kim.y"
                          {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2120 "y.tab.c"
    break;

  case 65:
#line 168 "kim.y"
                                            {yyval=makeIdentifier(yyvsp[0]);}
#line 2126 "y.tab.c"
    break;

  case 66:
#line 169 "kim.y"
                                                    {yyval=yyvsp[-1];}
#line 2132 "y.tab.c"
    break;

  case 67:
#line 170 "kim.y"
                                                                                   {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2138 "y.tab.c"
    break;

  case 68:
#line 171 "kim.y"
                                                        {yyval=current_id; current_level++;}
#line 2144 "y.tab.c"
    break;

  case 69:
#line 171 "kim.y"
                                                                                                                     {checkForwardReference(); current_id=yyvsp[-2]; current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2150 "y.tab.c"
    break;

  case 70:
#line 174 "kim.y"
                                           {yyval=NIL;}
#line 2156 "y.tab.c"
    break;

  case 71:
#line 175 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2162 "y.tab.c"
    break;

  case 72:
#line 178 "kim.y"
                                                  {yyval=yyvsp[0];}
#line 2168 "y.tab.c"
    break;

  case 73:
#line 179 "kim.y"
                                                                   {yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2174 "y.tab.c"
    break;

  case 74:
#line 182 "kim.y"
                                                {yyval=yyvsp[0];}
#line 2180 "y.tab.c"
    break;

  case 75:
#line 183 "kim.y"
                                                                      {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2186 "y.tab.c"
    break;

  case 76:
#line 186 "kim.y"
                                                                           {yyval=setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2192 "y.tab.c"
    break;

  case 77:
#line 187 "kim.y"
                                                                                          {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2198 "y.tab.c"
    break;

  case 78:
#line 190 "kim.y"
                                           {yyval=NIL;}
#line 2204 "y.tab.c"
    break;

  case 79:
#line 191 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2210 "y.tab.c"
    break;

  case 80:
#line 194 "kim.y"
                                           {yyval=makeType(T_POINTER);}
#line 2216 "y.tab.c"
    break;

  case 81:
#line 195 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2222 "y.tab.c"
    break;

  case 82:
#line 196 "kim.y"
                                                                        {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2228 "y.tab.c"
    break;

  case 83:
#line 199 "kim.y"
                                                                            {yyval=yyvsp[-1];}
#line 2234 "y.tab.c"
    break;

  case 84:
#line 200 "kim.y"
                                                                                  {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2240 "y.tab.c"
    break;

  case 85:
#line 201 "kim.y"
                                                                                                             {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2246 "y.tab.c"
    break;

  case 86:
#line 202 "kim.y"
                                                                                  {yyval=setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2252 "y.tab.c"
    break;

  case 87:
#line 203 "kim.y"
                                                                                                             {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2258 "y.tab.c"
    break;

  case 88:
#line 206 "kim.y"
                                  {yyval=makeNode(N_STMT_LIST_NIL, NIL,NIL,NIL);}
#line 2264 "y.tab.c"
    break;

  case 89:
#line 207 "kim.y"
                                                   {yyval=yyvsp[0];}
#line 2270 "y.tab.c"
    break;

  case 90:
#line 210 "kim.y"
                                    {yyval=makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2276 "y.tab.c"
    break;

  case 91:
#line 211 "kim.y"
                                                     {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2282 "y.tab.c"
    break;

  case 92:
#line 214 "kim.y"
                                   {yyval=yyvsp[0];}
#line 2288 "y.tab.c"
    break;

  case 93:
#line 215 "kim.y"
                                      {yyval=yyvsp[0];}
#line 2294 "y.tab.c"
    break;

  case 94:
#line 216 "kim.y"
                                        {yyval=yyvsp[0];}
#line 2300 "y.tab.c"
    break;

  case 95:
#line 217 "kim.y"
                                       {yyval=yyvsp[0];}
#line 2306 "y.tab.c"
    break;

  case 96:
#line 218 "kim.y"
                                       {yyval=yyvsp[0];}
#line 2312 "y.tab.c"
    break;

  case 97:
#line 219 "kim.y"
                                  {yyval=yyvsp[0];}
#line 2318 "y.tab.c"
    break;

  case 98:
#line 222 "kim.y"
                                                                              {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2324 "y.tab.c"
    break;

  case 99:
#line 223 "kim.y"
                                                               {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2330 "y.tab.c"
    break;

  case 100:
#line 226 "kim.y"
                                     {yyval=current_id; current_level++;}
#line 2336 "y.tab.c"
    break;

  case 101:
#line 226 "kim.y"
                                                                                                                  {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2342 "y.tab.c"
    break;

  case 102:
#line 229 "kim.y"
                                                  {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2348 "y.tab.c"
    break;

  case 103:
#line 230 "kim.y"
                                                               {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2354 "y.tab.c"
    break;

  case 104:
#line 233 "kim.y"
                                                                     {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2360 "y.tab.c"
    break;

  case 105:
#line 234 "kim.y"
                                                                                          {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2366 "y.tab.c"
    break;

  case 106:
#line 235 "kim.y"
                                                                           {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2372 "y.tab.c"
    break;

  case 107:
#line 238 "kim.y"
                                                                        {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2378 "y.tab.c"
    break;

  case 108:
#line 239 "kim.y"
                                                                                           {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2384 "y.tab.c"
    break;

  case 109:
#line 240 "kim.y"
                                                                            {yyval=makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2390 "y.tab.c"
    break;

  case 110:
#line 243 "kim.y"
                                                                                           {yyval=makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2396 "y.tab.c"
    break;

  case 111:
#line 246 "kim.y"
                          {yyval=NIL;}
#line 2402 "y.tab.c"
    break;

  case 112:
#line 247 "kim.y"
                                       {yyval=yyvsp[0];}
#line 2408 "y.tab.c"
    break;

  case 113:
#line 250 "kim.y"
                                                              {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2414 "y.tab.c"
    break;

  case 114:
#line 251 "kim.y"
                                                   {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2420 "y.tab.c"
    break;

  case 115:
#line 252 "kim.y"
                                                {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2426 "y.tab.c"
    break;

  case 116:
#line 255 "kim.y"
                                           {yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2432 "y.tab.c"
    break;

  case 117:
#line 256 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2438 "y.tab.c"
    break;

  case 118:
#line 259 "kim.y"
                                                         {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2444 "y.tab.c"
    break;

  case 119:
#line 260 "kim.y"
                                                                                    {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2450 "y.tab.c"
    break;

  case 120:
#line 263 "kim.y"
                                           {yyval=NIL;}
#line 2456 "y.tab.c"
    break;

  case 121:
#line 264 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2462 "y.tab.c"
    break;

  case 122:
#line 267 "kim.y"
                                              {yyval=yyvsp[0];}
#line 2468 "y.tab.c"
    break;

  case 123:
#line 270 "kim.y"
                                        {yyval=yyvsp[0];}
#line 2474 "y.tab.c"
    break;

  case 124:
#line 273 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2480 "y.tab.c"
    break;

  case 125:
#line 274 "kim.y"
                                                                                         {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2486 "y.tab.c"
    break;

  case 126:
#line 277 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2492 "y.tab.c"
    break;

  case 127:
#line 281 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2498 "y.tab.c"
    break;

  case 128:
#line 282 "kim.y"
                                                                                               {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2504 "y.tab.c"
    break;

  case 129:
#line 285 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2510 "y.tab.c"
    break;

  case 130:
#line 286 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2516 "y.tab.c"
    break;

  case 131:
#line 289 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2522 "y.tab.c"
    break;

  case 132:
#line 292 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2528 "y.tab.c"
    break;

  case 133:
#line 295 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 2534 "y.tab.c"
    break;

  case 134:
#line 298 "kim.y"
                                                         {yyval=yyvsp[0];}
#line 2540 "y.tab.c"
    break;

  case 135:
#line 299 "kim.y"
                                                                                   {yyval=makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2546 "y.tab.c"
    break;

  case 136:
#line 300 "kim.y"
                                                                                   {yyval=makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2552 "y.tab.c"
    break;

  case 137:
#line 303 "kim.y"
                                                          {yyval=yyvsp[0];}
#line 2558 "y.tab.c"
    break;

  case 138:
#line 304 "kim.y"
                                                                                      {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2564 "y.tab.c"
    break;

  case 139:
#line 305 "kim.y"
                                                                                      {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2570 "y.tab.c"
    break;

  case 140:
#line 306 "kim.y"
                                                                                      {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2576 "y.tab.c"
    break;

  case 141:
#line 307 "kim.y"
                                                                                      {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2582 "y.tab.c"
    break;

  case 142:
#line 310 "kim.y"
                                                    {yyval=yyvsp[0];}
#line 2588 "y.tab.c"
    break;

  case 143:
#line 313 "kim.y"
                                                             {yyval=yyvsp[0];}
#line 2594 "y.tab.c"
    break;

  case 144:
#line 314 "kim.y"
                                                                                       {yyval=makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2600 "y.tab.c"
    break;

  case 145:
#line 315 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2606 "y.tab.c"
    break;

  case 146:
#line 318 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2612 "y.tab.c"
    break;

  case 147:
#line 319 "kim.y"
                                                                                                 {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2618 "y.tab.c"
    break;

  case 148:
#line 320 "kim.y"
                                                                                                  {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2624 "y.tab.c"
    break;

  case 149:
#line 321 "kim.y"
                                                                                                    {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2630 "y.tab.c"
    break;

  case 150:
#line 324 "kim.y"
                                            {yyval=yyvsp[0];}
#line 2636 "y.tab.c"
    break;

  case 151:
#line 325 "kim.y"
                                                             {yyval=makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2642 "y.tab.c"
    break;

  case 152:
#line 328 "kim.y"
                                                   {yyval=yyvsp[0];}
#line 2648 "y.tab.c"
    break;

  case 153:
#line 329 "kim.y"
                                                            {yyval=makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2654 "y.tab.c"
    break;

  case 154:
#line 330 "kim.y"
                                                              {yyval=makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2660 "y.tab.c"
    break;

  case 155:
#line 331 "kim.y"
                                                      {yyval=makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2666 "y.tab.c"
    break;

  case 156:
#line 332 "kim.y"
                                                       {yyval=makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2672 "y.tab.c"
    break;

  case 157:
#line 333 "kim.y"
                                                       {yyval=makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2678 "y.tab.c"
    break;

  case 158:
#line 334 "kim.y"
                                                        {yyval=makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2684 "y.tab.c"
    break;

  case 159:
#line 335 "kim.y"
                                                       {yyval=makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2690 "y.tab.c"
    break;

  case 160:
#line 336 "kim.y"
                                                              {yyval=makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2696 "y.tab.c"
    break;

  case 161:
#line 337 "kim.y"
                                                             {yyval=makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2702 "y.tab.c"
    break;

  case 162:
#line 341 "kim.y"
                                                     {yyval=yyvsp[0];}
#line 2708 "y.tab.c"
    break;

  case 163:
#line 342 "kim.y"
                                                                        {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2714 "y.tab.c"
    break;

  case 164:
#line 343 "kim.y"
                                                                                     {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2720 "y.tab.c"
    break;

  case 165:
#line 344 "kim.y"
                                                                         {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2726 "y.tab.c"
    break;

  case 166:
#line 345 "kim.y"
                                                                        {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2732 "y.tab.c"
    break;

  case 167:
#line 346 "kim.y"
                                                                {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2738 "y.tab.c"
    break;

  case 168:
#line 347 "kim.y"
                                                                  {yyval=makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2744 "y.tab.c"
    break;

  case 169:
#line 350 "kim.y"
                                             {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2750 "y.tab.c"
    break;

  case 170:
#line 351 "kim.y"
                                                     {yyval=makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2756 "y.tab.c"
    break;

  case 171:
#line 352 "kim.y"
                                                   {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2762 "y.tab.c"
    break;

  case 172:
#line 353 "kim.y"
                                                       {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2768 "y.tab.c"
    break;

  case 173:
#line 354 "kim.y"
                                                   {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2774 "y.tab.c"
    break;

  case 174:
#line 355 "kim.y"
                                                     {yyval=yyvsp[-1];}
#line 2780 "y.tab.c"
    break;

  case 175:
#line 358 "kim.y"
                                                                {yyval=setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2786 "y.tab.c"
    break;


#line 2790 "y.tab.c"

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
#line 361 "kim.y"

void yyerror(char* s){
	syntax_err++;
	printf("line %d: %s near %s\n", line_no, s, yytext);
	exit(1);
}

int yywrap(){
	return (1);
}

void main(){
	initialize();
	yyparse();
	print_ast(root);
}
