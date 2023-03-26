#include <stdio.h>
#include <stdlib.h>

int main()
{   float prova1, prova2, prova3, media;
    printf("informe a nota da primeira prova: ");
    scanf("%f", &prova1);
    printf("informe a nota da segunda prova: ");
    scanf("%f", &prova2);
    printf("infrme a nota da terceira prova: ");
    scanf("%f",&prova3);
    prova1 *=2;
    prova2 *=3;
    prova3 *=5;
    media = (prova1+prova2+prova3)/10;
    printf("A media foi de: %.2f", media);
    return 0;
}
