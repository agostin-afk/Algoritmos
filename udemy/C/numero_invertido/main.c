#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("informe um numero: ");
    scanf("%d", &num);
    do{
        printf("%d", num%10);
        num = num/10;
    }
    while(num != 0);

    return 0;
}
