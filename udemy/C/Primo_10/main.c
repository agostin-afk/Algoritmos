#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{   bool c;
    int num, i, cont, num_primo;
    /*printf("informe um numero para saber se eh primo ou nao: ");
    scanf("%d", &num);*/
    num = 2;
    cont = 1;
    printf("atr qual numero primo voce que ver: ");
    scanf("%d", &num_primo);
    system("cls");          ///limpa o console
    while (cont <= num_primo){
        c = true;
        i = 2;
        while((i<= num/2) && (c == true)){
            if (num%i == 0){
                c = false;
            }
            i++;
        }
        if(c == true){
            printf("O numero %d eh o %d numero primo\n",num, cont);
            cont++;
        }
        num++;
    }
    return 0;
}
