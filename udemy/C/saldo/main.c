#include <stdio.h>
#include <stdlib.h>

int main()
{   float saldo, saldo_final, cheque;
    printf("informe o valor do cheque: ");
    scanf("%f", &cheque);
    saldo = 500;
    saldo_final = saldo - cheque;
    printf("O saldo final eh de: %.2f", saldo_final);
    return 0;
}
