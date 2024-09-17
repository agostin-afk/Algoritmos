#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 10){
        printf("this number is more than 10");
    }
    return 0;
}