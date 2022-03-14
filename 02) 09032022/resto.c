// Resto de Divisao
#include <stdio.h>

int main(){
    int a=26;
    int b, c, d, resto;

    printf("Digite o Valor da Divisao: ");
    scanf("%d", &b);
    c=a/b;

    printf("\nO Resultado e: %d", c);
    d=b*c;
    resto=a-d;

    printf("\nO Resto e: %d", resto);
    return 0;

}