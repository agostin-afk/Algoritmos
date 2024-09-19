#include <stdio.h>

int main(){
    float celsius = 0.0;
    float fahrenheit = 0.0;
    printf("Enter celsius temperature: ");
    scanf("%f", &celsius);
    fahrenheit = (9*celsius)/5;
    printf("fahrenheit temperature: %.2f", fahrenheit);
    return 0;
}