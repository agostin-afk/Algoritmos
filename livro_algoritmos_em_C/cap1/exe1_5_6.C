#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[45];
    float first_test_score = 0.0;
    float second_test_score = 0.0;
    float third_test_score = 0.0;
    printf("Enter the student's name: "); 
    scanf("%s", name);
    printf("Enter the three test scores by order: ");
    scanf("%f %f %f", &first_test_score, &second_test_score, &third_test_score);
    first_test_score *= 2;
    second_test_score *= 3;
    third_test_score *= 5;
    float mean_score = (first_test_score +second_test_score +third_test_score)/10;
    printf("student: %s\nthe mean score is: %.2f", name, mean_score);
    return 0;

}