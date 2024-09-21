#include <stdio.h>
#include <string.h>

int main(){
    char senha[100];
    int tamanho = 0;
    fgets(senha, 100, stdin);
    tamanho = strlen(senha)-1;
    if (tamanho < 6){
        printf("Error: Very short password.");
        return 0;
    }
    return 0;
}