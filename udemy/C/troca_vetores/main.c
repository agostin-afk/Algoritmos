#include <stdio.h>
#include <stdlib.h>

int main()
{   int vetA[5], vetB[5], aux;
    for(int c = 0;c<=4; c++){
        printf("informe o valor da posicao %d do vetor A: ",(c+1));
        scanf("%d", &vetA[c]);
        system("cls");
        printf("informe o valor da posicao %d do vetor B: ", (c+1));
        scanf("%d", &vetB[c]);
        system("cls");
    }
    for(int c = 0; c <= 4; c++){
        aux = vetA[c];
        vetA[c] = vetB[c];
        vetB[c] = aux;
    }
    printf("Os novos valores do vetor A sao:\n");
    for(int c = 0; c <=4; c++){
        printf("O valor de vetor A[%d] agora eh: %d\n", (c+1), vetA[c]);
    }
    printf("Os novos valores do vetor B sao:\n");
    for(int c = 0; c <= 4; c++){
        printf("O valor do vetor B[%d] agora eh: %d\n", (c+1), vetB[c]);
    }
    return 0;
}
