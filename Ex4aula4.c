#include <stdio.h>
int main(){
    int num1;
    printf("Qual numero deseja checar?\n");
    scanf("%i", &num1);

    if((num1%13)==0){
        printf("O numero e divisivel por 13");

    }else{
        printf("O numero nao e divisivel por 13");

    }

}
