#include <stdio.h>
#include <string.h>

int main(){
    float first_score = 0.0, second_score = 0.0, third_score = 0.0;
    char name[45];
    float mean_score = 0.0;
    printf("Enter the student's name: ");
    fgets(name, 45, stdin);
    printf("Enter test scores");
    scanf("%f%f%f", &first_score, &second_score, &third_score);
    mean_score = (first_score + second_score + third_score)/3;
    printf("%s mean score: %.2f", name, mean_score);
    return 0;
}