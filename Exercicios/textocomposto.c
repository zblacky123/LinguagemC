#include <stdio.h>
#include <stdlib.h>

void main (){

    char produto [30];
    printf("Informe o Nome do Produto: ");
    scanf("\n%[^\n]s", produto);

    printf("Produto: %s \n", produto);

}