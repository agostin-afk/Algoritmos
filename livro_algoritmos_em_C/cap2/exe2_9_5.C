#include <stdio.h>

int main(){
    float first_measure = 0;
    float second_measure = 0;
    printf("Enter fisrt measure and second measure:  ");
    scanf("%f %f", &first_measure, &second_measure);

    float area = first_measure * second_measure;
    printf("The room area: %.2fm2", area);

}