#include <stdio.h>


int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(int i = 0; i <= 10; i++){
        if(i == 0){
            continue;
        }
        else{
            if(number % i == 0){
                printf("%d / %d = %d\n", number, i , number / i);
            }
        }
    }
    return 0;
}