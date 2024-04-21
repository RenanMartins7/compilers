
/*Projeto para a cadeira de compiladores INF01147 */
/*Grupo H: Renan Martins Alves / Marcel Ramos do Carmo*/


%{
/*Definições em C, bibliotecas e variáveis externas*/
int yylex(void);
void yyerror (char const *mensagem);
extern int yylineno;
#include <stdio.h>
#include "ast.h"
%}
/*Opções do Bison*/
%define parse.error verbose


/*  O tipo do campo valor_lexico (e por consequência o valor que será retido) deve ser uma estrutura de dados
(struct) que contém os seguintes campos: (a) número da linha onde apareceu o lexema; (b) tipo do token
(identificador ou literal); (c) valor do token. O valor do token é uma cadeia de caracteres (duplicada com
strdup a partir de yytext) para todos os tipos de tokens.
*/
%code requires {
    struct valor_lexico {
        int line_of_appearance;
        int token_type
        string /*???*/ token_value;
    };
}

/* Devemos fazer tal associação no analisador léxico (alterações no arquivo scanner.l), atribuindo um
valor para a variável global yylval. Esta variá- vel deve ser configurada com a diretiva %union no
parser.y. */
%union {
  valor_lexico valor;
  asd_tree_t *arvore;
}
%token<valor> TK_PR_INT
%token<valor> TK_PR_FLOAT
%token<valor> TK_PR_BOOL
%token<valor> TK_PR_IF
%token<valor> TK_PR_ELSE
%token<valor> TK_PR_WHILE
%token<valor> TK_PR_RETURN
%token<valor> TK_OC_LE
%token<valor> TK_OC_GE
%token<valor> TK_OC_EQ
%token<valor> TK_OC_NE
%token<valor> TK_OC_AND
%token<valor> TK_OC_OR
%token<valor> TK_IDENTIFICADOR
%token<valor> TK_LIT_INT
%token<valor> TK_LIT_FLOAT
%token<valor> TK_LIT_FALSE
%token<valor> TK_LIT_TRUE
%token<valor> TK_ERRO
/*
%type<arvore> programa
%type<arvore> declaracao_global
%type<arvore> declaracao_funcao
%type<arvore> lista_variaveis_globais
%type<arvore> tipo
%type<arvore> parametros_dec_funcao
%type<arvore> bloco_de_comandos
%type<arvore> lista_parametros_dec_funcao
%type<arvore> lista_de_comandos
%type<arvore> comando_simples
%type<arvore> declaracao_variavel
%type<arvore> atribuicao_variavel
%type<arvore> chamada_funcao
%type<arvore> comando_return
%type<arvore> comando_condicional
%type<arvore> comando_while
%type<arvore> bloco_de_comandos
%type<arvore> lista_declaracao_variaveis
%type<arvore> atribuicao_variavel
%type<arvore> expressao 
%type<arvore> comando_return
%type<arvore> chamada_funcao
%type<arvore> argumentos_chamada_funcao
%type<arvore> lista_argumentos_chamada_funcao
%type<arvore> comando_condicional
%type<arvore> comando_else
%type<arvore> comando_while
%type<arvore> expressao_or
%type<arvore> expressao_and
%type<arvore> expressao_eq_ne
%type<arvore> expressao_comparativa
%type<arvore> expressao_soma_sub
%type<arvore> expressao_div_mult
%type<arvore> expressao_unaria
%type<arvore> valor

*/

%%

/*
Um programa na linguagem é composto por dois
elementos, todos opcionais: um conjunto de de-
clarações de variáveis globais e um conjunto de
funções. Esses elementos podem estar intercala-
dos e em qualquer ordem.
*/
programa: declaracao_global programa
		| declaracao_funcao programa
		|




/*
As variáveis globais são declaradas pelo tipo se-
guido de uma lista composta de pelo menos um
nome de variável (identificador) separadas por
ponto-e-vírgula.
*/

declaracao_global: tipo TK_IDENTIFICADOR lista_variaveis_globais ','

lista_variaveis_globais: ';' TK_IDENTIFICADOR lista_variaveis_globais
						| 





/*
O tipo pode ser int, float e bool.
*/
tipo: TK_PR_BOOL
	| TK_PR_FLOAT
	| TK_PR_INT





/*
Cada função é definida por um cabeçalho e um
corpo, sendo que esta definição não é terminada
por vírgula. O cabeçalho consiste na lista de pa-
râmetros, o operador composto TK_OC_OR, o tipo
de retorno seguido da barra e o nome da função.
Tal tipo pode ser int, float e bool. O corpo da função é
um bloco de comandos.
*/
declaracao_funcao: '(' parametros_dec_funcao ')' TK_OC_OR tipo '/' TK_IDENTIFICADOR bloco_de_comandos






