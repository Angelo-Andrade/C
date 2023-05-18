#include <stdio.h>
#include <math.h>

int main(){
    int saque, moeda1=0, nota2=0, nota5=0, nota10=0, nota20=0, nota50=0, nota100=0, nota200=0;
    printf("Qual o valor deseja sacar? ");
    scanf("%i", &saque);
    while(saque!=0){
        printf("%i\n", saque);
        if(saque>=200){
            nota200 = saque/200;
            saque = saque%200;
        }else if(saque>=100){
            nota100 = saque/100;
            saque = saque%100;
        }else if(saque>=50){
            nota50 = saque/50;
            saque = saque%50;
        }else if(saque>=20){
            nota20 = saque/20;
            saque = saque%20;
        }else if(saque>=10){
            nota10 = saque/10;
            saque = saque%10;
        }else if(saque>=5){
            nota5 = saque/5;
            saque = saque%5;
        }else if(saque>=2){
            nota2 = saque/2;
            saque = saque%2;
        }else if(saque>=1){
            moeda1 = saque/1;
            saque = saque%1;
        }
    }
    printf("\nNotas de 200: %i", nota200);
    printf("\nNotas de 100: %i", nota100);
    printf("\nNotas de 50: %i", nota50);
    printf("\nNotas de 20: %i", nota20);
    printf("\nNotas de 10: %i", nota10);
    printf("\nNotas de 5: %i", nota5);
    printf("\nNotas de 2: %i", nota2);
    printf("\nMoedas de 1: %i", moeda1);
}
