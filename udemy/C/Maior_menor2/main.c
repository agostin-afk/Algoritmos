#include <stdio.h>
#include <stdlib.h>

int main()
{   int n1,n2,n3;
    printf("informe o valor do primeiro numero: ");
    scanf("%d",&n1);
    printf("informe o valor do segundo numero: ");
    scanf("%d", &n2);
    printf("informe o valor do terceiro numero: ");
    scanf("%d",&n3);
    if ((n1>n2) && (n1>n3)){
        printf("o maior numero eh: %d\n",n1);
        if (n2>n3){
            printf("o menor numero eh: %d\n",n3);
        }
        else{
            printf("o menor numero eh: %d\n",n2);
        }
    }
    else if ((n2>n1)&&(n2>n3)){
        printf("o maior numero eh: %d\n", n2);
        if (n1>n3){
            printf("o menor numero eh: %d\n", n3);
        }
        else {
            printf("o menor numero eh: %d\n",n1);
        }
    }
    else{
        printf("o maior numero eh: %d\n", n3);
        if (n1>n2){
            printf("o menor numero eh: %d\n",n2);
        }
        else {
            printf("o menor numero eh: %d\n",n1);
        }
    }
    return 0;
}
