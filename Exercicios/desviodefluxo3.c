#include <stdio.h>
#include <stdlib.h>
void main (){
        char nome[30];
        int idade, bemAlimentado, resfriado;
        float peso;

        printf("Informe o seu Nome: ");
        scanf("%s", &nome);

        printf("Informe o Peso ");
        scanf("%f", &peso);

        printf("Informe a Idade: ");
        scanf("%f", &idade);

        printf("Está bem alimentado? <1) SIM / 0) NAO>: ");
        scanf("%d", &bemAlimentado);

        printf("Esta resfriado? <1) SIM / 0) NAO>: ");
        scanf("%d", &resfriado);

        if (peso >= 50 && (idade >= 16 && idade <= 69)
                 && bemAlimentado && !resfriado)

        printf("\nO Voluntario %s esta apto!", nome);
        
        else
        printf("\nO Voluntario %s NAO esta apto", nome);
}