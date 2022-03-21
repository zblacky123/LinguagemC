//Programa para apresentar números pares, entre 0 e 50, vamos usar a estrutura Do While


#include <stdio.h>

int main (){

    int i = 0;

    do{
        if(i%2==0){

            printf("O número %d é par\n", i);
        }
        i++;


    }while(i<= 50);

}