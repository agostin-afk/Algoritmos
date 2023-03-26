#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("informe um numero de 1 ate 12 para mostrar o seu mes correspondente ");
    scanf("%d", &num);
    if (num == 1){
         printf("O mes correspondente a esse numero eh: Janeiro");
    }
    else if (num == 2){
        printf("O mes correspondente a esse numero eh: Fevereiro");
    }
    else if (num == 3){
        printf("O mes correspondente a esse numero eh: Março");
    }
    else if (num == 4){
        printf("O mes correspondente a esse numero eh: Abril");
    }
    else if (num == 5){
        printf("O mes correspondente a esse numero eh: Maio");
    }
    else if (num == 6){
        printf("O mes correspondente a esse numero eh: Junho");
    }
    else if (num == 7){
        printf("O mes correspondente a esse numero eh: Julho");
    }
    else if (num == 8){
        printf("O mes correspondente a esse numero eh: Agosto");
    }
    else if (num == 9){
        printf("O mes correspondente a esse numero eh: Setembro");
    }
    else if (num == 10){
        printf("O mes correspondente a esse numero eh: Outubro");
    }
    else if (num == 11){
        printf("O mes correspondente a esse numero eh: Novembro");
    }
    else if (num == 12){
        printf("O mes correspondente a esse numero eh: Dezembro");
    }
    else {
        printf("O mes correspondente a esse numero eh: numero invalido, nao ha mes correspondente");
    }

    return 0;
}
