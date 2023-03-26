#include <stdio.h>
#include <stdlib.h>

int main()
{   int vet[3][3];
    int maior, menor;
    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <= 2; c++){
            printf("informe o valor da matriz na posicao [%d, %d]: ", l+1,c+1);
            scanf("%d", &vet[l][c]);
            system("cls");
        }
    }
    maior = menor = vet[0][0];
    for(int  l = 0; l <= 2; l++){
        for(int c = 0; c <= 2; c++){
            if (maior < vet[l][c]){
                maior = vet[l][c];
            }
            if (menor > vet[l][c]){
                menor = vet[l][c];
            }
        }
    }

    printf("Os valores da matriz sao: \n");
    for(int l = 0; l <= 2; l++){
        for(int c = 0; c <= 2; c++){
                printf("[%d] ", vet[l][c]);
                if( c == 2){
                printf("\n");
            }
        }
    }
    printf("O maior valor da matriz eh: %d\nO menor valor da matriz eh: %d", maior, menor);
    return 0;
}
