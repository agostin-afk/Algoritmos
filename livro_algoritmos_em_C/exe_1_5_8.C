#include <stdio.h>

int main(){
    float cotacao = 0.0;
    float valor_dolar = 0.0;
    printf("Enter the quote value: ");
    scanf("%f", &cotacao);

    printf("Enter the amount in dollars: ");
    scanf("%f", &valor_dolar);
    printf("Value in reais: %.2f", valor_dolar*cotacao);
    return 0;
}