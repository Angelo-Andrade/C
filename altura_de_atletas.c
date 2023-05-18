#include <stdio.h>

int main(){
    int i;
    float altura = 0, media = 0, maisAlto = 0, alturaNova;
    
    printf("Digite a seguis a altura de 8 atletas pare verificar: \n");
    printf("Altura:\n");
    scanf("%f", &altura);
    
    maisAlto = altura;

    if(altura<0){
            printf("Altura invalida!");
            return 0;
        }

//leitura das outras alturas e decisao da maior altura
    for(i=1; i<8; i++){
        
        printf("Altura:\n");
        scanf("%f", &alturaNova);
        
        if(maisAlto<alturaNova){
            maisAlto = alturaNova;
        }

        if(alturaNova<0){
            printf("Altura invalida!");
            return 0;
        }

        altura = altura + alturaNova;

        printf("%f", altura);
    }
    
    media = (altura)/8;
        
    printf("A media dos atletas e %f e %f e a maior altura dentre os atletas.", media, maisAlto);

}