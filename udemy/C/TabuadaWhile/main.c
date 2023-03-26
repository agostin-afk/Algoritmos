#include <stdio.h>
#include <stdlib.h>

int main()
{   int num, i = 1;
    printf("informe um numero para imprimir a tabuada: ");
    scanf("%d", &num);
    while ( i <= 10) {
        printf("%dx%d = %d\n",num ,i ,num*i);
        i++;
    }
    return 0;
}
