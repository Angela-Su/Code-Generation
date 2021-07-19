%{
    #define YY_NO_INPUT
    #include <stdio.h>
    #include <stdlib.h>
    #include <map>
    #include <string.h>
    #include <set>

int tempCount = 0;
int labelCount = 0;
extern char* yytext;
extern int currPos;
std::map<std::string, std::string> varTemp;
std::map<std::string, int> arrSize;
bool mainFunc = false;
std::set<std::string> funcs;
std::set<std::string> reserved{"NUMBER", "IDENT", "RETURN", "FUNCTION", "SEMICOLON", "BEGINPARAMS", "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "BEGINLOOP", "ENDLOOP", "COLON", "INTEGER",
    "COMMA", "ARRAY", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_PAREN", "R_PAREN", "IF", "ELSE", "THEN", "CONTINUE", "ENDIF", "OF", "READ", "WRITE", "DO", "WHILE", "FOR", "TRUE", "FALSE", "ASSIGN", "EQ", "NEQ",
    "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV", "MOD", "AND", "OR", "NOT", "function", "functions", "declaration", "declarations", "var", "vars", "expression", "expressions", "ident", "idents", 
    "bool_expr", "relation_and_expr", "relation_and_inv", "relation_expr", "comp", "multiplicative-expr", "term", "statement", "statements"};
void yyerror(const char* s);
int yylex();
std::string new_temp();
std::string new_label();
%}

%union{
    int num;
    char* ident;
    struct S{
        char* code;
    } statement;
    struct E{
        char* place;
        char *code;
        bool arr;
    } expression;
}

%start Program 
%token <num> NUMBER
%token <ident> IDENT

%type <expression> function FuncIdent declaration declarations var vars expression expressions ident idents
%type <expression> bool_expr relation_and_expr relation_and_inv relation_expr comp multiplicative-expr term
%type <statement> statement statements

%token RETURN FUNCTION SEMICOLON BEGINPARAMS ENDPARAMS BEGINLOCALS ENDLOCALS BEGINBODY ENDBODY 
%token COLON INTEGER ARRAY L_SQUARE_BRACKET R_SQUARE_BRACKET L_PAREN R_PAREN
%token IF ELSE THEN CONTINUE ENDIF OF READ WRITE DO WHILE FOR
%token TRUE FALSE

%left ASSIGN EQ NEQ LT LTE GT GTE ADD SUB MULT DIV MOD AND OR
$right NOT

%%

Program:    %empty
    {
        if (!mainFunc){
            printf("No main function was declared\n");
        }
    }
    | Function Program
    {
    }
    ;
    
Ident: IDENT
    {
        $$.place = strdup($1);
        $$.code = strdup("");
    }
    ;

Comp: EQ
    {
        $$.place = strdup("");
        $$.code = strdup("== ");
    }
    | NEQ
    {
        $$.place = strdup(");
        $$.code = strdup("!= ");
    }
    | LT
    {
        $$.place = strdup(");
        $$.code = strdup("< ");
    }
    | LTE
    {
        $$.place = strdup(");
        $$.code = strdup("<= ");
    }
    | GT
    {
        $$.place = strdup(");
        $$.code = strdup("> ");
    }
    | GTE
    {
        $$.place = strdup(");
        $$.code = strdup(">= ");
    }
    ;   

%%
void yyerror(const char* s)
{
    extern int yylineno;
    extern char **yytext;

        printf("%s on line %d at char %d at symbol \"%s\"\n", s, yylineno, num_columns, yytext);
        exit(1);
}

std::string new_temp(){
    std::string t = "t" + std::to_string(tempCount);
    tempCount++;
    return t;
}

std::string new_label(){
    std::string l = " L" + std::to_string(labelCount);
    labelCount++;
    return l;
}
