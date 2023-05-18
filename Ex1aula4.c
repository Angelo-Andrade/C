#include <stdio.h>
int  main(){
    float num1;
    printf("Qual valor deseja checar?\n");
    scanf("%f", &num1);

    if(num1>100){
        printf("\tO valor e maior que 100");

    }else{
        printf("\tO valor e menor que 100");
    }


    }
