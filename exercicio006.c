#include <stdio.h> 
#include <math.h>



int main(){
    double R, areaN, comprimentoN;
 
    printf("Para efetuar as contas, qual o valor do raio da circunferencia?\n");
    scanf("%lf", &R);
    areaN = 3.14*R;
    printf("A area equivale, aproximadamente, a: %lf unidades de medida de distancia.\n", areaN);
    comprimentoN = 2*3.14*R;
    printf("O comprimento equivale, aproximadamente, a: %lf unidades de medidade de distancia.\n", comprimentoN);

}
