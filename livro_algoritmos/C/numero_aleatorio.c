#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    printf("Numeros gerados: ");
    for (i=0; i<=100; i++){
        printf("%d\n", rand());
    }
    system("pause");
    return 0;
}