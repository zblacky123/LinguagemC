#include  <stdio.h>
#include <stdlib.h>

void main (){

    char nome[30];
    int idade, bemAlimentado, resfriado;
    float peso;

    printf("Informe o nome: ");
    scanf("%s", &nome);

    printf("Informe o Peso: ");
    scanf("%f", &peso);

    printf("Informe a Idade: ");
    scanf("%d", idade);

    printf("Está bem Alimentado ? <1) Sim / 0) Nao>");
    scanf("%d", &bemAlimentado);

    printf("Está Resfriado ? <1) Sim / 0) Nao>");
    scanf("%d", &resfriado);

    if (peso >= 50 && (idade >= 16 && idade <= 69) 
        && bemAlimentado && !resfriado)

    printf("O Voluntario %s está apto!", nome);

    else
        printf("O Voluntário %s NAO está apto!", nome);


}