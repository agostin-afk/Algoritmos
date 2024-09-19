#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number >= 10 || number <= 200){
        printf("This number is between 100 and 200");
    }
    return 0;
}