#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50];
    char box;
    
    
    printf("Digite uma frase pequena que deseja inverter: \n");
    scanf("%s", str);
    
    int i, tamanho = strlen(str);

    for (i=0; i<(tamanho/2); i++){
        box = str[i];
        str[i] = str[tamanho-1-i];
        str[tamanho-1-i] = box;

    }
    
    printf("str = %s\n", str);
   



}