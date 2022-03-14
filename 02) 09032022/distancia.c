// Distancia Inicial, Distancia Final, Tempo Inicial, Tempo Final, Distancia, Tempo

#include <stdio.h>
int main(){
    float v, d2, d1, t1, t2, d, t;

    printf("Digite Respectivamente os Valores de DISTANCIA INICIAL, DISTANCIA FINAL, HORARIO INICIAL E HORARIO FINAL: ");
    scanf("%f", &d1);
    scanf("%f", &d2);
    scanf("%f", &t1);
    scanf("%f", &t2);

    d=d2-d1;

    printf("\nO Valor da Distancia Final e: %.1f", d);
    printf(" KM");
    t=t2-t1;

    printf("\nO Valor do Tempo Final e: %.2f", t);
    printf(" h");
    v=d/t;

    printf("\nVelocidade Escalar Media e: %.2f", v);
    printf(" KM/h");


}