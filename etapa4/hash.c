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
/*
int hashAdress(char *text){
    int adress = 1;
    int i;
    for(i=0;i<strlen(text); ++i){
        adress = (adress * text[i]) % HASH_SIZE + 1;
    }
    return adress-1;
}

HASH_NODE *hashFind(char *text){
    HASH_NODE *node;
    int adress = hashAdress(text);

    for(node=Table[adress];node;node = node->next){
        if(strcmp(node->text,text) == 0){
            return node;
        }
    }
    return 0;
}

HASH_NODE *hashInsert(char *text){
    HASH_NODE *newnode;
    int adress = hashAdress(text);

    if((newnode = hashFind(text))!=0){
        return newnode;
    }

    newnode = (HASH_NODE*) calloc(1,sizeof(HASH_NODE));
    newnode->text = (char*) calloc(strlen(text)+1, sizeof(char));
    strcpy(newnode->text, text);
    newnode->next = Table[adress];
    Table[adress] = newnode;
    return newnode;
}

void hashPrint(){
    int i;
    HASH_NODE *node;
    
    for(i=0; i<HASH_SIZE;++i){
        for(node = Table[i]; node; node = node->next){
            printf("Table[%d] has %s\n", i, node->text);
        }
    }
}#define HASH_SIZE 997

char* getTextHash(HASH_NODE *node){
    return node->text;
}
*/
