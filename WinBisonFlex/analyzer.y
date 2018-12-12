	// generate header file
%defines "analyzer.h"

	// the parser implementation file name
%output "analyzer.cpp"

	// for errors location tracking support
%locations

	// bison debug message for developer
%verbose

	// Enable run-time trace
%define parse.trace

	// intructs bison to generate re-entrant parser
%define api.pure full

	// only multiple parsers' are used in the same project
	//%define api.prefix {TKN_}

	// provides verbose error messages about syntax error for users
%define parse.error verbose

	// additional call argument for lexer
	// this is a must-have for re-entrant scanner 
%param	{yyscan_t scanner}

	// for interaction with my own C++ class
%parse-param	{ScannerParserCL* pParseTree}

	// place this code at the top of 
	// generated bison implementation file, i.e., parser.cpp
%code requires
{
	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>
	#include <sstream>

	#include "ScannerParserCL.h"
	using namespace std;

	typedef void* yyscan_t;
}

	// this code block is used for declaration type and functions
	// that requires YYSTYPE, the symantic type
%code {

	// flex's data type
	typedef void* yyscan_t;

	extern int yylex(YYSTYPE*, YYLTYPE*, yyscan_t);
	//extern int lineNumber;

	void yyerror (YYLTYPE*, yyscan_t yyscanner, ScannerParserCL* pParseTree, const char*);
}

%initial-action
{
	/* code for initialization before parsing 
		code in this block is executed each time yyparse is called. */

		// for runtime debugging
		// yydebug = 1;
}

	// we are going to use
	// bison's newer semantic data type definitions
	// %define api.value.type union
%union
{	int int_value;
	double double_value;
	bool bool_value;
	char* cstr;
	Node* node;
	TemplateNode* grammar_node;
	assign_statement* assign_ptr;
}
	//%define api.value.type { double }

	// tokens are terminal symbol
	// terminal symbols are defined using %token, %left, %right, etc..

%token<double_value> NUM 
%token<cstr>STR_VAL
	// %token<int_value> INT_NUM
%token<cstr> IDENTIFIER
%token HELLO "hello msg"
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE STRING_TYPE
%token DQ_MARK EXC_MARK INCREASE DECREASE
%token PRINT_T COMMENT  
%token FUNCTION IF ELSE ELSIF WHILE FOR RETURN_T BREAK CONTINUE NULL_T
        LC RC SEMICOLON COMMA ASSIGN LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE MOD TRUE_T FALSE_T GLOBAL_T
%left SUB ADD
%left MUL DIV
%left LP RP


	// non-terminal symbols should be defined using %type in bison keyword
%type<node> math_statement
%type<assign_ptr> assign_statement
%type<bool_value> bool_statement
%type<grammar_node> while_statement
%type<grammar_node> for_statement
%type<grammar_node> if_statement
%type<grammar_node> function_definition
%type<grammar_node> function_employ
%type<grammar_node> return_statement
%type<grammar_node> TypeForParam
%type<grammar_node> block
%type<grammar_node> break_statement
%type<grammar_node> continue_statement
%type<grammar_node> lines
%type<grammar_node> line
%type<grammar_node> elsif
%type<grammar_node> elsif_list
%type<grammar_node> function_definition_list
%type<grammar_node> statement_list

	//%type<grammar_node> switchLines

	// for parser debugging and tracing use
	//%printer { fprintf(yyoutput, "--- %s", $$); } <cstr>

	// for destructors' to call when parser' stack unwinding
	// these routines are called only when error recovery by bison
	//%destructor { std::cout<<$$<<" is deleted"; delete[] $$; $$ = nullptr;  } <cstr>

%start program

%%
program: statement_list
	{
		TemplateNode* dummy_node = new TemplateNode("program");

		dummy_node->addChild($1);
		if(IsProgramCorrect){
		printGrammarTree(dummy_node);
		}
	}
	;



statement_list: statement_list lines 
	{
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild($1);
		return_node->addChild($2);
		$$ = return_node;

	}
	| lines
	{
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild($1);
		$$ = return_node;

	}
	| statement_list function_definition_list
	{
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild($1);
		return_node->addChild($2);
		$$ = return_node;
	}
    | function_definition_list
	{
		TemplateNode* return_node = new TemplateNode("statement_list");
		return_node->addChild($1);
		$$ = return_node;
	}
	;
	
