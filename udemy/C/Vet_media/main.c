#include <stdio.h>
#include <stdlib.h>

int main()
{   float notas[5], media;
    int cont=0;
    printf("informe a nota do primeiro aluno: ");
    scanf("%f", &notas[0]);
    printf("informe a nota do segundo aluno: ");
    scanf("%f", &notas[1]);
    printf("informe a nota do terceiro aluno: ");
    scanf("%f", &notas[2]);
    printf("informe a nota do quarto aluno: ");
    scanf("%f", &notas[3]);
    printf("informe a nota do quinto aluno: ");
    scanf("%f", &notas[4]);
    media = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
    media = media/5;
    printf("a media dos alunos foi: %.2f \n", media);
    if(notas[0] < 6){
        cont++;
    }
    if (notas[1] < 6){
        cont++;
    }
    if (notas[2] < 6){
        cont++;
    }
    if (notas[3] < 6){
        cont++;
    }
    if (notas[4] < 6){
        cont++;
    }
    if(cont != 0){
        printf("%d alunos ficaram abaixo da media", cont);
    }

    return 0;
}
