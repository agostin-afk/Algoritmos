#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[45];
    char letter[1];
    printf("Enter a word: ");
    fgets(string, 45, stdin);
    string[strcspn(string, "\n")] = '\0';
    printf("Now, enter a letter: ");
    scanf("%c", letter);
    int count_letter = 0;
    int len_string = strlen(string);
    for(int i = 0; i < len_string; i++){
        if(tolower(letter[0]) == tolower(string[i])){
            count_letter ++;
        }
    }
    printf("In your string have %d", count_letter);
    return 0;
}