#include <stdio.h>
#include <stdlib.h>

int main()
{   int posicao, novo_num, anterio, atual;
    printf("informe ate qual termo de fibonacci voce quer ver: ");
    scanf("%d", &posicao);
    anterio = 0;
    atual = 1;
    novo_num = 1;
    for(int i = 1; i <= posicao; i++){
        printf("O %d termo de fibonacci eh: %d\n",i ,novo_num );
        novo_num = anterio + atual;
        anterio = atual;
        atual = novo_num;
    }
    return 0;
}
