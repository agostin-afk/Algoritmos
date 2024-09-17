#include <stdio.h>

int main(){
    float combustivel = 0.0;
    float distancia = 0.0;
    printf("informe uma distancia(em km) e quanto de gasolina(em L) precisa: ");
    scanf("%f %f", &distancia, &combustivel);
    printf("seu consumo medio eh: %.2fKm/L", distancia/combustivel);
    return 0;

}