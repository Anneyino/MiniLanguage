	// output file definitions
%option outfile="scanner.cpp" 
	//lexical scanner header file
%option header-file="scanner.h"

	// define reentrant scanner
%option 8bit reentrant noyywrap

	// we are going to use stack frame for "include" feature 
%option stack

%option warn nodefault

	// to interface with bison for reentrant parser
	// and scanner
%option bison-bridge bison-locations

	// line number tracking
%option yylineno

	// our own parse tree data type
%option extra-type="ScannerParserCL*"

	// these options are for windows compatibility
%option always-interactive
%option nounistd

	// put this block at the top of the 
	// generated scanner

	// for interface with bison
	// %option bison-bridge
	// %option bison-locations

%top{

	// this macro definition is for windows compatibility
#define YY_NO_UNISTD_H

	#pragma warning( disable: 4005)

	#include <iostream>
	#include <cmath>
	#include <cstring>
	
	using namespace std;

	#include "analyzer.h"
	#include "ScannerParserCL.h"
}


NUMB    ([0-9]+\.[0-9]+)
INTEGER	  ([0-9]+)
COM  ("/\*").*("\*/")
STR  \"([^\"&^\n])*\"
%%
"int"          {printf("Line:%d | Lex12(keyword)-->int\n\n",lineNumber);return INT_TYPE;}
"float"        {printf("Line:%d | Lex12(keyword)-->float\n\n",lineNumber);return FLOAT_TYPE;}
"double"	   {printf("Line:%d | Lex12(keyword)-->double\n\n",lineNumber);return DOUBLE_TYPE;}
"bool"         {printf("Line:%d | Lex12(keyword)-->bool\n\n",lineNumber);return BOOL_TYPE;}
"string"       {printf("Line:%d | Lex12(keyword)-->string\n\n",lineNumber);return STRING_TYPE;}
"function"     {printf("Line:%d | Lex12(keyword)-->function\n\n",lineNumber);return FUNCTION;}
"if"           {printf("Line:%d | Lex12(keyword)-->if\n\n",lineNumber);return IF;}
"else"         {printf("Line:%d | Lex12(keyword)-->else\n\n",lineNumber);return ELSE;}
"elseif"       {printf("Line:%d | Lex12(keyword)-->elseif\n\n",lineNumber);return ELSIF;}
"while"        {printf("Line:%d | Lex12(keyword)-->while\n\n",lineNumber);return WHILE;}
"for"          {printf("Line:%d | Lex12(keyword)-->for\n\n",lineNumber);return FOR;}
"return"	   {printf("Line:%d | Lex12(keyword)-->return\n\n",lineNumber);return RETURN_T;}
"break"        {printf("Line:%d | Lex12(keyword)-->break\n\n",lineNumber);return BREAK;}
"continue"     {printf("Line:%d | Lex12(keyword)-->continue\n\n",lineNumber);return CONTINUE;}
"null"         {printf("Line:%d | Lex12(keyword)-->null\n\n",lineNumber);return NULL_T;}
"true"         {printf("Line:%d | Lex12(keyword)-->true\n\n",lineNumber); yylval->bool_value = true; return TRUE_T;}
"false"        {printf("Line:%d | Lex12(keyword)-->false\n\n",lineNumber); yylval->bool_value = false; return FALSE_T;}
"global"       {printf("Line:%d | Lex12(keyword)-->global\n\n",lineNumber);return GLOBAL_T;}
"("            {printf("Line:%d | Lex10(operand)-->(\n\n",lineNumber);return LP;}
")"            {printf("Line:%d | Lex10(operand)-->)\n\n",lineNumber);return RP;}
"{"            {printf("Line:%d | Lex13(bracket)-->{\n\n",lineNumber);return LC;}
"}"            {printf("Line:%d | Lex13(bracket)-->}\n\n",lineNumber);return RC;}
";"            {printf("Line:%d | Lex14(punctuation)-->;\n\n",lineNumber);return SEMICOLON;}
","            {printf("Line:%d | Lex14(punctuation)-->,\n\n",lineNumber);return COMMA;}
"\""            {printf("Line:%d | Lex14(punctuation)-->\"\n\n",lineNumber);return DQ_MARK;}
"!"            {printf("Line:%d | Lex14(LogicOp)-->!\n\n",lineNumber);return EXC_MARK;}
"&&"           {printf("Line:%d | Lex11(LogicOp)-->&&\n\n",lineNumber);return LOGICAL_AND;}
"||"           {printf("Line:%d | Lex11(LogicOp)-->||\n\n",lineNumber);return LOGICAL_OR;}
"="            {printf("Line:%d | Lex10(Operand)-->=\n\n",lineNumber);return ASSIGN;}
"=="           {printf("Line:%d | Lex11(LogicOp)-->==\n\n",lineNumber);return EQ;}
"!="           {printf("Line:%d | Lex11(LogicOp)-->!=\n\n",lineNumber);return NE;}
">"            {printf("Line:%d | Lex11(LogicOp)-->>\n\n",lineNumber);return GT;}
">="           {printf("Line:%d | Lex11(LogicOp)-->>=\n\n",lineNumber);return GE;}
"<"            {printf("Line:%d | Lex11(LogicOp)--><\n\n",lineNumber);return LT;}
"<="           {printf("Line:%d | Lex11(LogicOp)--><=\n\n",lineNumber);return LE;}
"+"            {printf("Line:%d | Lex10(Operand)-->+\n\n",lineNumber);return ADD;}
"-"            {printf("Line:%d | Lex10(Operand)-->-\n\n",lineNumber);return SUB;}
"*"            {printf("Line:%d | Lex10(Operand)-->*\n\n",lineNumber);return MUL;}
"/"            {printf("Line:%d | Lex10(Operand)-->/\n\n",lineNumber);return DIV;}
"%"            {printf("Line:%d | Lex10(Operand)-->%%\n\n",lineNumber);return MOD;}
"++"           {printf("Line:%d | Lex10(Operand)-->++\n\n",lineNumber);return INCREASE;}
"--"           {printf("Line:%d | Lex10(Operand)-->--\n\n",lineNumber);return DECREASE;}
"print"        {printf("Line:%d | Lex12(keyword)-->print\n\n",lineNumber);return PRINT_T;}
"say_hello" { printf("I am scanner, how are you doing?\n\n");
				return HELLO;}

