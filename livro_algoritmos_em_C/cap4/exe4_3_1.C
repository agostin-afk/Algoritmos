#include <stdio.h>

int main(){
    int password = 123456;
    int password_test = 0;
    int count = 0;
    do{
        printf("Enter the password: ");
        scanf("%d", &password_test);
        if (password_test != password){
            count++;
            printf("Error: wrong password!\n");
        }
        else{
            printf("Success");
            break;
        }
    }
    while(count<3);
    if(count >= 3){
        printf("Blocked card!");
    }
    return 0;
}