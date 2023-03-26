#include <stdio.h>
#include <stdlib.h>

int main()
{   int cont = 0, num, i = 2;
    printf("informe um numero para saber se eh primo ou nao: ");
    scanf("%d", &num);
    while(i< num){
        if (num%i == 0){
            cont++;
        }
        i++;
    }
    if (cont != 0 ){
        printf("o numero %d nao eh primo ", num);
    }
    else{
        printf("o numero %d eh primo ", num);
    }
    return 0;
}
