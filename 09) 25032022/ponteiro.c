/*
Programa para estudar um pouco sobre ponteiro.
Este será o nosso primeiro exemplo.
*/


#include <stdio.h>
#include <stdlib.h>


void main(){
system ("clear");

    int valor = 50;
    int *pvalor = &valor;

    printf("%d É o Valor e a posiçao da memória é %p \n", valor, pvalor);

    

}