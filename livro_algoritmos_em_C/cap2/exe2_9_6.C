#include <stdio.h>

int main(){
    float dollar_quote = 0.0;
    float reais_value = 0.0;
    float dollar_value = 0.0;

    printf("Enter dollar quote: ");
    scanf("%f", &dollar_quote);
    printf("Enter value in reais: "); 
    scanf("%f", &reais_value);
    dollar_value = reais_value/dollar_quote;
    printf("The value in dollars: %.2f", dollar_value);
    return 0;
}