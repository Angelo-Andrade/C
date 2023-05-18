#include <stdio.h>
int main(){
    char dinheiro, fome;
    printf("Digite S ou N para sim ou nao, respectivamente.");
    printf("Voce tem 1o reais?\n");
    scanf(" %c", &dinheiro);
    printf("Voce tem fome?\n");
    scanf(" %c", &fome);



    if(dinheiro == 'S'){
        printf("Dinheiro\n");

    }else if(dinheiro == 'N'){
        printf("Sem dinheiro\n");

    }else{
        printf("Caracter invalido");

    }

    if(fome == 'S'){
        printf("Fome\n");

    }else if(fome == 'N'){
        printf("Sem fome");

    }else{
        printf("Caracter invalido");

    }
}
