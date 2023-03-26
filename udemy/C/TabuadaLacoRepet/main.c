#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("informe um numero para mostrar a tabuada: ");
    scanf("%d", &num);
    for(int i = 1; i<=10; i++){
        printf("%dx%d = %d\n", num, i, num*i);
    }
    return 0;
}
