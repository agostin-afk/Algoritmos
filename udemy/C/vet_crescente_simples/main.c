#include <stdio.h>
#include <stdlib.h>

int main()
{   int vet[3], aux;
    for(int i = 0; i <= 2; i++){
        printf("informe o valor de vet[%d]: ", (i+1));
        scanf("%d", &vet[i]);
    }

    for (int p = 0; p<=1; p++){
        for(int i = 0; i<=2; i++){
            if(vet[i]> vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
    printf("o vetor em ordem crescente eh: ");
    for (int i = 0; i<=2; i++){
        printf("[%d] ", vet[i]);
    }
    return 0;
}
