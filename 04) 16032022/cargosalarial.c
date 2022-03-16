// Programa para mostrar o salario de cada cargo

// Break: Sera ultilizado dentro do Switch...Case para terminar o comando sem ter que passar pelas outras instruções

// DO WHILE: Executa pelo menos uma vez o que está dentro dele e no final da execução que ele testa, usando o laço WHILE
/* WHILE: Testa a condição, se a condição for falsa, então ele pula todos os comandos do bloco subordinado
ao while e passa a executar os comandos após do bloco while. Se a condição for verdadeira
então executa cada um dos comandos do bloco subordinado WHILE 
*/ 

#include <stdio.h>

int main(){
    int num;
    char escolha;

    do{
        printf("\n\t\tMenu Salarial\n");
        printf("\nSobre qual cargo você deseja saber o Salario?\n\n1- Diretor\n2- Gerente\n3- Analista\n4- Assistente\n5- Auxiliar\n\nDigite 0 para voltar ao menu principal!\n\nSua Escolha: ");
        scanf("%d", &num);

        switch (num){
            case 1:
                printf("\nO Salario do Diretor é de: R$15.000,00\n\n");

                break;

            case 2:
                printf("\nO Salario do Gerente é de: R$12.000,00\n\n");

                break;

            case 3:
                printf("\nO Salario do Analista é de: R$8.000,00\n\n");

                break;
            
            case 4:
                printf("\nO Salário do Assistente é de: R$4.000.00\n\n");

                break;

            case 5:
                printf("\nO Salário do Auxiliar é de: R$2.000,00\n\n");

                break;
                
            default:
                printf("\nFora de área...");
                        break;
        }
        printf("\n\n\tDeseja voltar ao Menu Principal ? (y/n)\n\tSua Escolha: ");
        scanf("%s", &escolha);

    }while(escolha=='y');
    
    return 0;
}