/*Laço quase iogual ao While, a diferença é que primeiro
ele executa um bloco e testa a condição, caso seja
falsa vai para a próxima instrução.

Sintaxe

Do{

        comandos;

}while (condição);
*/



#include <stdio.h>

int main(){

    int i=0;

    do{

        i++;
        printf("%d\n", i);

    }while (i <= 10);

}

/* Se notarem no comando while ele preenche até o
numero 10, pois ele testa a condição primeiro e no DO WHILE
podem notar que ele imprime o 11 devido ele entrar
novamente dentro do laçõ e depois testar a condição.

Com isso mostro que não tem dificuldade em utilizar
essa linguagem de programação, pois os conceitos são os mesmos
das outras linguagens, lembrando que, estou mostrando a parte básica ainda
da utilização de Estrutura de Repetição */
