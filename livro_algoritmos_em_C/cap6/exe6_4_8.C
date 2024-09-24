#include <stdio.h>


int cube_number(int n){
    return n*n*n;
}

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = cube_number(number);
    printf("Result: %d", result);
    return 0;
}