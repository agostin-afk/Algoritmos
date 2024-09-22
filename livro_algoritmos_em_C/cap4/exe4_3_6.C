#include <stdio.h>

int main(){
    int a = 0 , b = 0, c = 0, sum_even = 0;
    printf("Enter a numbers(a, b, c): ");
    scanf("%d %d %d", &a,&b, &c);
    int flag_limit = b, flag_initial = c;

    if(a < 1){
        printf("Error: a must be greater than 1");
        return 0;
    }
    if(c > b){
        flag_limit = c;
        flag_initial = b;
    }
    for(int i = flag_initial; i <= flag_limit; i++){
        if(i % a == 0){
            sum_even += i;
        }
    }
    printf("Then sums of the even numbers: %d", sum_even);
    return 0;
}