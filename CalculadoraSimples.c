#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, res;
    char opera;

        
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o operador: ");
        scanf("%s", &opera);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);


        if (opera == '+'){
        res = num1+num2;

        } else if(opera == '-'){
        res = num1-num2;

        }else if(opera == '*'){
        res = num1*num2;

        }else if(opera == '/'){
        res = num1/num2;
    
        }

    printf("\tO resultado e: %.3f\n", res);
    return 0;


    
}