line: switchLines{
		TemplateNode* switch_lines_node = new TemplateNode("newline");
		$$ = switch_lines_node;
		//$$ = nullptr;
}
	| math_statement		{ 
		pParseTree->makeTreeHead($1);
		if(IsProgramCorrect){
			cout << "Parsed: "<<$1->nodeType<<"="<<$1->value<<endl;
			pParseTree->printTree(pParseTree->getTreeHead());
		}

		std::ostringstream strs;
		strs << $1->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);
		$$ = math_statement_node;
}
	| assign_statement SEMICOLON 	{   
		pParseTree->storeAssign($1);

		TemplateNode* assign_statement_node = new TemplateNode("assign_statement");
		$$ = assign_statement_node;
}
    | bool_statement   {
		cout << "Bool Value: "<<$1<<endl;
		bool value = $1;
		TemplateNode* bool_node = nullptr;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}

		//TemplateNode* return_node = new TemplateNode("bool_statement");
		//return_node->addChild(bool_node);
		$$ = bool_node;

	}
	| while_statement  {
		cout<<"语法结构: while循环"<<endl;
		cout<<""<<endl;
		TemplateNode* while_statement_node = $1;
		$$ = while_statement_node;
	}
	| if_statement  {
	cout<<"语法结构: if判断"<<endl;
	cout<<""<<endl;
	}
	| for_statement  {
	cout<<"语法结构: for循环"<<endl;
	cout<<""<<endl;
	}
	| return_statement SEMICOLON   {
	cout<<"语法结构: return语句"<<endl;
	cout<<""<<endl;
	}
	| break_statement {
	cout<<"语法结构: break语句"<<endl;
	cout<<""<<endl;
	}
	| continue_statement {
	cout<<"语法结构: continue语句"<<endl;
	cout<<""<<endl;
	}
	| PRINT_T LP IDENTIFIER RP SEMICOLON { 
	pParseTree->printIdentifier($3); 
	TemplateNode* print_node = new TemplateNode("print");
	TemplateNode* lp_node = new TemplateNode("(");
	TemplateNode* identifier_node = new TemplateNode($3);
	TemplateNode* rp_node = new TemplateNode(")");

	TemplateNode* return_node = new TemplateNode("Print_statement");
	return_node->addChild(print_node);
	return_node->addChild(lp_node);
	return_node->addChild(identifier_node);
	return_node->addChild(rp_node);

	$$ = return_node;
	}
	| HELLO	{ pParseTree->SayHello("I am a parser!");}
	| error '\n'	{ IsProgramCorrect = false;yyerrok; }
	; 

	lines : line {
		TemplateNode* line_node = $1;

		//TemplateNode* return_node = new TemplateNode("lines");
		//return_node->addChild(line_node);
		$$ = line_node;
	}
	| lines line {
		TemplateNode* lines_node = $1;
		TemplateNode* line_node = $2;
		
		TemplateNode* return_node = new TemplateNode("statements");
		return_node->addChild(lines_node);
		return_node->addChild(line_node);
		$$ = return_node;

	}
	;

	function_definition_list : function_definition
	{
		TemplateNode* function_definition_node = $1;

		//TemplateNode* return_node = new TemplateNode("function_definition_list");
		//return_node->addChild(function_definition_node);
		$$ = function_definition_node;
	}
	| function_definition_list function_definition
	{
		TemplateNode* function_definition_list_node = $1;
		TemplateNode* function_definition_node = $2;
		
		TemplateNode* return_node = new TemplateNode("function_definition_list");
		return_node->addChild(function_definition_list_node);
		return_node->addChild(function_definition_node);
		$$ = return_node;
	}
	;


assign_statement: IDENTIFIER ASSIGN math_statement	{ 
		auto pAssign = pParseTree->getPAssign();
		$$ = pAssign->makeAssign($1, $3->value);
}      | IDENTIFIER ASSIGN STR_VAL{
        auto pAssign = pParseTree->getPAssign();
		$$ = pAssign->makeAssign($1, $3);
}

       |  IDENTIFIER ASSIGN function_employ{auto pAssign = pParseTree->getPAssign();$$ = pAssign->makeAssign($1, false); }
	   |  IDENTIFIER ASSIGN bool_statement {auto pAssign = pParseTree->getPAssign();$$ =pAssign->makeAssign($1, $3);}
	   |  IDENTIFIER INCREASE  {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    $$ = pAssign->makeAssign($1, value+1);
		} 

	   }
	   |  IDENTIFIER DECREASE  {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl;}
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    $$ = pAssign->makeAssign($1, value-1); 
		}
	   
	   }
	   ;
	


