/*Westin Montano & Angela Su worked together on the following code*/

%{  
    #include <string>
    #include "mini_l.tab.h"
    int num_lines = 1, currPos = 0; 
%}

DIGIT   [0-9]
E_ID_2  [a-zA-Z][a-zA-Z0-9_]*[_]
ID      [a-zA-Z][a-zA-Z0-9_]*
CHAR    [a-zA-Z]
E_ID_1  [0-9_][a-zA-Z0-9_]*


%%
{DIGIT}+        {yylval.num_val = atoi(yytext);return NUMBER; currPos +=yyleng;}

{E_ID_2}        {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",
                 num_lines, currPos, yytext); exit(-1);}

{E_ID_1}        {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n",
                 num_lines, currPos, yytext); exit(-1);}

"function"      {return FUNCTION; currPos += yyleng;}
"beginparams"   {return BEGINPARAMS; currPos += yyleng;}
"endparams"     {return ENDPARAMS; currPos += yyleng;}
"beginlocals"   {return BEGINLOCALS; currPos += yyleng;}
"endlocals"     {return ENDLOCALS; currPos += yyleng;}
"beginbody"     {return BEGINBODY; currPos += yyleng;}
"endbody"       {return ENDBODY; currPos += yyleng;}
"integer"       {return INTEGER; currPos += yyleng;}
"array"         {return ARRAY; currPos += yyleng;}
"enum"          {return ENUM; currPos += yyleng;}
"of"            {return OF; currPos += yyleng;}
"if"            {return IF; currPos += yyleng;}
"then"          {return THEN; currPos += yyleng;}
"endif"         {return ENDIF; currPos += yyleng;}
"else"          {return ELSE; currPos += yyleng;}
"while"         {return WHILE; currPos += yyleng;}
"do"            {return DO; currPos += yyleng;}
"for"           {return FOR; currPos += yyleng;}
"beginloop"     {return BEGINLOOP; currPos += yyleng;}
"endloop"       {return ENDLOOP; currPos += yyleng;}
"continue"      {return CONTINUE; currPos += yyleng;}
"read"          {return READ; currPos += yyleng;}
"write"         {return WRITE; currPos += yyleng;}
"and"           {return AND; currPos += yyleng;}
"or"            {return OR; currPos += yyleng;}
"not"           {return NOT; currPos += yyleng;}
"true"          {return TRUE; currPos += yyleng;}
"false"         {return FALSE; currPos += yyleng;}
"return"        {return RETURN; currPos += yyleng;}

"-"             {return SUB; currPos += yyleng;} 
"+"             {return ADD; currPos += yyleng;}
"*"             {return MULT; currPos += yyleng;}
"/"             {return DIV; currPos += yyleng;}
"%"             {return MOD; currPos += yyleng;}

"=="            {return EQ; currPos += yyleng;}
"<>"            {return NEQ; currPos += yyleng;}
"<"             {return LT; currPos += yyleng;}
">"             {return GT; currPos += yyleng;}
"<="            {return LTE; currPos += yyleng;}
">="            {return GTE; currPos += yyleng;}

{ID}            {yylval.id_val =strdup(yytext); return IDENT; currPos+=yyleng;} 

";"             {return SEMICOLON; currPos += yyleng;}
":"             {return COLON; currPos += yyleng;}
","             {return COMMA; currPos += yyleng;}
"("             {return L_PAREN; currPos += yyleng;}
")"             {return R_PAREN; currPos += yyleng;}
"["             {return L_SQUARE_BRACKET;currPos+=yyleng;}
"]"             {return R_SQUARE_BRACKET;currPos+=yyleng;}
":="            {return ASSIGN;currPos+=yyleng;}
[ ]             currPos++;
\t              currPos+=4;
"\n"           {num_lines++; currPos = 0;}
"##"[^\n]*"\n"  num_lines++; currPos = 1;


.               {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", num_lines, currPos, yytext); exit(0);}
%%
int yyparse();
int yylex();

int main(int argc, char ** argv)
{
  //yylex();
  yyparse();
  
  return 0;
}