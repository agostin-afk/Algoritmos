#include <stdio.h>
#include <stdlib.h>

int main()
{   float notas[5], media=0;
    int i, cont = 0;
    for (i =0; i<=4; i++){
        printf("informe a nota do aluno numero %d: ", i+1);
        scanf("%f",&notas[i]);
        media = media +notas[i];
        if(notas[i]< 6){
            cont++;
        }
    }
    media = media/5;
    printf("A media dos alunos foram: %.2f\n", media);
    if(cont != 0){
        printf("%d alunos ficaram abaixo da media", cont);
    }

    return 0;
}
