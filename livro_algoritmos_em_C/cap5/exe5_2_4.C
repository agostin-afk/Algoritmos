#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int count = 0;
    char word[45];
    printf("Enter a word: ");
    fgets(word, 45, stdin);
    word[strcspn(word, "\n")] = '\0';
    for(size_t i = 0; i < strlen(word); i++){
        word[i] = tolower(word[i]);
        count++;
    }
    printf("Count: %d\n", count);
    for(size_t i = 0; i < strlen(word); i++){
        printf("%c", word[i]);
    }
}