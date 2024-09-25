#include <stdio.h>

int main(){
    int number = 0;
    int *p = &number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\nThe pointer: %d", *p);
    return 0;
}