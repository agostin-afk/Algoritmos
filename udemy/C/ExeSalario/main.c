#include <stdio.h>
#include <stdlib.h>

int main()
{   float salario_bruto, salario_liquido, inss;
    char nome[30];
    printf("qual o seu nome ?");
    scanf("%s",&nome);
    printf("informe o seu salario bruto: ");
    scanf("%f", &salario_bruto);
    inss = (salario_bruto*9)/100;
    salario_liquido = salario_bruto - inss;
    printf("ola %s", nome);
    printf("o seu salario bruto eh: r$ %.2f",salario_bruto);
    printf("o seu inss eh: r$ %f", inss);
    printf("seu salario liquido eh: r$ %.2f", salario_liquido);
    return 0;
}
