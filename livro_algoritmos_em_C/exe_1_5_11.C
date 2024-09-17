#include <stdio.h>

int main(){
    int first_number = 0, second_number = 0;
    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    int bigger_number = first_number;

    if(bigger_number < second_number){
        bigger_number = second_number;
    }
    printf("the largest number is: %d", bigger_number);
    return 0;
    
}