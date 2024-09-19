#include <stdio.h>

int main(){
    float first_number = 0;
    float second_number = 0;
    printf("Enter first and second number for calculus: ");
    scanf("%f %f", &first_number, &second_number);
    float addition = first_number + second_number;
    float subtraction = first_number - second_number;
    float multiplication = first_number * second_number;
    float division = first_number / second_number;
    printf("addition: %.2f\nsubtraction: %.2f\nmultiplication: %.2f\ndivision: %.2f", addition, subtraction, multiplication, division);
    return 0; 
}