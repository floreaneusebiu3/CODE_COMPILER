/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 128 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
