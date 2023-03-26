#include <stdio.h>
#include <stdlib.h>

int main()
{   int vet[3][3];
    for(int l = 0; l<=2; l++){
        for(int c = 0; c<=2; c++){
            printf("informe o valor da posicao [%d, %d] do vetor: ", (l+1),(c+1));
            scanf("%d", &vet[l][c]);
            system("cls");
        }
    }
    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <= 2; c++){
            printf("O valor da posicao [%d, %d] do vetor eh: %d\n", (l+1),(c+1),vet[l][c]);
        }
    }

    return 0;
}
