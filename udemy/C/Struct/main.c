#include <stdio.h>
#include <stdlib.h>
struct cadastro{

    char nome[30];
    int idade;
    float salario;
};
int main()
{   struct cadastro cliente;
    printf("informe o nome do cliente: ");
    scanf("%s", cliente.nome);

    printf("informe a idade do cliente: ");
    scanf("%d", &cliente.idade);

    printf("informe o salario do cliente: ");
    scanf("%f", &cliente.salario);

    system("cls");

    printf("O cliente %s, %d anos, possui um salario de %.2f",cliente.nome, cliente.idade, cliente.salario);
    return 0;
}
