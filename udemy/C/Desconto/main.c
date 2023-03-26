#include <stdio.h>
#include <stdlib.h>

int main()
{   float valor, desconto;
    printf("informe o valor da compra: ");
    scanf("%f",&valor);
    if (valor>500){
        desconto = valor*0.2;
    }
    else if (valor>200){
        desconto = valor*0.15;
    }
    else {
        desconto = valor*0.1;
    }
    valor = valor - desconto;
    printf("com o desconto o valor total deu: %.2f", valor);
    return 0;
}
