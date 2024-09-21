#include <stdio.h>

int main(){
    float number = 0.0;
    printf("Enter a value in meters: ");
    scanf("%f", &number);
    float result_value = number*1000.0;
    printf("Value in milimeters: %.2f", result_value);
    return 0;
}