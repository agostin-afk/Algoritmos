#include <stdio.h>
#include <string.h>
int main(){
    float scores[3] = {0.0};
    char student[45];
    printf("Enter student's name: ");
    fgets(student, 45, stdin);
    student[strcspn(student, "\n")] = '\0';
    printf("Now, Enter student's scores: ");
    for(int i = 0; i < 3; i++){
        scanf("%f", &scores[i]);
    }
    printf("The scores:\n");
    for(int i = 0; i < 3; i++){
        printf("%.2f  ", scores[i]);
    }
}