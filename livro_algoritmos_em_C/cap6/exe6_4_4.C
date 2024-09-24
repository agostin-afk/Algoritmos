#include <stdio.h>
#define PI 3.1415
float circle_area(int r){
     return (r*r*PI);
}

int main(){
    float radius = 0.0;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    float result = circle_area(radius);
    printf("Resulf: %.2fm2", result);
    return 0;
}