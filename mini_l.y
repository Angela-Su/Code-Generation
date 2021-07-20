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
    int num_val;
    char* id_val;
}
%error-verbose
%start prog_start
%token FUNCTION BEGINPARAMS ENDPARAMS BEGINLOCALS ENDLOCALS BEGINBODY ENDBODY INTEGER ARRAY ENUM OF IF THEN ENDIF ELSE WHILE FOR DO BEGINLOOP ENDLOOP CONTINUE READ WRITE TRUE FALSE SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN RETURN
%token <id_val> IDENT
%token <num_val> NUMBER
%right ASSIGN
%left OR
%left AND
%right NOT
%left LT LTE GT GTE EQ NEQ
%left ADD SUB
%left MULT DIV MOD
%%

/*prog_start: functions { printf("prog_start -> functions\n");}
        ;*/
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
functions: /*empty*/{printf("functions -> epsilon\n");}
            | function functions {printf("functions -> function functions\n");}
        ;
function: FUNCTION IDENT SEMICOLON BEGINPARAMS declarations ENDPARAMS BEGINLOCALS declarations ENDLOCALS BEGINBODY statements ENDBODY
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
        

declarations: /*empty*/{
                /*printf("declarations -> epsilon\n");*/
                $$.place = strdup("");
                $$.code = strdup("");
                }
            | declaration SEMICOLON declarations {
                /*printf("declarations -> declaration SEMICOLON declarations\n");*/
                std::string temp;
                temp.append($1.code);
                temp.append($3.code);
                $$.code = strdup(temp.c_str());
                $$.place=strdup("");
                }
            ;

declaration:        IDENT COLON INTEGER {printf("declaration -> IDENT COLON INTEGER\n");}
            | IDENT COMMA IDENT COLON INTEGER {printf("declaration -> IDENT COMMA IDENT COLON INTEGER\n");}
            | IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
            | IDENT COMMA IDENT COLON L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> IDENT COMMA IDENT COLON L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}        
        ;
        
statements: /*empty*/ {printf("statements -> epsilon\n");}
            | statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements\n");}
        ;
        
