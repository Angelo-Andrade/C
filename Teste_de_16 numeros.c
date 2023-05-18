#include <stdio.h>
int main(){
    int i, x;
    float num, maior, menor;
    do{
        printf("Digite 16 numeros para averiguar qual e o maior, comecando agora:\n");
        scanf("%f", &num);
        
        maior = num;
        menor = num;
        
        for(i=1; i<16; i++){
            printf("Proximo numero:\n");
            scanf("%f", &num);

            if(maior<num){
                maior = num;
            }else if(menor>num){
                menor = num;
            }

        }
        
        printf("O maior numero e: %f; e o menor numero e: %f\n", maior, menor);
        printf("Digite 0 para continuar:\n");
        scanf("%d", &x);
    }while(x == 0);
    printf("Fim da verificacao.");
}