%{
int yylex(void);
void yyerror (char const *mensagem);
extern int yylineno;
#include<stdio.h>
%}

%define parse.error verbose

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

lista_parametros_dec_funcao: ',' tipo TK_IDENTIFICADOR lista_parametros_dec_funcao
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
comando_return: TK_PR_RETURN expressao ','

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
/*expressao:  expressao TK_OC_OR valor
		| expressao TK_OC_AND valor
		| expressao TK_OC_NE valor
		| expressao TK_OC_EQ valor
		| expressao TK_OC_LE valor
		| expressao TK_OC_GE valor
		| expressao '<' valor
		| expressao '>' valor
		| expressao '+' valor
		| expressao '-' valor
		| expressao '*' valor
		| expressao '/' valor
		| expressao '%' valor
		//| '~' expressao
		//| '(' expressao ')'
		| valor*/

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

expressao_unaria: 	 '~' expressao_unaria
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
