#include <stdio.h>


int div_numbers(int a, int b){
    return a/b;
}
int main(){
    int a = 0, b = 0;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    float result = div_numbers(a, b);
    printf("Result: %.2f", result);
    return 0;
}