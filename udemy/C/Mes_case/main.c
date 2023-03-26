#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("informe um numero para imprimir seu respectivo mes: ");
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("O mes referente a esse numero eh: Janeiro");
            break;
        case 2:
            printf("O mes referente a esse numero eh: Fevereiro");
            break;
        case 3:
            printf("O mes referente a esse numero eh: Março");
            break;
        case 4:
            printf("O mes referente a esse numero eh: Abril");
            break;
        case 5:
            printf("O mes referente a esse numero eh: Maio");
            break;
        case 6:
            printf("O mes referente a esse numero eh: Junho");
            break;
        case 7:
            printf("O mes referente a esse numero eh: Julho");
            break;
        case 8:
            printf("O mes referente a esse numero eh: Agosto");
            break;
        case 9:
            printf("O mes referente a esse numero eh: Setembro");
            break;
        case 10:
            printf("O mes referente a esse numero eh: Outubro");
            break;
        case 11:
            printf("O mes referente a esse numero eh: Novembro");
            break;
        case 12:
            printf("O mes referente a esse numero eh: Dezembro");
            break;
        default:
            printf("O mes referente a esse numero nao existe, tente novamente");
        }
    return 0;
}
