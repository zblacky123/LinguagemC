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
   
    for (int i = 0; i <= 8 ; i++){
        printf("%d\n", cpf[i]*peso10);
        peso10--;
    

    
    }    

    return 0;
}