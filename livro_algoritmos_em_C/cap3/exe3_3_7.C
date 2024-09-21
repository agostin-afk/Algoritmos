#include <stdio.h>
#define PI 3.1415
int main(){
    float radius = 0.0;
    float area = 0.0;

    printf("Enter circle radius: ");
    scanf("%f", &radius);
    if(radius < 0.0){
        printf("Error: radius must be positive");
        return 0;
    }
    area = PI *radius*radius;
    printf("Circle area: %.2fm2", area);
    return 0;
}