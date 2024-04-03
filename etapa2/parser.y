%{
int yylex(void);
void yyerror (char const *mensagem);
#include<stdio.h>
%}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_IF
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_RETURN
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_IDENTIFICADOR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_ERRO

%%

//Um programa consiste de uma lista de variáveis globais e seguida de uma lista de funções implementadas, onde ambas podem ser vazias
programa: lista_globais lista_funcoes


//--------------------------------------------------------------------------------------------------------------------------------------------------
//Uma lista de globais consiste em um ou mais declarações de variáveis globais, ou vazio
lista_globais: dec_global lista_globais	
			| 


//Uma declaração global é um tipo, seguido de identificadores separados por ";" e terminado em ","
dec_global: tipo TK_IDENTIFICADOR lista_dec_global ','


//Uma lista de declarações globais são um ou mais 
lista_dec_global: ';' TK_IDENTIFICADOR lista_dec_global
				| 


//Um tipo pode ser float, int ou bool
tipo: TK_PR_FLOAT
	| TK_PR_INT
	| TK_PR_BOOL


//--------------------------------------------------------------------------------------------------------------------------------------------------
//Uma lista de funções consiste em uma ou mais funções, ou vazio
lista_funcoes:




%%


void yyerror(const char* mensagem){

	printf("deu erro");
}
