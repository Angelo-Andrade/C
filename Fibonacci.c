#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int soma, num1, num2, num3, loop;
    
    num1 = 0;
    num2 = 0;
    num3 = 1;
    soma = 1;
    loop = 1;


    
        printf("Qual numéro deseja verificar?\n");
        scanf("%i", &num1);
    
        while(soma < num1){
            soma = num2 + num3;
            num2 = num3;
            num3 = soma;
            printf("%i\n", soma);
        }
    
        if(soma == num1){
            printf("O numero pertence a sequencia de fibonacci.\n");
        }else{
            printf("O numero não pertence a sequencia de fibonacci\n");
        }
        printf("Aperte 1 para continuar\n");
        scanf("%i", &loop);
    
}