math_statement: NUM	{ 
		auto pMath = pParseTree->getPMath();
		$$ = pMath->makeNode( "number",$1);
}
	| IDENTIFIER	{
		auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; IsProgramCorrect = false; $$ = pMath->makeNode( $1, nan("string")); }
		else{ double value = 0; result.getValue(&value); $$ = pMath->makeNode( $1, value); }
}   
    | function_employ { $$ = 0;}
	| math_statement ADD math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value+$3->value, $1, $3, "+");}
	| math_statement SUB math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value-$3->value, $1, $3, "-");}
	| math_statement MUL math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value*$3->value, $1, $3, "*");}
	| math_statement DIV math_statement	{
		auto pMath = pParseTree->getPMath();
		double num = $3->value;
		if(num >=(-1e-6)&& num<=(1e-6)){ printf("Division by zero\n"); YYERROR; }
		else{ $$ = pMath->makeNode($1->value/$3->value, $1, $3, "/"); }
}
	| LP math_statement RP { auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($2->value, $2, "()"); }
	| SUB math_statement %prec LP {auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode(-$2->value, $2, "-");}
	;

	bool_statement: TRUE_T   {
	    $$ = true;
	}
	 |  FALSE_T   {
	    $$ = false; 
	}
	 |  math_statement GT math_statement	{

		$$ = $1 > $3;

}

     |  math_statement LT math_statement {

	    $$ = $1 < $3;

	 } 

	 |  math_statement EQ math_statement {

	    $$ = $1 == $3;

 	 }

	 |  math_statement GE math_statement {

	    $$ = $1 >= $3;

	 }

	 |  math_statement LE math_statement {

	    $$ = $1 <= $3;

	 } 

	 |  math_statement NE math_statement {

	    $$ = $1 != $3;

	 }

	 ;

	 TypeForParam
	 : INT_TYPE
	 {
		TemplateNode* int_type_node = new TemplateNode("int");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(int_type_node);
		$$ = return_node;
	 }
	 | FLOAT_TYPE
	 {
		TemplateNode* float_type_node = new TemplateNode("float");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(float_type_node);
		$$ = return_node;
	 }
	 | DOUBLE_TYPE
	 {
		TemplateNode* double_type_node = new TemplateNode("double");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(double_type_node);
		$$ = return_node;
	 }
	 | BOOL_TYPE
	 {
		TemplateNode* bool_type_node = new TemplateNode("bool");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(bool_type_node);
		$$ = return_node;
	 }
	 | STRING_TYPE
	 {
		TemplateNode* string_type_node = new TemplateNode("string");
		TemplateNode* return_node = new TemplateNode("datatype");
		return_node->addChild(string_type_node);
		$$ = return_node;
	 }
	 ;


	 function_definition
	 : FUNCTION IDENTIFIER LP TypeForParam IDENTIFIER RP switchLines block
	 {
		cout<<"语法结构: 函数定义--"<<$2<<endl;
		TemplateNode* function_node = new TemplateNode("function");
		TemplateNode* identifier_node_1 = new TemplateNode($2);
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* type_node = $4;
		TemplateNode* identifier_node_2 = new TemplateNode($5);
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $8;

		TemplateNode* return_node = new TemplateNode("function_definition");
		return_node->addChild(function_node);
		return_node->addChild(identifier_node_1);
		return_node->addChild(lp_node);
		return_node->addChild(type_node);
		return_node->addChild(identifier_node_2);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		$$ = return_node;
	 }
	 | FUNCTION IDENTIFIER LP RP block
	 {
		TemplateNode* function_node = new TemplateNode("function");
		TemplateNode* identifier_node = new TemplateNode($2);
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $5;

		TemplateNode* return_node = new TemplateNode("function_definition");
		return_node->addChild(function_node);
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		$$ = return_node;
	 };

	 function_employ
	 : IDENTIFIER LP math_statement RP
	 {
		TemplateNode* identifier_node = new TemplateNode($1);
		TemplateNode* lp_node = new TemplateNode("(");

		std::ostringstream strs;
		strs << $3->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);
		TemplateNode* rp_node = new TemplateNode(")");

		TemplateNode* return_node = new TemplateNode("function_employ");
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(math_statement_node);
		return_node->addChild(rp_node);

		$$ = return_node;
	 
	 }
	 | IDENTIFIER LP bool_statement RP
	 {
		TemplateNode* identifier_node = new TemplateNode($1);
		TemplateNode* lp_node = new TemplateNode("(");

		TemplateNode* bool_node = nullptr;
		bool value = $3;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");

		TemplateNode* return_node = new TemplateNode("function_employ");
		return_node->addChild(identifier_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);

		$$ = return_node;
	 
	 }
	 ;

	 return_statement
	 : RETURN_T math_statement
	 {
		TemplateNode* return_t_node = new TemplateNode("return");
		std::ostringstream strs;
		strs << $2->value;
		std::string str = strs.str();
		TemplateNode* math_statement_node = new TemplateNode(str);

		TemplateNode* return_node = new TemplateNode("return_statement");
		return_node->addChild(return_t_node);
		return_node->addChild(math_statement_node);
		$$ = return_node;
	 }
	 | RETURN_T bool_statement
	 {
		TemplateNode* return_t_node = new TemplateNode("return");
		TemplateNode* bool_node = nullptr;
		bool value = $2;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}

		TemplateNode* return_node = new TemplateNode("return_statement");
		return_node->addChild(return_t_node);
		return_node->addChild(bool_node);
		$$ = return_node;
	 }
	 ;

	 if_statement
	 : IF LP bool_statement RP switchLines block{
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = $3;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $6;

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);
		
		$$ = return_node;
	 }
	 | IF LP bool_statement RP switchLines block switchLines ELSE switchLines block{
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = $3;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node_1 = $6;
		TemplateNode* else_node = new TemplateNode("else");
		TemplateNode* block_node_2 = $10;

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node_1);
		return_node->addChild(else_node);
		return_node->addChild(block_node_2);
		
		$$ = return_node;
	 
	 }
	 | IF LP bool_statement RP switchLines block switchLines elsif_list 
	 {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = $3;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $6;
		TemplateNode* elsif_list_node = $8;

		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);
		return_node->addChild(elsif_list_node);
		
		$$ = return_node;
	 }
	 | IF LP bool_statement RP switchLines block switchLines elsif_list switchLines ELSE switchLines block
	 {
		TemplateNode* if_node = new TemplateNode("if");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* bool_node = nullptr;
		bool value = $3;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node_1 = $6;
		TemplateNode* elsif_list_node = $8;
		TemplateNode* else_node = new TemplateNode("else");
		TemplateNode* block_node_2 = $12;


		TemplateNode* return_node = new TemplateNode("if_statement");
		return_node->addChild(if_node);
		return_node->addChild(lp_node);
		return_node->addChild(bool_node);
		return_node->addChild(rp_node);
		return_node->addChild(block_node_1);
		return_node->addChild(elsif_list_node);
		return_node->addChild(else_node);
		return_node->addChild(block_node_2);
		
		$$ = return_node;
	 }
	 ;
	 
	 elsif_list
        : elsif
		{
			$$ = $1;
		}
        | elsif_list elsif
        {
           TemplateNode* elsif_list_node = $1;
		   TemplateNode* elsif_node = $2;

		   TemplateNode* return_node = new TemplateNode("elsif_list_statement");
		   return_node->addChild(elsif_list_node);
		   return_node->addChild(elsif_node);

		   $$ = return_node;
        }
        ;


     elsif
        : ELSIF LP bool_statement RP switchLines block switchLines
        {
           TemplateNode* elseif_node = new TemplateNode("elseif");
		   TemplateNode* lp_node = new TemplateNode("(");
		   TemplateNode* bool_node = nullptr;
		   bool value = $3;
		   if(value){
			   bool_node = new TemplateNode("true");
		   }
		   else{
			   bool_node = new TemplateNode("false");
		   }
		   TemplateNode* rp_node = new TemplateNode(")");
		   TemplateNode* block_node = $6;

		   TemplateNode* return_node = new TemplateNode("elseif_statement");
		   return_node->addChild(elseif_node);
		   return_node->addChild(lp_node);
		   return_node->addChild(bool_node);
		   return_node->addChild(rp_node);
		   return_node->addChild(block_node);

		   $$ = return_node;
        }
        ;


	 while_statement
	 : WHILE LP bool_statement RP switchLines block
	 {
		TemplateNode* while_node = new TemplateNode("while");
		TemplateNode* lp_node = new TemplateNode("(");
		bool value = $3;
		TemplateNode* bool_node = nullptr;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $6;
		
		TemplateNode* while_statement_node = new TemplateNode("while_statement");
		while_statement_node->addChild(while_node);
		while_statement_node->addChild(lp_node);
		while_statement_node->addChild(bool_node);
		while_statement_node->addChild(rp_node);
		while_statement_node->addChild(block_node);

		$$ = while_statement_node;
	 }
	 ;

	 for_statement
	 : FOR LP assign_statement SEMICOLON bool_statement SEMICOLON assign_statement RP switchLines block
	 {
		TemplateNode* for_node = new TemplateNode("for");
		TemplateNode* lp_node = new TemplateNode("(");
		TemplateNode* assign_statement_node_1 = new TemplateNode("assign_statement");
		
		TemplateNode* semicolon_node_1 = new TemplateNode(";");
		TemplateNode* bool_node = nullptr;
		bool value = $5;
		if(value){
			bool_node = new TemplateNode("true");
		}
		else{
			bool_node = new TemplateNode("false");
		}
		TemplateNode* semicolon_node_2 = new TemplateNode(";");
		TemplateNode* assign_statement_node_2 = new TemplateNode("assign_statement");
		TemplateNode* rp_node = new TemplateNode(")");
		TemplateNode* block_node = $10;

		TemplateNode* return_node = new TemplateNode("for_statement");
		return_node->addChild(for_node);
		return_node->addChild(lp_node);
		return_node->addChild(assign_statement_node_1);
		return_node->addChild(semicolon_node_1);
		return_node->addChild(bool_node);
		return_node->addChild(semicolon_node_2);
		return_node->addChild(assign_statement_node_2);
		return_node->addChild(rp_node);
		return_node->addChild(block_node);

		$$ = return_node;
	 }
     ;

	 switchLines: switchLines '\n'{lineNumber++;}
	   | '\n' {lineNumber++;}
	   | %empty

	 block
        : LC lines RC
        {
           TemplateNode* lc_node = new TemplateNode("{");
		   TemplateNode* lines_node = $2;
		   TemplateNode* rc_node = new TemplateNode("}");

		   TemplateNode* block_node = new TemplateNode("block");
		   block_node->addChild(lc_node);
		   block_node->addChild(lines_node);
		   block_node->addChild(rc_node);
		   $$ = block_node;

        }
        | LC RC
        {
           TemplateNode* lc_node = new TemplateNode("{");
		   TemplateNode* rc_node = new TemplateNode("}");

		   TemplateNode* block_node = new TemplateNode("block");
		   block_node->addChild(lc_node);
		   block_node->addChild(rc_node);
		   $$ = block_node;
        }
        ;
     break_statement
	 : BREAK SEMICOLON 
	 {
		TemplateNode* break_node = new TemplateNode("break");
		TemplateNode* semicolon_node = new TemplateNode(";");

		TemplateNode* return_node = new TemplateNode("break_statement");
		return_node->addChild(break_node);
		return_node->addChild(semicolon_node);
		$$ = return_node;
	 }
	 
	 continue_statement
	 : CONTINUE SEMICOLON 
	 {
		TemplateNode* continue_node = new TemplateNode("continue");
		TemplateNode* semicolon_node = new TemplateNode(";");

		TemplateNode* return_node = new TemplateNode("continue_statement");
		return_node->addChild(continue_node);
		return_node->addChild(semicolon_node);
		$$ = return_node;
	 }

%%

// newer yyerror() function definition
// for use with reentant scanner and parser
// with location tracking
void yyerror (YYLTYPE *yylloc, yyscan_t yyscanner,
	 ScannerParserCL* pParseTree, const char* msg)
{
	std::cout<<"Line:"<<lineNumber<<" Error - "<<msg<<std::endl;
}