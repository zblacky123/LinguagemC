#include <stdio.h>

int main(){

    int qtd = 0;
    int ano;

    system("clear");

    for (ano = 1950; ano <= 2022; ano++){
        if( ano %4 == 0){
            printf("%d é bissexto\n", ano);
            qtd++;

        }

    }

        printf("Encontramos %d anos bissextos\n\n", qtd);
}
