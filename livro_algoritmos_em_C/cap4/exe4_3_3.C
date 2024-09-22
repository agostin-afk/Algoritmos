#include <stdio.h>

int main(){
    int count = 0;
    int value = 0;
    for(int i = 0; i < 5; i++){
        printf("Enter a value: ");
        scanf("%d", &value);
        if(value < 0){
            count++;
        }
    }
    printf("The amount of negative values was: %d", count);
    return 0;
}