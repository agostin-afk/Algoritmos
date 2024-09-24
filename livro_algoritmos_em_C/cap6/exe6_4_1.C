#include <stdio.h>


int diff(int a, int b){
    return a - b;
}
int main(){
    int a = 0, b = 0;
    printf("Enter the values: ");
    scanf("%d %d", &a, &b);
    int result = diff(a, b);
    printf("The result: %d", result);
    return 0;
}