// Programa pede ao usuário que digite o seu nome.
// Ao fazer, será alocado na variável NOME


#include <stdio.h>

int main(){

    char nome[90];

    printf("Digite seu Nome Completo e pressione a tecla ENTER: ");
    scanf("%s", nome); //Para alocar caracteres dentro da variavel NOME
    printf("%s\n", nome);


    return 0;
}