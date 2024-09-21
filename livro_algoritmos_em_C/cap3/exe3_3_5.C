#include <stdio.h>

int main(){
    float first_score = 0, second_score = 0, third_score = 0;
    float mean_score = 0.0;

    printf("Enter test scores: ");
    scanf("%f%f%f", &first_score, &second_score, &third_score);

    mean_score = (first_score + second_score + third_score)/3.0;
    printf("Mean score: %.2f", mean_score);
    
    return 0;
}