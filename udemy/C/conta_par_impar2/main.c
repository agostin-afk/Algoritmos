#include <stdio.h>
#include <stdlib.h>

int main()
{   int num_par, num_impar,inicio, final_num, aux;
    printf("informe o incio e o final, respectivamente, da contagem: ");
    scanf("%d %d",&inicio,&final_num);
    while(inicio>final_num){
        printf("o numero incial tem que ser menor que o numero final, por favor insira um novo numero: ");
        scanf("%d", &inicio);
    }
    aux = inicio;
    num_impar = num_par = 0;
    while(aux <= final_num){
        if(aux%2 == 0){
            num_par++;
        }
        else{
            num_impar++;
        }
        aux++;
    }
    printf("entre %d e %d, tem %d numeros pares e %d impares", inicio, final_num, num_par, num_impar);
    return 0;
}
