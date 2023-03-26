#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("informe um numero para saber se eh par ou impar: ");
    scanf("%d", &num);
    if (num%2 == 0 ){
        printf("Esse numero eh par");
    }
    else{
        printf("Esse numero eh impar");
    }
    return 0;
}
