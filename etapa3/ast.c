
#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





//Cria nova árvore
ast *ast_new(char* label){

    ast *tree = NULL;
    tree = calloc(1, sizeof(ast));

    tree->label = strdup(label);
    tree->number_of_children = 0;
    tree->children = NULL;

    return tree;
}


//Adiciona filhos a nova arvore
ast *ast_add_child(ast* tree, ast* child){

    if(tree != NULL && child != NULL){
        tree->number_of_children++;
        tree->children = realloc(tree->children, tree->number_of_children * sizeof(ast));
        tree->children[tree->number_of_children-1] = child;
    }
    return tree;
}


//Libera da memória a árvore
void ast_free(ast* tree){

    if(tree != NULL){
        int i;
        for(i=0;i<tree->number_of_children;i++){
            ast_free(tree->children[i]);
        }

        free(tree->children);
        free(tree->label);
        free(tree);
    }
}

//Concatena string no label do nodo
void ast_cat_label(ast* tree, char* insertion){

    strcat(tree->label, insertion);

}


//Imprime toda a arvore no terminal
static void _ast_print (FILE *foutput, ast *tree, int profundidade)
{
  int i;
  if (tree != NULL){
    fprintf(foutput, "%d%*s: Nó '%s' tem %d filhos:\n", profundidade, profundidade*2, "", tree->label, tree->number_of_children);
    for (i = 0; i < tree->number_of_children; i++){
      _ast_print(foutput, tree->children[i], profundidade+1);
    }
  }
}

void ast_print(ast *tree)
{
  FILE *foutput = stderr;
  if (tree != NULL){
    _ast_print(foutput, tree, 0);
  }
}


/*
void ast_print(ast* tree){

}*/
