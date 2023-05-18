#include <stdio.h>
int main(){
    int num1;
    printf("Qual numero deseja ferificar?\n");
    scanf("%i", &num1);

    if((num1%2)==0){
        printf("O numero e par");


    }else{
        printf("O numero e impar");
    }
}
