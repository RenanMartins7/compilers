#include "hash.h"
#include <string.h>


//HASH_NODE*Table[HASH_SIZE];

#define HASH_SIZE 997


HASH_NODE** initMe(){
    int i;
    HASH_NODE **table;

    table = (HASH_NODE**)calloc(HASH_SIZE, sizeof(HASH_NODE*));

    for(i=0;i<HASH_SIZE;++i){
        table[i] = NULL;
    }

    return table;
}
int hashAdress(char *text){
    int adress = 1;
    int i;
    for(i=0;i<strlen(text); ++i){
        adress = (adress * text[i]) % HASH_SIZE + 1;
    }
    return adress-1;
}
HASH_NODE *hashFind(char *text, HASH_NODE** table){
    HASH_NODE *node;
    int adress = hashAdress(text);

    for(node=table[adress];node;node = node->next){
        if(strcmp(node->text,text) == 0){
            return node;
        }
    }
    return 0;
}

void hashInsert(char *text, HASH_NODE** table, int idNature, valor_lexico data){
    HASH_NODE *newnode;
    int adress = hashAdress(text);

    if((newnode = hashFind(text, table))!=0){
        return;
    }

    newnode = (HASH_NODE*) calloc(1,sizeof(HASH_NODE));
    newnode->text = (char*) calloc(strlen(text)+1, sizeof(char));
    strcpy(newnode->text, text);
    newnode->data = data;
    newnode->nature = idNature;
    newnode->next = table[adress];

    table[adress] = newnode;
}
void hashPrint(HASH_NODE* table){
    int i;
    HASH_NODE *node;
    
    for(i=0; i<HASH_SIZE;++i){
        for(node = &table[i]; node; node = node->next){
            printf("Table[%d] has %s\n", i, node->text);
        }
    }
}

//Funções da pilha
pilha* pilha_init(){
    pilha* stack;

    stack = (pilha*)calloc(1, sizeof(pilha));
    stack->table = NULL;
    stack->next = NULL;

    return stack;
}

pilha* pilha_push(pilha* stack, HASH_NODE** table){
    pilha* newstack;

    newstack = (pilha*)calloc(1,sizeof(pilha));

    newstack->next = stack;
    newstack->table = table;

    return newstack;
    
}

pilha* pilha_pop(pilha* stack){
    pilha* newstack;

    if(stack == NULL){
        return NULL;
    }

    newstack = stack->next;
    free(stack);

    return newstack;
}
/*






char* getTextHash(HASH_NODE *node){
    return node->text;
}
*/
