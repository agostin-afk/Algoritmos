#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[45];
    float salario = 1500.0;
    float vendas_em_dinheiro = 0.0;
    float procentagem_em_vendas = 0.15;
    printf("informe o primeiro nome do vendedor: ");
    scanf("%s", nome);
    printf("informe a quantidade, em dinheiro, de vendas do vendedor: ");
    scanf("%f", &vendas_em_dinheiro);
    printf("O vendendor %s, tera um salario desse mes de: %.2f reais", nome, salario+(vendas_em_dinheiro*procentagem_em_vendas));
    return 0;
}