#include <stdio.h>

int main(){
    float deposito = 0.0;
    float rendimento = 1.005;
    printf("Enter deposit amount: ");
    scanf("%f", &deposito);
    printf("rediment amout: %.3f", deposito*rendimento);
    return 0;
}