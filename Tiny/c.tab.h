/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
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
    INT = 258,                     /* INT  */
    CHAR = 259,                    /* CHAR  */
    LBRACK = 260,                  /* LBRACK  */
    NAME = 261,                    /* NAME  */
    LPAR = 262,                    /* LPAR  */
    COMMA = 263,                   /* COMMA  */
    QCHAR = 264,                   /* QCHAR  */
    NUMBER = 265,                  /* NUMBER  */
    TIMES = 266,                   /* TIMES  */
    DIVIDE = 267,                  /* DIVIDE  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    RPAR = 270,                    /* RPAR  */
    RBRACK = 271,                  /* RBRACK  */
    LBRACE = 272,                  /* LBRACE  */
    ASSIGN = 273,                  /* ASSIGN  */
    LESS = 274,                    /* LESS  */
    EQUAL = 275,                   /* EQUAL  */
    GREATER = 276,                 /* GREATER  */
    NEQUAL = 277,                  /* NEQUAL  */
    NOT = 278,                     /* NOT  */
    RETURN = 279,                  /* RETURN  */
    LENGTH = 280,                  /* LENGTH  */
    WRITE = 281,                   /* WRITE  */
    READ = 282,                    /* READ  */
    WHILE = 283,                   /* WHILE  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    RBRACE = 286,                  /* RBRACE  */
    SEMICOLON = 287                /* SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "c.y"

	
	Node* node;
	char* strings;
	int intVal;

#line 103 "c.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */
