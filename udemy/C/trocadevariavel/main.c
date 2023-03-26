#include <stdio.h>
#include <stdlib.h>

int main()
{   int A,B,aux;
    printf("informe o valor de A: ");
    scanf("%d",&A);
    printf("Informe o valor de B: ");
    scanf("%d",&B);
    aux = A;
    A = B;
    B = aux;
    printf("O valor de A agora eh: %d\n", A);
    printf("O valor de B agora eh: %d", B);

    return 0;
}
