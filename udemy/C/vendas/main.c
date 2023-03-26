#include <stdio.h>
#include <stdlib.h>

int main()
{   float total, vendas, fixo;
    printf("informe a quantidade das vendas: ");
    scanf("%f", &vendas);
    vendas = (vendas*15)/100;
    fixo = 800;
    total = fixo + vendas;
    printf("O valor total eh: %.2f", total);
    return 0;
}
