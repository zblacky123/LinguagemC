//Programa para looping, com desativação por meio da tecla 9

#include <stdio.h>

int main(){

    int op = 0;
    
    printf("Digite um número para sair e pressione ENTER: \n");
    scanf("%d", &op);
    
    while(op !=9){
        
        printf("\n\t Tecla Errada :(( ");
        
        printf("\n\t Tente Novamente: ");
        scanf("%d", &op);

        system("clear");
    }

    return 0;
}
