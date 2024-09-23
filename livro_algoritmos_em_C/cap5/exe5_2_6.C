#include <stdio.h>

int main(){
    int vetor[5] = {0};
    int aux = 0;
    printf("Fill the vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &aux);
        vetor[i] = aux;
    }
    printf("Vetor in reverse order: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}