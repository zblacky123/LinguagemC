/* Laço utilizado geralmente quando existe um termino
definido, sempre vai ter um fim definido para esse
laço implementando no ínicio.

Sintaxe: (Variável de inicialização; Condição)

Variável de inicialização: Comando de atribuição que
inicia uma variável que faz o controle do laço

Condição: expressão usada que determinará o final do laço

Incremento: define a variável de controle e muda a cada passada de laço

Exemplo: */



#include <stdio.h>

int main(){
    int i;
    system("clear");

    for (i=1; i<=10; i++){

        printf("%d\n", i);
    }
}