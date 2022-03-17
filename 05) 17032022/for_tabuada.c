#include <stdio.h>

int main(){
    int n;
    int mult;
    system("clear");


    printf("Digite o Numero que você deseja saber a tabuada: ");
    scanf("%d", &n);

    for (mult = 1; mult <=10; mult++){

        printf("%d x %d = %d\n", n, mult, n*mult);
    }

}