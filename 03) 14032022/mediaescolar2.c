/* Programa para calcular a situação
do aluno. Neste programa teremos
as seguites saídas
    Aprovado, quando a nota e maior ou igual a 7
    Reprovado, quando a nota e menor ou igual a 4
    Recuperação, quando a nota entre maior que 4 e menor que 7
*/

#include <stdio.h>

#define MEDAPROV 7.0
#define MEDREPROV 4.0

int main(){
    float notaAluno;
    printf("Digite a Nota do Aluno e pressione a tecla ENTER: ");
    scanf("%f", &notaAluno);

    if(notaAluno >= MEDAPROV){
        printf("O Aluno está Aprovado :)) \n\n");

    }
    else if (notaAluno <= MEDREPROV){
        printf("O Aluno está Reprovado :(( \n\n");
    }
    
    else{
        printf("O Aluno está em Recuperação :/\n\n");
    }
}