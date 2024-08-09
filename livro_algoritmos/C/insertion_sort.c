#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int vetor[] = {9,3,4,1,4,5,8,1,2};
    int j = 0;
    for(int i = 0; i < 9; i++){
        int key = vetor[i];
        j = i;
        while(j > 0 && (vetor[j-1] > key)){

            vetor[j] = vetor[j-1];
            j -= 1;
        }
        vetor[j] = key;
    }
    for (int i = 0; i<9; i++){
        printf("%d", vetor[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}