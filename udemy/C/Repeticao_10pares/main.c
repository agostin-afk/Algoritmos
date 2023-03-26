#include <stdio.h>
#include <stdlib.h>

int main()
{   int cont_pares, n;
    n = 0;
    cont_pares = 1;
    while(cont_pares <= 10){
        n++;
        if(n%2 == 0){
            cont_pares++;
            printf("%d eh um numero par\n", n);
        }
    }
    return 0;
}
