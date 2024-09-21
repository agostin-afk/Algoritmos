#include <stdio.h>

int main(){
    float distance = 0.0, fuel_used = 0.0;
    printf("Enter distance and fuel used: ");
    scanf("%f%f", &distance, &fuel_used);
    printf("average consumption: %.2f", distance/fuel_used);
    return 0;
}