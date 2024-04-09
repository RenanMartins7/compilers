/*
Função principal para realização da análise sintática.

Este arquivo será posteriormente substituído, não acrescente nada.
*/
#include <stdio.h>
#include "parser.tab.h" //arquivo gerado com bison -d parser.y
extern FILE* yyin; // Variável global definida pelo Flex para leitura de entrada

extern int yyparse(void); // Correção do protótipo da função yyparse
extern int yylex_destroy(void);

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Uso: %s arquivo_entrada.txt\n", argv[0]);
        return 1;
    }

    // Abrir o arquivo de entrada
    FILE *arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    // Redirecionar a entrada do analisador léxico para o arquivo
    yyin = arquivo;

    // Chamar a função de análise sintática
    int ret = yyparse();

    // Fechar o arquivo
    fclose(arquivo);

    // Destruir o analisador léxico (Flex)
    yylex_destroy();

    printf("\n Resultado: %d\n", ret);

    return ret;
}


