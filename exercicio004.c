#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    
    double y, z, potenciay, potenciaz, soma;
    printf("A funcao e: x = y^2+z^3+1\n");
    printf("Diga dois valores para calcular o valor de X\n");
    scanf("%lf", &y);
    scanf("%lf", &z);
        
    
    potenciay = pow(y, 2);
    potenciaz = pow(z, 3);
    soma = potenciay+potenciaz+1; 
    printf("%f", soma);
