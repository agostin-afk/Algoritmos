#include <stdio.h>
#define G 9.8
int main(){
    float time = 0.0;
    float velocity = 0.0;
    printf("Enter the falling number: ");
    scanf("%f", &time);
    velocity = time*G;
    printf("Falling velocity: %.2f", velocity);
    return 0;
}