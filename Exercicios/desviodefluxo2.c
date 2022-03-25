#include <stdio.h>
#include <stdlib.h>

void main(){

    int cargo;
    float SalAtual, reajuste;
    
    printf("Informe o Cargo do Funcionário: ");
    scanf("%d", &cargo);

    printf("Informe o Salário Atual: ");
    scanf("%f", &SalAtual);

    if (cargo==1)
        reajuste = (SalAtual * 7) / 100;
        
    else if (cargo==2)
        reajuste = (SalAtual * 9) / 100;
    
    else if (cargo==3)
        reajuste = (SalAtual * 5) / 100;

        else
            reajuste = (SalAtual * 12) / 100;
        
    printf("O Reajuste é: %f", reajuste);
    printf("O Novo Salário é: %f", SalAtual + reajuste);


}