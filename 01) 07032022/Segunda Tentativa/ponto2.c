#include <stdio.h>
int main()
{
    char car;                                   // declara var. car do tipo char
    printf ("Digite um Caractere e Enter\n");   // mostra na tela
    scanf ("%c", &car);                         // %c para ler ou mostrar char 1 char
    printf ("Caractere digitado e '%c\n", car);
    return 0;
    //mostrou na tela o valor de car lido
} // fim main