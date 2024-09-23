#include <stdio.h>

int main(){
    int numbers[10];
    int sum = 0;
    printf("Fill the vetor with numbers: ");
    for (int i = 0; i< 10; i++){
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += numbers[i];
    }
    printf("The sum is: %d", sum);
    return 0;
}