#include <stdio.h>

int main(){
    float first_number = 0, second_number = 0;
    printf("informe dois numeros: ");
    scanf("%f%f", &first_number, &second_number);
    printf("soma: %.2f", first_number+second_number);
    return 0;
}