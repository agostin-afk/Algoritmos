#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int age = 0;
    char category[45];
    printf("Enter player's age: ");
    scanf("%d", &age);
    if(age<=13){
        strcpy(category, "Infantil");
    }
    else if(age<=17){
        strcpy(category, "juvenil");
    }
    else{
        strcpy(category, "senior");
    }

    printf("player's category: %s", category);
    return 0;
}