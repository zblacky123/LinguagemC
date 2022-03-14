#include <stdio.h>
int main(){
    int num;
    char escolha;
    
        do{
        printf("\t\tMenu Principal\n");
        printf("\nQual Informação Deseja ?\n\n1- Horário de Funcionamento\n2- Documentos\n3- Endereço\n4- Telefone\nDigite 0 para voltar ao menu principal!\n\nSua Escolha: ");
        scanf("%d", &num);

        switch (num){
            
            case 1:
            printf("Das 08:00h ás 20:00h\n\n");
            
            break;
            case 2:
            printf("Digite seu RG, CPF e Comprovante de Endereço");
            break;
            default: 
            printf("Fora de Area... Deseja voltar Ao Menu Principal? (y/n\n")
            scanf("%s", &escolha);
            break;

        }

     }while (escolha== 'y');

    return 0;
}
