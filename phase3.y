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
    
Function: FUNCTION FuncIdent SEMICOLON BEGINPARAMS declarations ENDPARAMS BEGINLOCALS declarations ENDLOCALS BEGINBODY statements ENDBODY
    {
        std::string temp = "func ";
        temp.append($2.place);
        temp.append("\n");
        std::string s = $2.place;
        if( s == "main"){
            mainFunc = true;
        }
        temp.append($5.code);
        std::string decs = $5.code;
        int decNum = 0;
        while(decs.find(".") != std::string::npos){
            int pos = decs.find(".");
            decs.replace(pos, 1, "=");
            std::string part = ", $" + std::to_string(decNum) + "\n";
            decNum++;
            decs.replace(decs.find("\n", pos), 1, part);
        }
        temp.append(decs);

        temp.append($8.code);
        std::string statements = $11.code;
        if(statements.find("continue") != std::string::npos){
            printf("Error: Continue outside loop in function %s\n", $2.place);
        }
        temp.append(statements);
        temp.append("endfunc\n\n");
        printf(temp.c_str());
    }
    ;    
 
Declaration: IDENT COLON INTEGER
    {
        int left = 0;
        int right = 0;
        std::string parse($1.place);
        std::string temp;
        bool ex = false;
        while(!ex){
            right = parse.find("|", left);
            temp.append(".");
            if(right == std::string::npos){
                std::string ident = parse.substr(left, right);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                ex = true;
            }
            else{
                std::string ident = parse.substr(left, right - left);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    varTemp[ident] = ident;
                    arrSize[ident] = 1;
                }
                temp.append(ident);
                left = right + 1;
            }
            temp.append("\n");
        }
        $$.code = strdup(temp.c_str());
        $$.place = strdup("");
    }
    | IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
    {
        size_t left = 0;
        size_t right = 0;
        std::string parse($1.place);
        std::string temp;
        bool ex = false;
        while(!ex){
            right = parse.find("|", left);
            temp.append(".[]");
            if(right == std::string::npos){
                std::string ident = parse.substr(left, right);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    if($5 <= 0){
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = $5;
                }
                temp.append(ident);
                ex = true;
            }
            else{
                std::string ident = parse.substr(left, right - left);
                if(reserved.find(ident) != reserved.end()){
                    printf("Identifier %s's name is a reserved word, can't be used.\n", ident.c_str());
                }
                if(funcs.find(ident) != funcs.end() || varTemp.find(ident) != varTemp.end()){
                    printf("Identifier %s is previously declared.\n", ident.c_str());
                }
                else{
                    if($5 <= 0){
                        printf("Declaring array ident %s of size <= 0.\n", ident.c_str());
                    }
                    varTemp[ident] = ident;
                    arrSize[ident] = $5;
                }
                temp.append(ident);
                left = right + 1;
            }
            temp.append(", ");
            temp.append(std::to_string($5));
            temp.append("\n");
        }
        $$.code = strdup(temp.c_str());
        $$.place = strdup("");
    }
    ;
   
statements: statement SEMICOLON statements
    {
        std::string temp;
        temp.append($1.code);
        temp.append($3.code);
        $$.code = strdup(temp.c_str());
    }
    | statement SEMICOLON
    {
        $$.code = strdup($1.code);
    }
    ;

Ident: IDENT
    {
        $$.place = strdup($1);
        $$.code = strdup("");
    }
    ;
    
Idents: Ident
    {
        $$.place = strdup($1);
        $$.code = strdup("");
    }
    | Ident COMMA Idents
    {
        std::string temp;
        temp.append($1.place);
        temp.append("|");
        temp.append($3.place);
        $$.place = strdup(temp.c_str());
        $$.code = strdup("");
    }
    ; 

