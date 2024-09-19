#include <stdio.h>
int main(){
    float raio;
    float pi = 3.1415;
    printf("informe o valor do raio: ");
    scanf("%f", &raio);
    printf("\nResultado: %.2fm2", raio*pi*raio);
    return 0;

}