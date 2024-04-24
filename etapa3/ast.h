#ifndef ARVORE_SINTATICA
#define ARVORE_SINTATICA


typedef struct ast_tree{
    char *label;
    int number_of_children;
    struct ast_tree **children;
}ast;


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
