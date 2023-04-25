#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, res;
    int opera, loop = 0;
    

        do{
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o numero referente a operacao: \n\t1 - soma\n\t2 - subtracao\n\t3 - multiplicacao\n\t4 - divisao\n");
            scanf("%i", &opera);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);


        
            switch(opera){
            case 1:
                res = num1+num2;
                break;
        
            case 2:
                res = num1-num2;
                break;
        
            case 3:
                res = num1*num2;
                break;
        
            case 4:
                res = num1/num2;
                break;
            default:
                printf("Caracter invalido");
                break;

            }
            printf("\tO resultado e: %.3f\n", res);
            printf("Digite 1 para continuar: ");
            scanf("%i", &loop);

        }while(loop == 1);
        
       
    

    
}
