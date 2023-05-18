#include <stdio.h>
#include <math.h>

int main(){

    float circ, cump, area;
    printf("Qual o valor do raio da circunferencia? ");
    scanf("%f", &circ);
    
    cump = 2*3.14*circ;
    area = 3.14*pow(circ, 2);
    
    printf("A circunferencia tem cumprimento %f, e area %f. ", cump, area);

}
