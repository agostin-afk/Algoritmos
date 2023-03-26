#include <stdio.h>
#include <stdlib.h>

int main()
{   int vet[15], aux;
    for(int c =0; c<=14; c++){
        printf("informe o valor do vetor na posicao %d:", (c+1));
        scanf("%d", &vet[c]);
    }
    system("cls");
    for (int j = 0; j<=14; j++){
        for(int i = 0; i<=13; i++){
            if(vet[i]> vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
    printf("O vetor organizado fica: \n");
    for(int p = 0; p<=14; p++){
        printf("vet[%d] = %d\n", p+1, vet[p]);
    }
    return 0;
}
