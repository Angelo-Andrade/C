#include <stdio.h>
#include <math.h>

int main(){
    int loop;
    float salario;
    do{
        printf("Quanto voce ganha mensalmente? ");
        scanf("%f", &salario);

        if(salario<=1908.98){
            printf("Voce esta isento da aliquota de desconto de imposto! ");

        }else if(salario<=2826.65){
            printf("\nVoce tera 7.5%% de aliquota de desconto de imposto, com reducao de R$142.80");
            salario=salario-(salario*0.075-142.80);
            printf("\nSeu salario sera de %f", salario);

        }else if(salario<=3751.05){
            printf("\nVoce tera 15%% de aliquota de desconto de imposto, com reducao de R$354.80");
            salario=salario-(salario*0.15-354.80);
            printf("\nSeu salario sera de %f", salario);

        }else if(salario<=4664.68){
            printf("\nVoce tera 22.5%% de aliquota de desconto de imposto, com reducao de R$636.13");
            salario=salario-(salario*0.225-636.13);
            printf("\nSeu salario sera de %f", salario);

        }else{
            printf("Voce tera 27.5%% de aliquota de desconto de imposto, com reducao de R$869.36");
            salario=salario-(salario*0.275-869.36);
            printf("\nSeu salario sera de %f", salario);

        }
        printf("\nDigite 1 para repetir o processo: ");
        scanf("%i", &loop);
    }while(loop==1);





}


