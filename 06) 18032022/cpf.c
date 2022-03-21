/* Programa para calcular o CPF e verificar se o mesmo é valido */

#include <stdio.h>

int main(){

    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[11];
    system("clear");

    printf("Digite o Número do seu CPF sem o Traço: ");
    scanf("%s", cpf);

     /*Converter todos os caracteres do cpf para número.
    Para isso, devemos cirar um conjunto de números
    Em tipo INT e realizar a conversão usando FOR. */

    int iCpf[11];

    for (int x = 0; x <=10; x++){
        iCpf [x] = cpf[x] - 48;
    }

   
    for (int i = 0; i <= 8 ; i++){
        total += iCpf[i]*peso10;
        peso10--;
    }

    resto = total % 11;
    //Se o resto da divisao for menor que 2, então o primeiro digito de verificação será 0

    if(resto < 2){
        iCpf [9] = 0;
        }
    
    else {
        iCpf[9] = 11 - resto;
    }

    total = 0;
    resto = 0;
    
for (int i = 0; i <= 9 ; i++){
        total += iCpf[i]*peso11;
        peso11--;
    }
    resto = total % 11;
     if(resto < 2){
        iCpf [10] = 0;
        }
    
    else {
        iCpf[10] = 11 - resto;
    }
    

    for (int i = 0 ; i <= 10 ; i++){
        printf("%d", iCpf[i]);
    }

    printf("\n");


    return 0;
}