
/*Projeto para a cadeira de compiladores INF01147 */
/*Grupo H: Renan Martins Alves / Marcel Ramos do Carmo*/


%{
/*Definições em C, bibliotecas e variáveis externas*/
int yylex(void);
void yyerror (char const *mensagem);
extern int yylineno;
#include <stdio.h>
#include "hash.h"
extern void *arvore;
pilha* stack = NULL;
int flagBloco = 0;



/*  O tipo do campo valor_lexico (e por consequência o valor que será retido) deve ser uma estrutura de dados
(struct) que contém os seguintes campos: (a) número da linha onde apareceu o lexema; (b) tipo do token
(identificador ou literal); (c) valor do token. O valor do token é uma cadeia de caracteres (duplicada com
strdup a partir de yytext) para todos os tipos de tokens.
*/



%}
/*Opções do Bison*/
%define parse.error verbose

%code requires{
	#include "ast.h"
}

/* Devemos fazer tal associação no analisador léxico (alterações no arquivo scanner.l), atribuindo um
valor para a variável global yylval. Esta variá- vel deve ser configurada com a diretiva %union no
parser.y. */
%union {
  valor_lexico valor;
  ast *arvore;
  int indexType;
}
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
%token<valor> TK_IDENTIFICADOR
%token<valor> TK_LIT_INT
%token<valor> TK_LIT_FLOAT
%token<valor> TK_LIT_FALSE
%token<valor> TK_LIT_TRUE
%token TK_ERRO

/*




*/
%type<arvore> raizPrograma
%type<arvore> programa
%type<arvore> declaracao_funcao
%type<arvore> comando_simples
%type<arvore> comando_else
%type<arvore> comando_condicional
%type<arvore> lista_de_comandos
%type<arvore> bloco_de_comandos
%type<arvore> comando_while
%type<arvore> argumentos_chamada_funcao
%type<arvore> lista_argumentos_chamada_funcao
%type<arvore> atribuicao_variavel
%type<arvore> comando_return
%type<arvore> expressao_or
%type<arvore> expressao_and
%type<arvore> expressao_eq_ne
%type<arvore> expressao_comparativa
%type<arvore> expressao_soma_sub
%type<arvore> expressao_div_mult
%type<arvore> expressao
%type<arvore> expressao_unaria
%type<arvore> chamada_funcao
%type<arvore> valor
%type<indexType> tipo 
%type<indexType> lista_variaveis_globais
%type<indexType> lista_declaracao_variaveis
%type<indexType> declaracao_variavel



%%




raizInicializacao:{stack = pilha_push(stack, initMe());}  raizPrograma 
/*
Um programa na linguagem é composto por dois
elementos, todos opcionais: um conjunto de de-
clarações de variáveis globais e um conjunto de
funções. Esses elementos podem estar intercala-
dos e em qualquer ordem.
*/
raizPrograma: programa 						
{										 
	arvore = $$;
	hashPrint(stack->table);
		
	pilha_free(stack);
}


programa: declaracao_global programa{$$ = $2;}
		| declaracao_funcao programa{ast_add_child($1, $2);}
		|							{$$ = NULL;}




/*
As variáveis globais são declarad    tree->astType = astType; separadas por
ponto-e-vírgula.
*/

declaracao_global: tipo TK_IDENTIFICADOR
{
	verifyDeclared($2, yylineno, stack);
	hashInsert($2.token_value, stack->table, ID_IDENTIFIER, $2, $1);
}
 lista_variaveis_globais ','
 {
		$4 = $1;
 }



lista_variaveis_globais: ';' TK_IDENTIFICADOR lista_variaveis_globais
{
	$3 = $$;
	verifyDeclared($2, yylineno, stack);
	hashInsert($2.token_value, stack->table, ID_IDENTIFIER, $2, $$);

}
						| {$$ = 0;}





/*
O tipo pode ser int, float e bool.
*/
tipo: TK_PR_BOOL {$$ = AST_BOOL;}
	| TK_PR_FLOAT{$$ = AST_FLOAT;}
	| TK_PR_INT{$$ = AST_INT;}





/*
Cada função é definida por um cabeçalho e um
corpo, sendo que esta definição não é terminada
por vírgula. O cabeçalho consiste na lista de pa-
râmetros, o operador composto TK_OC_OR, o tipo
de retorno seguido da barra e o nome da função.
Tal tipo pode ser int, float e bool. O corpo da função é
um bloco de comandos.
*/
declaracao_funcao:'(' 
{
	stack = pilha_push(stack, initMe());
	flagBloco = 1;
}
					parametros_dec_funcao ')' TK_OC_OR tipo '/' TK_IDENTIFICADOR

{
	verifyDeclared($8, yylineno, stack);
	hashInsert($8.token_value, stack->next->table, ID_FUNCTION, $8, $6);
}
 					bloco_de_comandos 

