#include <stdio.h>
#include <stdlib.h>

int main()
{   float soma, media, nota=0;
    media = 0;
    soma = 0;
    printf("informe as notas dos alunos para tirar a media\n");
    for(int i = 1; i<=10; i++){
        printf("nota do %dº aluno: ",i);
        scanf("%f",&nota);
        if ((nota>=0) && (nota<=10)){
            soma = soma+nota;
            media++;
        }
        else{
            printf("nota invalida, tente novamente\n");
            i--;
        }
    }
    media = soma/media;
    printf("a media da sala deu: %.2f", media);
    return 0;
}
