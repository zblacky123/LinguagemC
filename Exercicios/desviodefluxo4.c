#include <stdio.h>
#include <stdlib.h>

void main(){

    int destino, trecho;
    system("clear");
    printf("Informe o Destino Conforme a Tabela Abaixo: \n");
    printf("1- Regiao Norte \t 3- Centro-Oeste: \n");
    printf("2- Regiao Nordeste \t 4- Regiao Sul \n");
    printf("\nSelecione o Destino: ");
    scanf("%d", &destino);

    printf("informe o Trecho: <1- IDA ou 2- IDA E VOLTA>: ");
    scanf("%s", &trecho);


    if (destino == 1){
        if(trecho ==1)
        printf("Regiao Norte [IDA] = 500,00\n");

        else
            printf("Regiao Norte [IDA E VOLTA] = 900,00\n");

    }

    else if (destino == 2){
        if (trecho == 1)
            printf("Regiao Nordeste [IDA] = 350,00\n");
        
        else
            printf("Regiao Nordeste [IDA E VOLTA] = 650,00\n");

    }

    else if (destino == 3){

        if (trecho == 1)
            printf("Regiao centro-oeste [IDA] = 350,00\n");
        
        else 
            printf("Regiao centro-oeste [IDA E VOLTA] = 600,00\n");


    }

    else{
        if(trecho == 1)
        printf("Regiao Sul [IDA] = 300,00\n");
        
        else
            printf("Regiao Sul [IDA E VOLTA] = 550,00\n");
    }

}