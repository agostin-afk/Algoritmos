#include <stdio.h>
#include <stdlib.h>
float soma(float p1,float p2);
float subtracao(float p1, float p2);
float multiplica(float p1, float p2);
float divisao(float p1, float p2);
void leitura();
float sum, sub, divi, mult, num1, num2;
int main()
{   leitura();
    printf("A soma dos numeros deu: %.2f\nA subtracao dos numeros deu: %.2f\nA multplicacao dos numeros deu: %.2f\nA divisao dos numeros deu: %.2f",soma(num1, num2), subtracao(num1, num2), multiplica(num1, num2), divisao(num1, num2));
    return 0;
}
void leitura(){
    printf("informe o valor do primeiro numero:  ");
    scanf("%f", &num1);
    printf("informe o valor do segundo numero: ");
    scanf("%f", &num2);
}
float soma(float p1, float p2){
    sum = p1+p2;
    return(sum);
}
float subtracao(float p1, float p2){
    sub = p1-p2;
    return(sub);
}
float multiplica(float p1, float p2){
    mult = p1*p2;
    return(mult);
}
float divisao(float p1, float p2){
    divi = p1/p2;
    return(divi);
}
