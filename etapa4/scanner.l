/*Projeto para a cadeira de compiladores INF01147 */
/*Grupo H: Renan Martins Alves / Marcel Ramos do Carmo*/





/*Declarations and inclusion in C*/
%{
#include "parser.tab.h"
%}




/*----------------------------------------------------*/
/*Flex options*/
%x COMMENT
/**Starting up the line counter*/
%option yylineno 
/**Option to not request the implementation of the yywrap function*/
%option noyywrap 



/*----------------------------------------------------*/
/*Lexical Analizer*/
%%
 /**Section to deal with comments*/
"/*" {BEGIN(COMMENT);}//Begin section
<COMMENT>"*/" BEGIN(INITIAL);//If comment ended, return to lexical analysis
<COMMENT>"\n" //New line on comment
<COMMENT>. //Ignores everything inside the comment
"//".* {}//Single line comment



 /**Dealing with tabs and white spaces*/
"\n"  {}//New line for yylineno
[ \t] {}//Black spaces and tabs



 /**Reserved words for the grammar*/
int         {return TK_PR_INT;}
float       {return TK_PR_FLOAT;}
bool        {return TK_PR_BOOL;}
if          {return TK_PR_IF;}
else        {return TK_PR_ELSE;}
while       {return TK_PR_WHILE;}
return      {return TK_PR_RETURN;}



 /**Literals false and true*/
false       {   yylval.valor.line_of_appearance = yylineno;
                yylval.valor.token_type = 4;
                yylval.valor.token_value = strdup(yytext);
                return TK_LIT_FALSE;}
true        {   yylval.valor.line_of_appearance = yylineno;
                yylval.valor.token_type = 5;
                yylval.valor.token_value = strdup(yytext);
                return TK_LIT_TRUE;}



 /**Special caracters*/
[-!*%+<>{}/()=,;] {return yytext[0];}
 /**Compound operators*/



"<="        {return TK_OC_LE;}
">="        {return TK_OC_GE;}
"=="        {return TK_OC_EQ;}
"!="        {return TK_OC_NE;}
"&"         {return TK_OC_AND;}
"|"         {return TK_OC_OR;}



 /**Identifiers*/
[_a-z][_a-z0-9]* {yylval.valor.line_of_appearance = yylineno;
                yylval.valor.token_type = 1;
                yylval.valor.token_value = strdup(yytext);
                ;return TK_IDENTIFICADOR;}



 /**Literals float and int*/
[0-9]+          {yylval.valor.line_of_appearance = yylineno;
                yylval.valor.token_type = 2;
                yylval.valor.token_value = strdup(yytext);
                return TK_LIT_INT;}
[0-9]*"."[0-9]+ {yylval.valor.line_of_appearance = yylineno;
                yylval.valor.token_type = 3;
                yylval.valor.token_value = strdup(yytext);
                return TK_LIT_FLOAT;}



 /*Error token*/
. {return TK_ERRO;}



%%
/*----------------------------------------------------*/
/*C code*/

int get_line_number(void){
    return yylineno;
}
