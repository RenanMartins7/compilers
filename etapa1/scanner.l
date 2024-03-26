/*Declarations and inclusion in C*/
%{
    
#include "tokens.h"


%}
/*----------------------------------------------------*/
/*Flex options*/

%x COMMENT
%option yylineno
%option noyywrap

/*----------------------------------------------------*/
/*Lexical Analizer*/
%%

"/*" {BEGIN(COMMENT);}//Begin section
<COMMENT>"*/" BEGIN(INITIAL);//If comment ended, return to lexical analysis
<COMMENT>"\n" //New line on comment
<COMMENT>. //Ignores everything inside the comment

"//".* {}//Single line comment
"\n"  {}//New line for yylineno
[ \t] {}//Black spaces and tabs
 /*Reserved words for the grammar*/
int         {return TK_PR_INT;}
float       {return TK_PR_FLOAT;}
bool        {return TK_PR_BOOL;}
if          {return TK_PR_IF;}
else        {return TK_PR_ELSE;}
while       {return TK_PR_WHILE;}
return      {return TK_PR_RETURN;}
 /*Literals false and true*/
false       {return TK_LIT_FALSE;}
true        {return TK_LIT_TRUE;}
 /*Special caracters*/
[-!*%+-<>{}/()=,:] {return yytext[0];}
"["         {return '[';}
"]"         {return ']';}
 /*Compound operators*/
"<="        {return TK_OC_LE;}
">="        {return TK_OC_GE;}
"=="        {return TK_OC_EQ;}
"!="        {return TK_OC_NE;}
"&"         {return TK_OC_AND;}
"|"         {return TK_OC_OR;}
 /*Identifiers*/
[_a-zA-z][_a-zA-Z0-9]* {return TK_IDENTIFICADOR;}
 /*Literals float and int*/
[0-9]+      {return TK_LIT_INT;}
[0-9]*"."[0-9]+ {return TK_LIT_FLOAT;}

 /*Error token*/
. {return TK_ERRO;}

%%
/*----------------------------------------------------*/
/*C code*/

int get_line_number(void){
    return yylineno;
}
