#include <stdio.h>
#include <stdlib.h>

int main()
{   float maior, menor, vet[10];
    for (int i = 0; i<=4; i++){
        printf("informe o valor da posicao %d do vetor: ", i+1);
        scanf("%f", &vet[i]);
        if (i == 0){
            maior = menor = vet[i];
        }
        if(vet[i] > maior){
            maior = vet[i];
        }
        if( vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("O maior valor do vetor eh: %.2f\nO menor valor do vetor eh: %.2f",maior, menor);
    return 0;
}
