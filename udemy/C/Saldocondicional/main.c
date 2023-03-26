#include <stdio.h>
#include <stdlib.h>

int main()
{   float saldo, cheque;
    char nome[30];
    printf("insira o seu nome: ");
    scanf("%s",nome);
    printf("informe de quanto eh o cheque que deseja realizar: ");
    scanf("%f", &cheque);
    saldo = 500.0;
    if (cheque >saldo){
        printf("%s, voce nao possui saldo o suficiente para realizar esse cheque ",nome);
    }
    else{
        saldo = saldo-cheque;
        printf("%s cheque de r$ %.2f realizado, novo saldo: r$ %.2f", nome, cheque, saldo);
    }
    return 0;
}