Bool_expr: relation_and_expr
    {
        $$.code = strdup($1.code);
        $$.place = strdup(1.place);
    }
    | relation_and_expr OR bool_expr
    {
        std::string temp;
        std::string dst = new_temp();
        temp.append($1.code);
        temp.append($3.code);
        temp += ". " + dst + "\n";
        temp += "|| " + dst + ", ";
        temp.append($1.place);
        temp.append(", ");
        temp.append($3.place);
        tmep.append("\n");
        $$.code = strdup(temp.c_str());
        $$.place = strdup(dst.c_str());
    }
    ;
    
    Relation_and_expr: Relation_expr_inv and Relation_and_expr
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append($1.code);
        temp.append($3.code);
        temp += ". " + dst + "\n" + "&& " + dst + ", " + $1.place + ", " + $3.place + "\n";
        $$.code = strdup(temp.c_str());
        $$.place = strdup(dst.c_str());
    }
    | Relation_expr_inv
    {
        $$.code = strdup($1.code);
        $$.place = strdup($1.place);
    }
    ;

Relation_expr_inv: NOT Relation_expr_inv
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append($2.code);
        temp += ". " + dst + "\n" + "! " + dst + ", " + $2.place + "\n";
        $$.code = strdup(temp.c_str());
        $$.place = strdup(dst.c_str());
    }
    | Relation_expr
    {
        $$.code = strdup($1.code);
        $$.place = strdup($1.place);
    }
    ;

Relation_expr: expression comp expression
    {
        std::string dst = new_temp();
        std::string temp;
        temp.append($1.code);
        temp.append($3.code);
        temp += ". " + dst + "\n" + $2.place + dst + ", " + $1.place + ", " + $3.place + "\n";
        $$.code = strdup(temp.c_str());
        $$.place = strdup(dst.c_str());
    }
    | TRUE
    {
        std::string temp;
        temp.append("1");
        $$.code = strdup("");
        $$.place = strdup(temp.c_str());
    }
    | FALSE
    {
        std::string temp;
        temp.append("0");
        $$.code = strdup("");
        $$.place = strdup(temp.c_str());
    }
    | L_PAREN bool_expr R_PAREN
    {
        $$.code = strdup($2.code);
        $$.place = strdup($2.place);
    }
    ;

Comp: EQ
    {
        $$.place = strdup("");
        $$.code = strdup("== ");
    }
    | NEQ
    {
        $$.place = strdup("");
        $$.code = strdup("!= ");
    }
    | LT
    {
        $$.place = strdup("");
        $$.code = strdup("< ");
    }
    | LTE
    {
        $$.place = strdup("");
        $$.code = strdup("<= ");
    }
    | GT
    {
        $$.place = strdup("");
        $$.code = strdup("> ");
    }
    | GTE
    {
        $$.place = strdup("");
        $$.code = strdup(">= ");
    }
    ;   

Vars: var
    {
        std::string temp;
        temp.append($1.code);
        if($1.arr){
            temp.append(".[]| ");
        }
        else{
            temp.append(".| ");
        }
        temp.append($1.place);
        temp.append("\n");
        $$.code = strdup(temp.c_str());
        $$.place = strdup("");
    }
    | var COMMA vars
    {
        std::string temp;
        temp.append($1.code);
        if($1.arr){
            temp.append(".[]| ");
        }
        else{
            temp.append(".| ");
        }
        temp.append($1.place);
        temp.append("\n");
        temp.append($3.place);
        $$.code = strdup(temp.c_str());
        $$.place = strdup("");
    };

Var: IDENT
    {
        std::string temp;
        std::string ident = $1.place;
        if(funcs.find(ident) == funcs.end() && varTemp.find(indent) == varTemp.end()){
            printf("Identifier %s is not declared.\n", ident.c_str());
        }
        else if(arrSize[ident] > 1){
            printf("Didn't provide index for the array Identifier %s.\n", ident.c_str());
        }
        $$.code = strdup("");
        $$.place = strdup(ident.c_str());
        $$.arr = false;
    }
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {
        std::string temp;
        std::string ident = $1.place;
        if(funcs.find(ident) == funcs.end() && varTemp.find(indent) == varTemp.end()){
            printf("Identifier %s is not declared.\n", ident.c_str());
        }
        else if(arrSize[ident] == 1){
            printf("Provided index for non-array Identifier %s.\n", ident.c_str());
        }
        temp.append($1.code);
        temp.append(", ");
        temp.append($3.place);
        $$.code = strdup($3.code);
        $$.place = strdup(temp.c_str());
        $$.arr = true;
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
