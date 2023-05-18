#include <stdio.h>
#include <locale.h>

int main(){
    char x;
    int i, vogais=0, outros;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite as letras que deseja contar: ");
    
    for(i=0; i<20; i++){
        printf("Letra: ");
        scanf(" %c", &x);

        if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u'){
            vogais++;

        }else{
            outros++;
        }
    } 

    printf("Dentre os caracteres digitados existem: %i vogais e %i de outros caracteres!", vogais, outros);

}