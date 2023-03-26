#include <stdio.h>
#include <stdlib.h>

int main()
{   int num ,i;
    i = 1;
    printf("informe um numero para imprimir a tabuada: ");
    scanf("%d", &num);
    do{
        printf("%dx%d = %d\n", num, i, num*i);
        i++;
    }
    while(i<=10);
    return 0;
}
