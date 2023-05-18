#include <stdio.h>
int main(){
    int num1;
    printf("Qual numero deseja checar?\n");
    scanf("%i", &num1);

    if(num1>0){
        printf("O numero e positivo");

    }else if(num1==0){
        printf("O numero e nulo");

    }else if(num1<0){
        printf("O numero e negativo");

    }
}