{
	$$ = ast_add_child(ast_new($8.token_value), $10);
}






/*
A lista de parâmetros é dada entre parênteses e é composta
por zero ou mais parâmetros de entrada, separa-
dos por ponto-e-vírgula. Cada parâmetro é defi-
nido pelo seu tipo e nome.
*/
parametros_dec_funcao: tipo TK_IDENTIFICADOR
{
	verifyDeclared($2, yylineno, stack);
	hashInsert($2.token_value, stack->table,ID_IDENTIFIER, $2, $1);
}
 lista_parametros_dec_funcao

					|

lista_parametros_dec_funcao: ';' tipo TK_IDENTIFICADOR 
{
	verifyDeclared($3, yylineno, stack);
	hashInsert($3.token_value, stack->table,ID_IDENTIFIER, $3, $2);
}
lista_parametros_dec_funcao

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

bloco_de_comandos: '{'
{
	if(flagBloco == 0) stack = pilha_push(stack, initMe());
	else flagBloco = 0;
}
 lista_de_comandos '}' 
 {
	$$ = $3;
	hashPrint(stack->table);
	stack = pilha_pop(stack);

}

lista_de_comandos: comando_simples ','  lista_de_comandos	{if($1 == NULL)$$ = $3;
															else $$ = ast_add_child($1, $3);}
				|											{$$ = NULL;}




/*
Os comandos simples da linguagem podem ser:
declaração de variável local, atribuição, constru-
ções de fluxo de controle, operação de retorno, um
bloco de comandos, e chamadas de função
*/




comando_simples: declaracao_variavel	{$$ = NULL;}
				| atribuicao_variavel	{$$ = $1;}
				| chamada_funcao		{$$ = $1;}
				| comando_return		{$$ = $1;}
				| comando_condicional	{$$ = $1;}
				| comando_while			{$$ = $1;}
				| bloco_de_comandos		{$$ = $1;}


/*
Declaração de Variável: Consiste no tipo da va-
riável seguido de uma lista composta de pelo me-
nos um nome de variável (identificador) separa-
das por ponto-e-vírgula. Os tipos podem ser aque-
les descritos na seção sobre variáveis globais.
*/
declaracao_variavel: tipo TK_IDENTIFICADOR
{
	verifyDeclared($2, yylineno, stack);
	hashInsert($2.token_value, stack->table, ID_IDENTIFIER, $2, $1);
}
 lista_declaracao_variaveis 
 {
	$4 = $1;
 }

lista_declaracao_variaveis: ';' TK_IDENTIFICADOR lista_declaracao_variaveis 
{
	$3 = $$;
	verifyDeclared($2, yylineno, stack);
	hashInsert($2.token_value, stack->table, ID_IDENTIFIER, $2, $$);
}
							|{$$= 0;}


/*
Comando de Atribuição: O comando de atribui-
ção consiste em um identificador seguido pelo ca-
ractere de igualdade seguido por uma expressão.
*/
atribuicao_variavel: TK_IDENTIFICADOR '=' expressao 
{
	$$ = ast_new("=");
	$$ = ast_add_child($$, ast_new($1.token_value));
	$$ = ast_add_child($$, $3);
	verifyUndeclared($1,$$,yylineno,stack);
	verifyIdentifier(stack, $1.token_value, yylineno);}
	

/*
Comando de Retorno: Trata-se do token return
seguido de uma expressão.
*/
comando_return: TK_PR_RETURN expressao {$$ = ast_add_child(ast_new("return"), $2);}

/*
Chamada de Função: Uma chamada de função
consiste no nome da função, seguida de argu-
mentos entre parênteses separados por ponto-e-
vírgula. Um argumento pode ser uma expressão.
*/
chamada_funcao: TK_IDENTIFICADOR '(' argumentos_chamada_funcao ')' 
{
	$$ = ast_add_child(ast_new("call "), $3);
	ast_cat_label($$, $1.token_value);
	verifyUndeclared($1,$$,yylineno,stack);
	verifyFunction(stack, $1.token_value, yylineno);

}


argumentos_chamada_funcao: expressao lista_argumentos_chamada_funcao {$$ = ast_add_child($1,$2);}
							| {$$ = NULL;}


lista_argumentos_chamada_funcao: ';' expressao lista_argumentos_chamada_funcao{$$ = ast_add_child($2,$3);}
								|{$$ = NULL;}

/*
 A condicional consiste no token if seguido de uma expres-
são entre parênteses e então por um bloco de co-
mandos obrigatório. O else, sendo opcional, é se-
guido de um bloco de comandos, obrigatório caso
o else seja empregado.
*/
comando_condicional: TK_PR_IF '(' expressao ')' bloco_de_comandos comando_else	{$$ = ast_new("if");
																				$$ = ast_add_child($$, $3);
																				$$ = ast_add_child($$, $5);
																				$$ = ast_add_child($$, $6);
}


