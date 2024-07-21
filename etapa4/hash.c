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

void hashInsert(char *text, HASH_NODE** table, int idNature, valor_lexico data, int type){
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
    newnode-> astType = type;

    table[adress] = newnode;
}
void hashPrint(HASH_NODE** table){
    int i;
    HASH_NODE *node;
    
    for(i=0; i<HASH_SIZE;++i){
        for(node = table[i]; node; node = node->next){
            printf("Table[%d] has %s with type %d\n", i, node->text, node->astType);
        }
    }
}


int hashSearchType(char *text, pilha* scope){
    if(scope == NULL) return 0;

    HASH_NODE* node;

    node = hashFind(text, scope->table);
    if(node == NULL) return hashSearchType(text, scope->next);

    return node->astType;
}

void verifyUndeclared(valor_lexico token,ast* arvore, int line, pilha* stack){
    int i = hashSearchType(token.token_value, stack);
	if(i == 0){
		printf("\n Variável %s nao declarada na linha %d\n", token.token_value, line);
		exit(ERR_UNDECLARED);
	}
	else{
		arvore->astType = i;
	}
}

void verifyDeclared(valor_lexico token, int line, pilha* scope){
    HASH_NODE* node;
    node = hashFind(token.token_value, scope->table);

    if(node != NULL){
        printf("\n Variável %s na linha %d ja foi declarada\n", token.token_value, line);
        exit(ERR_DECLARED);
    }
}

void verifyIdentifier(pilha* scope, char* text, int line){

    if(scope == NULL){
        printf("\nError one verifyIdentifier, null scope");
        return;
    }

    HASH_NODE* node;

    node = hashFind(text, scope->table);
    if(node == NULL) verifyIdentifier(scope->next, text, line);

    else if(node->nature == ID_FUNCTION){
        printf("\nIdentificador de função %s utilizado como variável na linha %d", text, line);
        exit(ERR_FUNCTION);
    }


}

void verifyFunction(pilha* scope, char* text, int line){

    
    if(scope == NULL){
        printf("\nError one verifyFunction, null scope");
        return;
    }

    HASH_NODE* node;

    node = hashFind(text, scope->table);
    
    if(node == NULL) verifyFunction(scope->next, text, line);

    
    else if(node->nature == ID_IDENTIFIER){
        
        printf("\nIdentificador de variável %s utilizado como função na linha %d", text, line);
        exit(ERR_VARIABLE);
    }
    


}

int typeInference(int typeA, int typeB){
    if(typeA == typeB) return typeA;
    if(typeA == AST_FLOAT || typeB == AST_FLOAT) return AST_FLOAT;
    if(typeA == AST_BOOL || typeB == AST_BOOL) return AST_BOOL;
    return AST_INT;
}

//Funções da pilha
pilha* pilha_init(){
    pilha* stack;

    stack = (pilha*)calloc(1, sizeof(pilha));
    stack->table = NULL;
    stack->next = NULL;

    return stack;
}

pilha* pilha_push(pilha* scope, HASH_NODE** table){
    pilha* newstack;

    newstack = (pilha*)calloc(1,sizeof(pilha));

    newstack->next = scope;
    newstack->table = table;

    return newstack;
    
}

pilha* pilha_pop(pilha* scope){
    pilha* newstack;

    if(scope == NULL){
        return NULL;
    }

    newstack = scope->next;
    free(scope);

    return newstack;
}


void pilha_free(pilha* scope){
    if(scope == NULL) return ;

    pilha_free(scope->next);
    free(scope);
}
/*






char* getTextHash(HASH_NODE *node){
    return node->text;
}
*/
