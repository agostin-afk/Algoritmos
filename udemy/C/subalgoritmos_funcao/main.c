#include <stdio.h>
#include <stdlib.h>
void leitura();
void calculos();
void imprimir();
float num1, num2, soma, sub, mult, divi;
int main()
{
    leitura();
    calculos(num1, num2);
    imprimir(soma, sub, mult, divi);
    return 0;
}
void leitura(){
    printf("informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("informe o segundo valor: ");
    scanf("%f", &num2);
}
void calculos(p1, p2)
float p1, p2;
{
    soma =  p1+p2;
    sub = p1-p2;
    mult = p1*p2;
    divi = p1/p2;
}
void imprimir(soma, sub, mult, divi)
float soma, sub, mult, divi;
{
    printf("A soma dos numeros deu: %.2f\nA subtracao dos valores deu: %.2f\nA multiplicacao dos valores deu: %.2f\nA divisao dos valores deu: %.2f",soma ,sub ,mult ,divi);
}
