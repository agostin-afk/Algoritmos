#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,n = 1;
    printf("informe um numero: ");
    scanf("%d", &num);
    while(num/n > 9){
        n *=10;
    }
    do{
        printf("%d\n", num/n);
        num = num%n;
        n = n/10;
    }
    while(n != 0);
    return 0;
}
