#include <stdio.h>
#include <stdlib.h>

void main(){

    float num, soma=0, media=0;
    int i;
    system("clear");
        //inicio do laço FOR
    
    for (i=1; i<=10; i++){
        //a partir desse ponto são as instruções
        //que devem ser executados nas interações

        printf("Informe um Número: ");
        scanf("%f", num);
        soma += num;
    }

        //a média deve ser calculada após a interação
        media = soma / 10;
        printf("A Média é: %.2f", media);
}