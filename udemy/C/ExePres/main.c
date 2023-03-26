#include <stdio.h>
#include <stdlib.h>

int main()
{   float taxa, valor;
    int temp;
    printf("informe o valor: ");
    scanf("%f",&valor);
    printf("informe a taxa: ");
    scanf("%f",&taxa);
    printf("agora informe os dias de atraso: ");
    scanf("%d", &temp);
    valor = valor + (valor*(taxa/100)*temp);
    printf("o novo valor a pagar eh: %f", valor);
    return 0;
}
