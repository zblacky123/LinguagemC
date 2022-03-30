/*Programa para calcular o desconto de um funcionário.
Onde o salário sendo maior que 5000.00, terá um desconto de 5%.
Caso contrário, não haverá desconto.
*/

#include <stdio.h>
#define LIMITE 5000.00

int main(){
    float salFunc; //Salario do Funcionário
    printf("Digite o Valor do Salario do Funcionário: ");
    scanf("%f", &salFunc);

   separador();    if(salFunc > LIMITE){
        printf("O Desconto será de %.2f\n\n", salFunc*0.05);
        printf("O Valor Final é: %.2f\n", salFunc- (salFunc * 0.05) );

    }
    else{
        printf("Não há Desconto :((\n\n");
    }
    return 0;
}