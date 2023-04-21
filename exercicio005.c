#include <stdio.h>
#include <math.h>

int main(){
//soma de duas raizes de numeros adquiridos
    double m, n, raiz_quadradam, raiz_quadradan, soma;
    printf("Diga dois valores para efetuar uma soma de raizes:\n");
    scanf("%lf", &m);
    scanf("%lf", &n);
    raiz_quadradam = sqrt(m);
    raiz_quadradan = sqrt(n);
    soma = raiz_quadradam+raiz_quadradan;
    printf("O valor da soma das raizes e: %f", soma);

    
}
