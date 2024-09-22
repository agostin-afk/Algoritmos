#include <stdio.h>

int main(){
    int first_number = 0, second_number = 0, third_number = 0;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &first_number, &second_number, &third_number);
    printf("the numbers in reverse order: %d, %d, %d", third_number, second_number, first_number);
    return 0;
}