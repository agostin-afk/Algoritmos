#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int double_number = number * 2;
    printf("twice the number %d is: %d", number, double_number);
}