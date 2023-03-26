#include <stdio.h>
#include <stdlib.h>

int main()
{   int idade;
    float salario;
    char nome[30] = "Agostinho";
    /*salario = 2000;
    idade = 18;

    printf("Seu nome: %s\n", nome);
    printf("sua idade: %d\n", idade);
    printf("Seu salario: %f\n", salario);*/
    printf("digite o seu nome: ");
    scanf("%s", &nome);
    printf("digite a sua idade: ");
    scanf("%d", &idade);
    printf("digite o seu salario: ");
    scanf("%f", &salario);

    printf("Seu nome: %s\n", nome);
    printf("sua idade: %d\n", idade);
    printf("Seu salario: %f\n", salario);

    return 0;
}
