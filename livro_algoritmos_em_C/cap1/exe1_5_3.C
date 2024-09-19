#include <stdio.h>

int main(){
    float first_number = 0;
    float second_number = 0;
    printf("enter the numbers for calculation: ");
    scanf("%f %f", &first_number, &second_number);
    float addiction = first_number + second_number;
    float subtraction = first_number - second_number;
    float division = first_number / second_number;
    float multiplication = first_number * second_number;
    printf("Addiction: %.2f\nSubtraction: %.2f\nDivision: %.2f\nMultiplication: %.2f",addiction, subtraction, division, multiplication);
    return 0;

}