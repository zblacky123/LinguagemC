//Programa para trabalhar funções. Vamos usar funções com:

//Retorno, sem retorno, com argumentos (parâmetros), sem argumentos

#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for (int i = 0; i <= 50; i++){
            printf("#");

    }
    printf("\n");
}
void separadorLinha(){
    for (int i = 0; i <= 50; i++){
            printf("_");

    }
    printf("\n");
}

void pularLinha( int qtdVezes){

    for (int i = 1; i <= qtdVezes; i++){
        printf("\n");
    }

}

char comparar(int v1, int v2){
    if (v1 > v2){
        printf ("O Primeiro Número é Maior que o Segundo");
    }
    else if (v1 == v2){
        printf("Os Número São Iguais");
    }
    else{
        printf("O Segundo Número é Maior que o Primeiro");
    }

}

 main(){

    int n1, n2;

    system ("clear");
    separadorHT();
    pularLinha(2);
    printf("\n\tPrograma que exibe uma Mensagem\n");
    pularLinha(2); //função criada na linha 24 para pular linha usando estrutura de repetição FOR
    separadorHT(); //chamando a função separador HT ou separado de Linha, o mesmo para a linha 34 
    
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro Número: ");
    scanf("%d", &n2);

    pularLinha(1);

    comparar(n1,n2);

    pularLinha(1);

}

