#include <stdio.h>
#include <stdlib.h>

int main()
{   float bonus, total, fixo;
    int qtd_vendas;
    printf("informe a quantidade de vendas esse mes: ");
    scanf("%d", &qtd_vendas);
    bonus = qtd_vendas*50;
    fixo = 500;
    total = fixo + bonus;
    printf("com  %d vendas esse mes voce obteve um bonus de r$%.2f \nresultando em um total de r$%.2f", qtd_vendas, bonus, total);
    return 0;
}
