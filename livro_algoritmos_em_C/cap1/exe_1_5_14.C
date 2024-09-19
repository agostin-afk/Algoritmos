#include <stdio.h>

int main(){
    int number = 0;
    for(int i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number == 5){
            return 0;
        }
    }
    return 0;
}