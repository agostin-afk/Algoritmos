#include <stdio.h>

int main(){
    int number = 0, count = 0, even_number = 0;
    do{
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number % 2 == 0 && number != 0){
            count ++;
            even_number += number;
        }
        if(number == 0){
            if(count == 0){count = 1;}
            break;
        }
    }while(1);
    printf("Average peer: %.2f", (float)even_number / count);
    return 0;

}