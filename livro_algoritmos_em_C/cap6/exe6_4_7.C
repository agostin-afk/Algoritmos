#include <stdio.h>

void print_n_asterisk(int number){
    for(int i = 0; i < number; i++){
        printf("*");
    }
    return ;
}

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    print_n_asterisk(number);
    return 0;
}