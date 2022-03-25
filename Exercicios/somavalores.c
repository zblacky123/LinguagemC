#include <stdio.h>
#include <stdlib.h>

    void main (){
        int soma, num1, num2;
        
        printf("Informe o Primeiro Número: ");
        scanf("%d", &num1);

        printf("Informe o Segundo Número: ");
        scanf("%d", &num2);

        soma = num1 + num2;

        printf("Resultado da Soma é: %d", soma);
        printf("\n");

    }