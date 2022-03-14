// Produtos a ser descontado

#include <stdio.h>

int main(){
    float preco, desconto, descontado, resultado, porcento;

    printf("Digite o Valor do Produto: ");
    scanf("%f", &preco);

    printf("Digite o Valor a ser descontado: ");
    scanf("%f", &desconto);

    porcento = desconto/100;

    descontado = preco * porcento;

    printf("O Valor descontado foi de: %.2f", descontado);
    printf(" reais");

    resultado = preco - descontado;

    printf("\n O preco final do produto foi de: %.2f", resultado);
    printf(" reais");

    return 0;

    }