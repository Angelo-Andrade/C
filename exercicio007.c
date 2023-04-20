#include <stdio.h>
#include <math.h>

//jornada de trabalho
int main(){ 
    
    float horaExt, valorHoraTrab, valorHoraExt;
    double valorMes;

        printf("Me conte, qual o valor da sua hora de trabalho?\n");
            scanf("%f", &valorHoraTrab);
        printf("Agora, por favor diga quantas horas de trabalho extra voce fez este mes:\n");
            scanf("%f", &horaExt);    
    
    valorHoraExt = ((0.5*valorHoraTrab)+valorHoraTrab)*horaExt;
    valorMes = (valorHoraTrab*40*4)+(valorHoraExt);

        printf("Aproximadamente, o salario mensal da sua jornada de trabalho e: R$%lf \n", valorMes);




}