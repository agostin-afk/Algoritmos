#include <stdio.h>

int main(){
    int first_number = 0, second_number = 0;
    printf("Enter first and second number: ");
    scanf("%d %d", &first_number, &second_number);
    int bigger_number = first_number;
    if(bigger_number < second_number){
        bigger_number = second_number;
    }
    printf("The largest number is: %d", bigger_number);
    return 0;
}