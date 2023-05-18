int main(){
        float nota1, nota2, nota3, media;

        printf("Digite suas notas:\nPrimeira nota: ");
        scanf("%f", &nota1);
        printf("Segunda nota: ");
        scanf("%f", &nota2);
        printf("Terceira nota: ");
        scanf("%f", &nota3);
        
        media = (nota1+nota2*2+nota3*3)/6;
        
        printf("Media e igual a: %f.2", media);
        
        if(media>=9){printf("Grupo A");}
        else if(media>=7.5){printf("Grupo B");}
        else if(media>=6){printf("Grupo C");}
        else if(media>=4){printf("Grupo D");}
        else if(media<=4){printf("Grupo E");}

}