/*
A lista de parâmetros é dada entre parênteses e é composta
por zero ou mais parâmetros de entrada, separa-
dos por ponto-e-vírgula. Cada parâmetro é defi-
nido pelo seu tipo e nome.
*/
parametros_dec_funcao: tipo TK_IDENTIFICADOR lista_parametros_dec_funcao
					|

lista_parametros_dec_funcao: ';' tipo TK_IDENTIFICADOR lista_parametros_dec_funcao
							| 





/*
Um bloco de comandos é definido entre chaves,
e consiste em uma sequência, possivelmente va-
zia, de comandos simples cada um terminado
por vírgula. Um bloco de comandos é conside-
rado como um comando único simples, recursiva-
mente, e pode ser utilizado em qualquer constru-
ção que aceite um comando simples.


*/

bloco_de_comandos: '{' lista_de_comandos '}'

lista_de_comandos: comando_simples ','  lista_de_comandos
				|




/*
Os comandos simples da linguagem podem ser:
declaração de variável local, atribuição, constru-
ções de fluxo de controle, operação de retorno, um
bloco de comandos, e chamadas de função
*/




comando_simples: declaracao_variavel
				| atribuicao_variavel
				| chamada_funcao
				| comando_return
				| comando_condicional
				| comando_while
				| bloco_de_comandos


/*
Declaração de Variável: Consiste no tipo da va-
riável seguido de uma lista composta de pelo me-
nos um nome de variável (identificador) separa-
das por ponto-e-vírgula. Os tipos podem ser aque-
les descritos na seção sobre variáveis globais.
*/
declaracao_variavel: tipo TK_IDENTIFICADOR lista_declaracao_variaveis 

lista_declaracao_variaveis: ';' TK_IDENTIFICADOR lista_declaracao_variaveis 
							|


/*
Comando de Atribuição: O comando de atribui-
ção consiste em um identificador seguido pelo ca-
ractere de igualdade seguido por uma expressão.
*/
atribuicao_variavel: TK_IDENTIFICADOR '=' expressao 

/*
Comando de Retorno: Trata-se do token return
seguido de uma expressão.
*/
comando_return: TK_PR_RETURN expressao 

/*
Chamada de Função: Uma chamada de função
consiste no nome da função, seguida de argu-
mentos entre parênteses separados por ponto-e-
vírgula. Um argumento pode ser uma expressão.
*/
chamada_funcao: TK_IDENTIFICADOR '(' argumentos_chamada_funcao ')' 



argumentos_chamada_funcao: expressao lista_argumentos_chamada_funcao
							|


lista_argumentos_chamada_funcao: ';' expressao lista_argumentos_chamada_funcao
								|

/*
 A condicional consiste no token if seguido de uma expres-
são entre parênteses e então por um bloco de co-
mandos obrigatório. O else, sendo opcional, é se-
guido de um bloco de comandos, obrigatório caso
o else seja empregado.
*/
comando_condicional: TK_PR_IF '(' expressao ')' bloco_de_comandos comando_else


comando_else: TK_PR_ELSE bloco_de_comandos
				|


/*
Temos apenas uma construção de repetição que é o token while seguido
de uma expressão entre parênteses e de um bloco
de comandos.
*/
comando_while: TK_PR_WHILE '(' expressao ')' bloco_de_comandos






/*
Expressões tem operandos e operadores, sendo
este opcional. Os operandos podem ser (a) identi-
ficadores, (b) literais e (c) chamada de função
*/

expressao: expressao_or

expressao_or: 		expressao_or TK_OC_OR expressao_and
					| expressao_and

expressao_and: 		expressao_and TK_OC_AND expressao_eq_ne
					| expressao_eq_ne

expressao_eq_ne: 	expressao_eq_ne TK_OC_EQ expressao_comparativa
					| expressao_eq_ne TK_OC_NE expressao_comparativa
					| expressao_comparativa

expressao_comparativa: expressao_comparativa TK_OC_LE expressao_soma_sub
					| expressao_comparativa TK_OC_GE expressao_soma_sub
					| expressao_comparativa '>' expressao_soma_sub
					| expressao_comparativa '<' expressao_soma_sub
					| expressao_soma_sub

expressao_soma_sub: expressao_soma_sub '+' expressao_div_mult
					| expressao_soma_sub '-' expressao_div_mult
					| expressao_div_mult

expressao_div_mult: expressao_div_mult '*' expressao_unaria
					| expressao_div_mult '/' expressao_unaria
					| expressao_div_mult '%' expressao_unaria
					| expressao_unaria

expressao_unaria: 	 '-' expressao_unaria
					| '!' expressao_unaria
					| valor
					| '(' expressao ')'


valor: TK_IDENTIFICADOR
	| TK_LIT_FLOAT
	| TK_LIT_INT
	| TK_LIT_FALSE
	| TK_LIT_TRUE
	| chamada_funcao


%%


void yyerror(const char* mensagem){

	printf("\nError on line %d: %s\n", yylineno, mensagem);
}

void exporta(void *arvore){

}
