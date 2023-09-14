/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 130 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
