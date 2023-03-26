#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define CREDITO 1
#define DEBITO 2
#define TRANSFERIR 3
#define CONSULTAR_SALDO 4
#define SAIR 0
int procuraContaPorNum(int numConta, int* contas_numero, int qntdContas){
    for(int i = 0; i < qntdContas; i++){
      if(contas_numero[i] == numConta){
        return i;
      }
    }
    return -1;
}

bool realizaCredito(double credito, double* saldoDaConta){
    if(credito < 0){
      printf("valor nãoo pode ser negativo\nvoltando ao menu\n");
      return false;
    }
    *saldoDaConta += credito;
    return true;
}

bool realizaDebito(double debito, double* saldoDaConta){
    if(debito < 0){
      printf("valor não pode ser negativo\nvoltando ao menu\n");
      return false;
    }
    if(debito > *saldoDaConta){
      printf("debito nao pode ser maior que o saldo\n");
      return false;
    }
    *saldoDaConta -= debito;
    return true;
}

bool realizaTransferencia(double transferencia, double* saldoDaContaSaida, double* saldoDaContaEntrada){
  return  realizaDebito(transferencia, saldoDaContaSaida) && realizaCredito(transferencia, saldoDaContaEntrada);
}


int main(){
  char buffer[255];
  int nContas = 0;
  printf("digite a quantidade de contas que deseja cadastrar: ");
  nContas = atoi(fgets(buffer, 255, stdin));

  int contas_numero[nContas];

  double contas_saldo[nContas];
  memset(contas_saldo, 0, nContas*sizeof(double));

  char contas_tipo[nContas][35];

  for(int i = 0; i < nContas; i++){
    printf("digite o numero da %da conta: ", i + 1);
    contas_numero[i] = atoi(fgets(buffer, 255, stdin));
    int indice = procuraContaPorNum(contas_numero[i], contas_numero, i);
    if(indice != -1){
      printf("numero de conta ja existe\nTente novamente.\n");
      i--;
    }
  }

  for(int i = 0; i < nContas; i++){
    printf("digite o tipo da %da conta: ", i + 1);
    fgets(buffer, 255, stdin);
    if(strcmp(buffer, "\n") == 0){
      printf("tipo vazio\ndigite novamente\n");
      i--;
    }else{
      strncpy(contas_tipo[i], buffer, 35);
    }
  }
  int opc;

  do{
    printf("\nescolha uma das opcoes\n");
    printf("1..............credito\n");
    printf("2...............debito\n");
    printf("3...........transferir\n");
    printf("4......consultar saldo\n");
    printf("0.................sair\n");
    printf("digite sua opcao: ");
    bool opcaoValida;
    do{
      opc = atoi(fgets(buffer,255,stdin));
      opcaoValida = opc >= 0 && opc <= 4;
    }while(!opcaoValida);

    int numConta;
    int indiceConta1, indiceConta2;

    switch(opc){
      case CREDITO:
        printf("digite o numero da conta que deseja fazer o credito ou uma conta que nao existe para sair: ");
        numConta = atoi(fgets(buffer,255,stdin));
        indiceConta1 = procuraContaPorNum(numConta, contas_numero, nContas);

        if(indiceConta1 == -1){

          printf("conta selecionada inexiste\nvoltando ao menu\n");

        }else{

          printf("digite o valor a ser creditado: ");
          double valorCreditado = atof(fgets(buffer, 255, stdin));
          realizaCredito(valorCreditado, &contas_saldo[indiceConta1]);

        }
        break;
      case DEBITO:
        printf("digite o numero da conta que deseja fazer o debito ou uma conta que nao existe para sair: ");
        numConta = atoi(fgets(buffer,255,stdin));
        indiceConta1 = procuraContaPorNum(numConta, contas_numero, nContas);
        if(indiceConta1 == -1){
          printf("conta selecionada inexiste\nvoltando ao menu\n");
        }else{
          printf("digite o valor a ser debitado: ");
          double valorDebitado = atof(fgets(buffer, 255, stdin));
          realizaDebito(valorDebitado, &contas_saldo[indiceConta1]);
        }

        break;

      case TRANSFERIR:
        printf("digite o numero da conta que transferira e da que recebera a transferencia: ");
        fgets(buffer,255,stdin);
        char* num1 = strtok(buffer, " ");
        char* num2 = strtok(NULL, " ");

        if(num1 == NULL || num2 == NULL){
          printf("quantidade de contas digitadas insuficiente\nvoltando ao menu\n");
        }else{
          int numConta1 = atoi(num1);
          int numConta2 = atoi(num2);
          if(numConta1 == numConta2){
            printf("impossivel transferir para a mesma conta\n");
          }else{
            indiceConta1 = procuraContaPorNum(numConta1, contas_numero, nContas);
            indiceConta2 = procuraContaPorNum(numConta2, contas_numero, nContas);

            if(indiceConta1 == -1 || indiceConta2 == -1){
              printf("conta selecionada inexiste\nvoltando ao menu\n");
            }else{
              printf("digite o valor a ser debitado: ");
              double valorTransferido = atof(fgets(buffer, 255, stdin));
              realizaTransferencia(valorTransferido, &contas_saldo[indiceConta1], &contas_saldo[indiceConta2]);
            }
          }
        }

        break;
      case CONSULTAR_SALDO:
        printf("digite o numero da conta que voce deseja saber o saldo: ");
        numConta = atoi(fgets(buffer,255, stdin));
        indiceConta1 = procuraContaPorNum(numConta, contas_numero, nContas);

        if(indiceConta1 == -1){
          printf("conta nao existe\nvoltando ao menu");
        }else{
          printf("SALDO: R$%.2lf", contas_saldo[indiceConta1]);
        }
        break;
      case SAIR:
        printf("Saindo.\n");
        break;
    }
  }while(opc != 0);

  return 0;
}
