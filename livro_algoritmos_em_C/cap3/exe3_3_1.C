#include <stdio.h>

int main(){
    float value_per_copy = 0.25;
    int number_of_copies = 0;
    printf("Enter number of copies: ");
    scanf("%d", &number_of_copies);
    if(number_of_copies > 100){
        value_per_copy = 0.20;
    }
    printf("Amount to pay: %.2f", value_per_copy*number_of_copies);
    return 0;
}