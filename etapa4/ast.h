#ifndef ARVORE_SINTATICA
#define ARVORE_SINTATICA

#define AST_INT 69
#define AST_FLOAT 70
#define AST_BOOL 71


typedef struct ast_tree{
    char *label;
    int number_of_children;
    struct ast_tree **children;
}ast;

typedef struct valor_l{
	int line_of_appearance;
    int token_type;
    char *token_value;
}valor_lexico;


//Cria nova árvore
ast *ast_new(char* label);


//Adiciona filhos a nova arvore
ast *ast_add_child(ast* tree, ast* child);


//Libera da memória a árvore
void ast_free(ast* tree);


//Imprime toda a arvore no terminal
void ast_print(ast* tree);

//Concatena string no label do nodo
void ast_cat_label(ast* tree, char* insetion);


#endif
