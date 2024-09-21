#include <stdio.h>
#include <math.h>

int main(){
    float a = 0.0, b = 0.0,c = 0.0;
    printf("Enter the number(a, b and c): ");
    scanf("%f%f%f", &a, &b, &c);
    float x1 = 0.0, x2 = 0.0;
    float delt = pow(b,2)-4*a*c;
    if (delt < 0.0){
        printf("Error: delta should be positive.");
        return 0;
    }
    x1 = (-b+(sqrt(delt)))/(2*a);
    x2 = (-b-(sqrt(delt)))/(2*a);
    printf("x1= %f\nx2= %f", x1, x2);
    return 0;
}