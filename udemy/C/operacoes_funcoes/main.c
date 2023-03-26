#include <stdio.h>
#include <stdlib.h>
void leitura();
void calculos();
void imprimir();
float num1, num2, soma, divi, mult, sub;
int main()
{   leitura();
    calculos();
    imprimir();
    return 0;
}
void leitura(){
    printf("informe o valor do primeiro e do segundo numero: ");
    scanf("%f %f", &num1, &num2);
}
void calculos(){
    mult = num1*num2;
    soma = num1+num2;
    sub = num1-num2;
    divi = num1/num2;
}
void imprimir(){
    printf("A soma dos numeros deu: %.2f\nA subtracao dos numeros deu: %.2f\nA multiplicacao dos numeros deu: %.2f\nA divisao dos numeros deu: %.2f", soma, sub, mult, divi);
}
