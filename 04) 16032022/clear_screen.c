//system("clear");  //comando para limpar a tela // clear screen (limpar tela)

#include <stdio.h>

int main(){

    int opcao = 0;
    system("clear");
    printf("#################################################");
    printf("\n#\tPrograma para exibir os salários\t#\n");
    printf("#################################################");
    printf("\nEscolha um dos cargos abaixo digitando o número\n\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("\tEscolha sua Opção: ");
    scanf("%d", &opcao);
    printf("\n--------------------------------------------------------\n");

            switch(opcao){
                case 1:
                printf("\n\nO Salário do Diretor é de: R$15.000,00\n\n");

                    break;

                case 2:
                printf("\n\nO Salário do Gerente é de: R$12.000,00\n\n");

                    break; scanf("%d", &opcao);

                case 3:
                printf("\n\nO Salário do Analista é de: R$8.000,00\n\n");

                    break;
                
                case 4:
                printf("\n\nO Salário do Assistente é de: R$4.000,00\n\n");

                    break;

                case 5:
                printf("\n\nO Salário do Auxiliar é de: R$2.000,00\n\n");

                    break;    

                default:
                    printf("\nNão há salário!!\n\n");
                    
                    break;

            }
            printf("Deseja voltar ao Menu Principal ? (SIM / NÃO)\n\tSua Escolha: ");
    
    return 0;

}