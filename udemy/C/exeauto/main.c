#include <stdio.h>
#include <stdlib.h>

int main()
{ float imp, revend, custo, custofinal;
    printf("informe o valor bruto do carro: ");
    scanf("%f",&custo);
    imp = (45*custo)/100;
    revend = (25*custo)/100;
    custofinal = custo + imp + revend;
    printf("O valor do carro com os impostos e demais custos eh de: %.2f", custofinal);

    return 0;
}
