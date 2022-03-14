// Calculadora com as 4 operacoes matematicas (Adicao, Subtracao, Divisao e Multiplicacao)

#include <stdio.h>

int main()
{
    int operacao, valor1, valor2, resultado;

    printf("Escolha sua operacao\n1- Adicao\n2- Subtracao\n3- Divisao\n4- Multiplicacao");
    scanf("%d", &operacao);

    if(operacao==1){
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Digite o Segundo Valor: ");
    scanf("%d", &valor2);
    resultado = valor1 + valor2;

    printf("O Resultado e:%d", resultado);
    }
        
        if(operacao==2){
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Digite o Segundo Valor: ");
    scanf("%d", &valor2);
    resultado = valor1 - valor2;

    printf("O Resultado e:%d", resultado);
    }
    if(operacao==3){
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Digite o Segundo Valor: ");
    scanf("%d", &valor2);
    resultado = valor1 / valor2;

    printf("O Resultado e:%d", resultado);
    }
    if(operacao==4){
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &valor1);

    printf("Digite o Segundo Valor: ");
    scanf("%d", &valor2);
    resultado = valor1 * valor2;

    printf("O Resultado e:%d", resultado);
    }

}