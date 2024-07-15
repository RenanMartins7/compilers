#ifndef HASH_HEADER
#define HASH_HEADER


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define HASH_SIZE 997

typedef struct hash_node{
    char *text;
    struct hash_node * next;
}HASH_NODE;



HASH_NODE** initMe();

/*void initMe();
int hashAdress(char *text);
HASH_NODE *hashFind(char *text);
HASH_NODE *hashInsert(char *text);
void hashPrint();
char* getText(HASH_NODE *node);*/
#endif
