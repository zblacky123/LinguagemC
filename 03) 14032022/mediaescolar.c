/*Programa para calcular o resultado das situação do aluno
se está aprovado ou reprovado. Vamos levar em consideração
a nota do aluno e compará-la a média de aprovação da escola.
Caso a nota do aluno seja maior ou igual a 7, então o aluno
estára aprovado, caso contrário, estará reprovado */


#include <stdio.h>

#define MEDIAESCOLA 7.0

int main(){
    //declaração da varialvel notaAluno com o tipo Float

    float notaAluno;
    printf("Digite a Nota do Aluno: ");
    scanf ("%f", &notaAluno);
    

    //desvio de fluxo com if .. else

    if(notaAluno >= MEDIAESCOLA){
        printf("O Aluno Está Aprovado!!\n\n");
    }
    else{
        printf("Aluno Reprovado :(\n\n");
    }
    return 0;
}