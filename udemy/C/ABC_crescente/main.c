#include <stdio.h>
#include <stdlib.h>

int main()
{   int A,B,C;
    printf("informe o valor A: ");
    scanf("%d", &A);
    printf("informe o valor B: ");
    scanf("%d", &B);
    printf("informe o valor C: ");
    scanf("%d", &C);
    if ((A > B) && (A>C)){
        if (B>C){
            printf("A ordem eh: %d -> %d -> %d", C,B,A);
        }
        else{
            printf("A ordem eh: %d -> %d -> %d",B,C,A);
        }
    }
    else if ((B>C) && (B>A)){
        if (A>C){
            printf("A ordem eh: %d -> %d -> %d", C,A,B);
        }
        else{
            printf("A ordem eh: %d -> %d -> %d", A,C,B);
        }
    }
    else{
        if (A>B){
            printf("A ordem eh: %d -> %d -> %d ", B,A,C);
        }
        else{
            printf("A ordem eh: %d -> %d -> %d", A,B,C);
        }
    }
    return 0;
}
