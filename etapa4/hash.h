#ifndef HASH_HEADER
#define HASH_HEADER


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ast.h"


#define HASH_SIZE 997

typedef struct hash_node{
    char *text;
    int nature;
    int astType;
    valor_lexico data;
    struct hash_node * next;
}HASH_NODE;


typedef struct stack_scope{
    HASH_NODE ** table;
    struct stack_scope* next;
}pilha;


//Funções da hash
HASH_NODE** initMe();
int hashAdress(char *text);
HASH_NODE *hashFind(char *text, HASH_NODE** table);
void hashInsert(char *text, HASH_NODE** table, int idNature, valor_lexico data, int type);
void hashPrint(HASH_NODE** table);
int hashSearchType(char *text, pilha* scope);
void verifyUndeclared(valor_lexico token,ast* arvore, int line, pilha* stack);
void verifyDeclared(valor_lexico token, int line, pilha* scope);
void verifyIdentifier(pilha* scope, char* text, int line);
void verifyFunction(pilha* scope, char* text, int line);


int typeInference(int typeA, int typeB);

//Funções da pilha

pilha* pilha_init();
pilha* pilha_push(pilha* scope, HASH_NODE** table);
pilha* pilha_pop(pilha* scope);
void pilha_free(pilha* scope);
/*



char* getText(HASH_NODE *node);*/
#endif