{STR}  {
        printf("Line:%d | Lex03(String)-->%s\n\n",lineNumber,yytext);
		yyextra->copy_string(&yylval->cstr, yytext);
		return STR_VAL;
}
{COM}  {
        printf("Line:%d | Lex08(Comments)-->%s\n\n",lineNumber,yytext);
		return COMMENT;
}

[0-9]+[A-Za-z_]+.* {
                printf("Line:%d | unexpected identifier %s\n\n",lineNumber,yytext);
}

{NUMB} {        

				printf("Line:%d | Lex06(FloatNum)-->%s\n\n",lineNumber,yytext);

				yyextra->copy_double(yylval->double_value, yytext);

				return NUM;

}
{INTEGER} {
                printf("Line:%d | Lex06(IntNum)-->%s\n\n",lineNumber,yytext);

				yyextra->copy_double(yylval->double_value, yytext);

				return NUM;
}


[\n]			{ lineNumber++; return '\n';}
[ \t]			{ /* empty */ }
[A-Za-z_][A-Za-z_0-9]* {
				printf("Line:%d | Lex13(Identifier)-->%s\n\n",lineNumber,yytext);
				yyextra->copy_cstr(&yylval->cstr, yytext);
				return IDENTIFIER;
}
.				{ printf("Line:%d | unexpected character %s\n\n",lineNumber,yytext); }
%%
