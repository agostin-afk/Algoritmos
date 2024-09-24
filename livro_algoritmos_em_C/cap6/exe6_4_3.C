#include <stdio.h>

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){
    int n = 0;
    printf("Enter a number to fatorial: ");
    scanf("%d", &n);
    int result = fact(n);
    printf("Result: %d", result);
}