comando_else: TK_PR_ELSE bloco_de_comandos	{$$ = $2;}
				|							{$$ = NULL;}


/*
Temos apenas uma construção de repetição que é o token while seguido
de uma expressão entre parênteses e de um bloco
de comandos.
*/
comando_while: TK_PR_WHILE '(' expressao ')' bloco_de_comandos	{$$ = ast_new("while");
																$$ = ast_add_child(ast_add_child($$, $3), $5);}






/*
Expressões tem operandos e operadores, sendo
este opcional. Os operandos podem ser (a) identi-
ficadores, (b) literais e (c) chamada de função
*/

expressao: expressao_or 									{$$ = $1;}

expressao_or: 		expressao_or TK_OC_OR expressao_and		{$$ = ast_add_child(ast_add_child(ast_new("|"), $1),$3);}
					| expressao_and							{$$ = $1;}

expressao_and: 		expressao_and TK_OC_AND expressao_eq_ne	{$$ = ast_add_child(ast_add_child(ast_new("&"), $1),$3);}
					| expressao_eq_ne						{$$ = $1;}

expressao_eq_ne: 	expressao_eq_ne TK_OC_EQ expressao_comparativa	{$$ = ast_add_child(ast_add_child(ast_new("=="), $1),$3);}
					| expressao_eq_ne TK_OC_NE expressao_comparativa{$$ = ast_add_child(ast_add_child(ast_new("!="), $1),$3);}
					| expressao_comparativa							{$$ = $1;}

expressao_comparativa: expressao_comparativa TK_OC_LE expressao_soma_sub {$$ = ast_add_child(ast_add_child(ast_new("<="), $1),$3);}
					| expressao_comparativa TK_OC_GE expressao_soma_sub  {$$ = ast_add_child(ast_add_child(ast_new(">="), $1),$3);}
					| expressao_comparativa '>' expressao_soma_sub		 {$$ = ast_add_child(ast_add_child(ast_new(">"), $1),$3);}
					| expressao_comparativa '<' expressao_soma_sub		 {$$ = ast_add_child(ast_add_child(ast_new("<"), $1),$3);}
					| expressao_soma_sub								 {$$ = $1;}

expressao_soma_sub: expressao_soma_sub '+' expressao_div_mult	{$$ = ast_add_child(ast_add_child(ast_new("+"), $1),$3);}
					| expressao_soma_sub '-' expressao_div_mult	{$$ = ast_add_child(ast_add_child(ast_new("-"), $1),$3);}
					| expressao_div_mult						{$$ = $1;}

expressao_div_mult: expressao_div_mult '*' expressao_unaria		{$$ = ast_add_child(ast_add_child(ast_new("*"), $1),$3);}
					| expressao_div_mult '/' expressao_unaria	{$$ = ast_add_child(ast_add_child(ast_new("/"), $1),$3);}
					| expressao_div_mult '%' expressao_unaria	{$$ = ast_add_child(ast_add_child(ast_new("%"), $1),$3);}
					| expressao_unaria							{$$ = $1;}

expressao_unaria: 	 '-' expressao_unaria	{$$ = ast_add_child(ast_new("-"), $2);}
					| '!' expressao_unaria	{$$ = ast_add_child(ast_new("!"), $2);}
					| valor					{$$ = $1;}


valor: TK_IDENTIFICADOR {
	$$ = ast_new($1.token_value);
	verifyIdentifier(stack, $1.token_value, yylineno);
	verifyUndeclared($1,$$,yylineno,stack);
}
	| TK_LIT_FLOAT		{$$ = ast_new($1.token_value);$$->astType = AST_FLOAT;}
	| TK_LIT_INT		{$$ = ast_new($1.token_value);$$->astType = AST_INT;}
	| TK_LIT_FALSE		{$$ = ast_new($1.token_value);$$->astType = AST_BOOL;}
	| TK_LIT_TRUE		{$$ = ast_new($1.token_value);$$->astType = AST_BOOL;}
	| chamada_funcao	{$$ = $1;}
	| '(' expressao ')' {$$ = $2;}


%%


void yyerror(const char* mensagem){

	printf("\nError on line %d: %s\n", yylineno, mensagem);
}

void exporta(void *arvore){

	ast* _arvore = (ast*)arvore;

	if(_arvore == NULL) return;

	int i;
	for(i=0;i<_arvore->number_of_children;i++){
		printf("%p, %p\n", _arvore, _arvore->children[i]);
	}
	printf("%p [label=\"%s\"];\n", _arvore, _arvore->label);
	for(i=0;i<_arvore->number_of_children;i++){
		exporta(_arvore->children[i]);
	}


}
