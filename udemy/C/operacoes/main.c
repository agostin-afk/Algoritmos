#include <stdio.h>
#include <stdlib.h>

int main()
{   float num1, num2, soma, div, sub, mult;
    printf("digite o primeiro numero ");
    scanf("%f", &num1);
    printf("digite o segundo numero ");
    scanf("%f", &num2);
    soma = num1+num2;
    mult = num1*num2;
    div = num1/num2;
    sub = num1-num2;
    printf("A soma de %.2f e %.2f eh: %.2f", num1,num2, soma);
    printf("\nA subitracao de %.2f e %.2f eh: %.2f", num1,num2, sub);
    printf("\nA divisao de %.2f por %.2f eh: %.2f", num1,num2, div);
    printf("\nA muktiplicacao de %.2f e %.2f eh: %.2f", num1, num2, mult);

    return 0;
}
