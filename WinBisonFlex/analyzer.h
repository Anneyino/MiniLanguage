/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 35 "analyzer.y" /* yacc.c:1909  */

	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>
	#include <sstream>

	#include "ScannerParserCL.h"
	using namespace std;

	typedef void* yyscan_t;

#line 59 "analyzer.h" /* yacc.c:1909  */

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
#line 76 "analyzer.y" /* yacc.c:1909  */
	int int_value;
	double double_value;
	bool bool_value;
	char* cstr;
	Node* node;
	TemplateNode* grammar_node;
	assign_statement* assign_ptr;

#line 131 "analyzer.h" /* yacc.c:1909  */
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
