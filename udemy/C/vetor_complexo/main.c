#include <stdio.h>
#include <stdlib.h>
int main()
{   float vet[5], soma, media;
    int qtd_pos, qtd_nega, mais_media = 0;
    soma = media = qtd_pos = qtd_nega = 0;
    for (int i = 0; i<=4; i++){
        printf("informe o valor da posicao %d do vetor: ", (i+1));
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
        if(vet[i] > 0){
            qtd_pos++;
        }
        else if(vet[i] < 0){
            qtd_nega++;
        }
    }
    system("cls");
    media = soma/5;
    for (int c = 0; c <=4; c++){
        printf("o valor da posicao %d do vetor eh: %.2f\n", c+1,vet[c]);
        if(vet[c] > media){
            mais_media++;
        }
    }
    printf("A soma deu: %.2f\nA media foi: %.2f\nTeve %d numeros positivos\nTeve %d numeros negativos\nForam %d numeros acima da media", soma, media, qtd_pos, qtd_nega, mais_media);
    return 0;
}
