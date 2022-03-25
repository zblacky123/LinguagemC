#include <stdio.h>
#include <stdlib.h>

void main(){

    char produto [30];
    
    printf("Informe o Nome do Produto: ");
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);
}