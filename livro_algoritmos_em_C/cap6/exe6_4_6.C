#include <stdio.h>


void between_a_z(char c){
    if(c >= 'a' && c <= 'z'){
        printf("Is between a and z.");
    }
    return ;
}
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    between_a_z(c);
    return 0;
}