#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{   bool c;
    int num, i = 2;
    c = true;
    printf("informe um numero para saber se eh primo ou nao: ");
    scanf("%d", &num);
    while(i< num/2){
        if (num%i == 0){
            c = false;
        }
        i++;
    }
    if (c == false ){
        printf("o numero %d nao eh primo ", num);
    }
    else{
        printf("o numero %d eh primo ", num);
    }
    return 0;
}
