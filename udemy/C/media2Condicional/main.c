#include <stdio.h>
#include <stdlib.h>

int main()
{   float nota1, nota2,nota3,media;
    printf("informe a nota da primeira prova: ");
    scanf("%f",&nota1);
    printf("informe a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("informe a nota da terceira prova: ");
    scanf("%f",&nota3);
    media = (nota1+nota2+nota3)/3;
    if (media >= 7){
        printf("voce passeou com media: %.2f", media);
    }
    else if (media >=4){
        printf("voce ficou de recuperacao com media: %.2f", media);
    }
    else {
        printf("voce foi reprovado pois sua media foi: %.2f", media);
    }
    return 0;
}
