#include <stdio.h>
#include <stdlib.h>

int main()
{   float parcelas_total, parcelas_pagas, valor_parcelas, total_pago, valor_devendo, total;
    printf("informe o numero total de parcelas: ");
    scanf("%f",&parcelas_total);
    printf("informe o numero de parcelas pagas: ");
    scanf("%f", &parcelas_pagas);
    printf("informe o valor das parcelas: ");
    scanf("%f", &valor_parcelas);
    total_pago = parcelas_pagas*valor_parcelas;
    total = parcelas_total * valor_parcelas;
    valor_devendo = total - total_pago;
    printf("voce pagou: r$ %.2f\nFalta: r$ %.2f",total_pago,valor_devendo);
    return 0;
}