statement: var ASSIGN expression { printf("statement -> var ASSIGN expression\n");}
            | IF bool_expr THEN statements ENDIF {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
            | IF  bool_expr THEN statements ELSE statements ENDIF { printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
            | WHILE bool_expr BEGINLOOP statements ENDIF {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDIF\n");}
            | DO BEGINLOOP statements ENDLOOP WHILE bool_expr {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
            | FOR vars ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON vars ASSIGN expression BEGINLOOP statements ENDLOOP {printf("statement -> FOR vars ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON vars ASSIGN expression BEGINLOOP statements ENDLOOP");}
            | READ vars { printf("statement -> READ vars\n");}
            | WRITE vars { printf("statement -> WRITE vars\n");}
            | CONTINUE { printf("statement -> CONTINUE\n");}
            | RETURN expression {printf("statement -> RETURN expression\n");}
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


relation_and_expr:  relation_expr {printf("relation_and_expr -> relation_expr\n");}
            | relation_expr AND relation_expr {printf("relation_and_expr -> relation_expr AND relation_and_expr\n");}
            ;
relation_expr:      expression comp expression {printf("relation_expr -> expression comp expression\n");}
            | NOT expression comp expression {printf("relation_expr -> NOT expression comp expression\n");}
            | TRUE {printf("relation_expr -> TRUE\n");}
            | NOT TRUE {printf("relation_expr -> NOT TRUE\n");}
            | FALSE {printf("relation_expr -> FALSE\n");}
            | NOT FALSE {printf("relation_expr -> NOT FALSE\n");}
            | L_PAREN bool_expr R_PAREN {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
            | NOT L_PAREN bool_expr R_PAREN {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
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

expressions: expression COMMA expressions {printf("expressions -> expression COMMA expressions\n");}
            | expression {printf("expressions-> expression\n");}
            ;
expression: multiplicative-expr {printf("expression -> multiplicative-expr\n");}
            | multiplicative-expr ADD multiplicative-expr {
                std::string temp;
                std::string dst= new_temp();
                temp.append($1.code);
                temp.append($3.code);
                temp+=". " + dst + "\n";
                temp+= "+ " + dst + ", ";
                temp.append($1.place);
                temp+=", ";
                temp.append($3.place);
                temp+="\n";
                $$.code = strdup(temp.c_str());
                $$.place = strdup(dst.c_str());

            }
            | multiplicative-expr SUB multiplicative-expr {
                std::string temp;
                std::string dst= new_temp();
                temp.append($1.code);
                temp.append($3.code);
                temp+=". " + dst + "\n";
                temp+= "- " + dst + ", ";
                temp.append($1.place);
                temp+=", ";
                temp.append($3.place);
                temp+="\n";
                $$.code = strdup(temp.c_str());
                $$.place = strdup(dst.c_str());

            }
            ;
multiplicative-expr: term {
                    std::string temp;
                    std::string dst=new_temp();
                    temp.append($1.code);
                    temp.append($1.place);
                    $$.code = strdup(temp.c_str());
                    $$.place = strdup(temp.c_str()); /*went freeballing here, might need fixing*/
                    }
                    | term MULT multiplicative-expr {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append($1.code);
                        temp.append($3.code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="* " + dst + ", ";
                        temp.append($1.place);
                        temp+=", ";
                        temp.append($3.place);
                        temp+="\n";
                        $$.code = strdup(temp.c_str());
                        $$.place = strdup(dst.c_str());
                    }
                    | term DIV multiplicative-expr {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append($1.code);
                        temp.append($3.code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="/ " + dst + ", ";
                        temp.append($1.place);
                        temp+=", ";
                        temp.append($3.place);
                        temp+="\n";
                        $$.code = strdup(temp.c_str());
                        $$.place = strdup(dst.c_str());
                    }
                    | term MOD multiplicative-expr {
                        std::string temp;
                        std::string dst = new_temp();
                        temp.append($1.code);
                        temp.append($3.code);
                        temp.append(". ");
                        temp.append(dst);
                        temp.append("\n");
                        temp +="% " + dst + ", ";
                        temp.append($1.place);
                        temp+=", ";
                        temp.append($3.place);
                        temp+="\n";
                        $$.code = strdup(temp.c_str());
                        $$.place = strdup(dst.c_str());
                    }
                    ;
term: SUB var {printf("term -> SUB var\n");}
    | SUB NUMBER {printf("term -> SUB NUMBER\n");}
    | SUB L_PAREN expression R_PAREN {printf("term -> SUB R_PAREN expression L_PAREN\n");}
    | var {printf("term -> var\n");}
    | NUMBER {printf("term -> NUMBER\n");}
    | L_PAREN expression R_PAREN {printf("term -> R_PAREN expression L_PAREN\n");}
    /*| IDENT L_PAREN expression R_PAREN {printf("term -> IDENT L_PAREN expression R_PAREN\n");} Dont think this is needed*/
    | IDENT L_PAREN expressions R_PAREN {printf("term -> IDENT L_PAREN expressions R_PAREN\n");}
    ;
vars:  var {printf("vars -> var\n");}
        |var COMMA vars {printf("vars -> var COMMA vars\n");}
        ;
var: IDENT {
    printf("IDENT\n");
    std::string temp;
    std::string ident=$1.place;
    if(funcs.find(ident) == functions.end() && varTemp.find(ident)==varTemp.end()){
        printf("Identifier %s is not declared.\n",ident.c_str());
    }
    else(if(arrSize[ident]>1){
        printf("Did not provide index for array Identifier %s.\n", ident.c_str());
    }
    $$.code = strdup("");
    $$.place=strdup(ident.c_str());
    $$.arr = false;
    }
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET {
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


std:string new_temp(){
    std::string t= "t" + std::to_string(tempCount);
    tempCount++;
    return t;
}

std::string new_label(){
    std::string l="L" + std::to_string(labelCount);
    labelCount++;
    return l;
}


int main(int argc, char ** argv) {
    if(argc > 1) {
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            printf("syntax: %s filename", argv[0]);
        }
    }
    yyparse();
    return 0;
}
void yyerror(const char *msg) {
    printf("Error: Line %d, position %d: %s \n", num_lines, num_columns, msg);
}
