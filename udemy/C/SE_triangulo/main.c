#include <stdio.h>
#include <stdlib.h>

int main()
{   float l1, l2,l3;
    printf("informe os lados: ");
    scanf("%f %f %f", &l1, &l2, &l3);
    if (((l1 + l2)>l3) && ((l2+l3)> l1) && ((l3+l1) > l2)){
        printf("os lados formam um triangulo\n");
        if ((l2==l1) && (l2 == l3)){
            printf("o triangulo formado eh equilatero");
        }
        else if ((l1 == l2) || (l2 == l3) || (l3 == l1)){
            printf("o triangulo formado eh isoseces");
        }
        else{
            printf("o triangulo formado eh escaleno");
        }
    }
    else{
        printf("os lados não formam um triangulo");
    }
    return 0;
}
