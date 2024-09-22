#include <stdio.h>

int main(){
    int number = 0, count_even = 0, count_odd = 0;
    for(int i = 0; i< 10; i++){
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number % 2 ==0){
            count_even ++;
        }
        else if(number % 2 != 0){
            count_odd ++;
        }

    }
    printf("numbers of even: %d\nnumbers of odd: %d", count_even, count_odd);
    return 0;
}