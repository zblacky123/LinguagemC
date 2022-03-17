/* Laço que pode ter uma condição de termino definida já
no início ou não.
Necessariamente ele testa a condição e se caso for
verdadeiro executa o bloco abaixo, caso seja falso ele
vai para a próxima instrução fora do laço

Sintaxe 

while(condição){

            comandos;
}

Condição: Pode ser qualquer expressão válida ou ate quando a verdadeira
Comando: Pode ser um bloco de comando vazio ou de repetição definido por um termino

*/


#include <stdio.h>

int main(){
    int i=0;
    system("clear");
    
    
    while(i < 10){
        
        i = i+1;
        printf("%d\n", i);
    }
    
}