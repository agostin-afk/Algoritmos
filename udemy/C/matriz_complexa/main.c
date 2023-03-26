#include <stdio.h>
#include <stdlib.h>

int main()
{   int matriz[4][4], matriz_2x[4][4], soma, pos_maiorL;
    int pos_maiorC, pos_menosL, pos_menosC, cont_media;
    int maior, menor, linha3[4], coluna2[4];
    float media;
    soma = 0;
    pos_maiorC = pos_maiorL = pos_menosC = pos_menosL = 1;
    for(int l = 0; l <= 3; l++){
        for (int c = 0; c <= 3; c++){
            printf("informe o valor da posicao [%d, %d] da matriz: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
            matriz_2x[l][c] = matriz[l][c] * 2;
            soma += matriz[l][c];
        }
    }
    system("cls");
    maior = menor = matriz[0][0];
    media = soma/16;
    cont_media = 0;
    for(int l = 0; l <= 3; l++){
        for(int c = 0; c <= 3; c++){
            if (matriz[c][l] > media){
                cont_media += 1;
            }
            if (maior < matriz[l][c]){
                maior = matriz[l][c];
                pos_maiorL = l+1;
                pos_maiorC = c+1;
            }
            if(menor > matriz[l][c]){
                menor = matriz[l][c];
                pos_menosL = l+1;
                pos_menosC = c+1;
            }
            if(l == 2){
                linha3[c] = matriz[l][c];
            }
            if(c == 1){
                coluna2[l] = matriz[l][c];
            }
        }
    }
    for(int i = 0; i <= 5; i++){
        if(i == 0){
            printf("Os valores da matriz sao: \n");
            for(int l = 0; l <= 3; l++){
                for(int c = 0; c <= 3; c++){
                    printf(" [%d] ", matriz[l][c]);
                    if(c == 3){
                        printf("\n");
                    }
                }
            }
        }
        if (i == 1){
            printf("\nOs valores da matriz duplicados ficam: \n");
            for(int l = 0; l <= 3; l++){
                for(int c = 0; c <= 3; c++){
                    printf(" [%d] ", matriz_2x[l][c]);
                    if( c == 3){
                        printf("\n");
                    }
                }
            }
            printf("\n");
        }
        if(i == 2){
            printf("A soma dos valores da matriz deu: %d\n\nA media dos valores deu: %.2f\n\n", soma, media);
            printf("Os valores da diagonal principal sao: \n");
            for(int l = 0; l <= 3; l++){
                for (int c = 0; c <= 3; c++){
                    if(c ==l){
                        printf(" [%d] ", matriz[l][c]);
                    }
                }
            }
            printf("\n\nOs valores da diagonal secundaria sao: \n");
            for(int l = 0; l <= 3; l++){
                for(int c = 0; c <= 3; c++){
                    if(c+l == 3){
                        printf(" [%d] ", matriz[l][c]);
                    }
                }
            }
            printf("\n");
        }
        if(i == 3){
            printf("\nOs valores da coluna 2 sao: \n");
            for(int p = 0; p <= 3; p++){
                printf(" [%d] ", coluna2[p]);
            }
            printf("\n\nOs valores da linha 3 sao: \n");
            for(int p = 0; p <= 3; p++){
                printf(" [%d] ", linha3[p]);
            }
            printf("\n");
        }
        if(i == 4){
            printf("\nTeve %d numeros acima da media\nE foram esses: \n", cont_media);
            for(int l = 0; l <= 3; l++){
                for (int c = 0; c <= 3; c++){
                    if( matriz[l][c] > media){
                        printf(" [%d] ", matriz[l][c]);
                    }
                }
            }
        printf("\n\nO maior valor da matriz foi: %d \nNa posicao: [%d, %d]", maior, pos_maiorL, pos_maiorC);
        printf("\n\nO menor valor da matriz foi: %d\nNa posicao: [%d, %d]", menor, pos_menosL, pos_menosC);
        printf("\n");
        }
        if(i == 5){
            printf("\nOs valores pares da matriz sao: \n");
            for(int l = 0; l <= 3; l++){
                for(int c = 0; c <= 3; c++){
                    if(matriz[l][c]%2 == 0){
                        printf(" [%d] ", matriz[l][c]);
                    }
                }
            }
            printf("\n\nOs valores impares da matriz sao: \n");
            for(int l = 0; l <= 3; l++){
                for(int c = 0; c <= 3; c++){
                    if(matriz[l][c]%2 != 0 ){
                        printf(" [%d] ", matriz[l][c]);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}
