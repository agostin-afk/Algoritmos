#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>  

#define PI 3.1415

int main(){
    char answer[45];
    
    do {
        printf("Enter answer ('n' to leave): ");
        fgets(answer, 45, stdin);
        answer[strcspn(answer, "\n")] = '\0';

        if (strcmp(answer, "n") == 0) {
            break;
        }

        int is_number = 1;
        for (size_t i = 0; i < strlen(answer); i++) {
            if (!isdigit(answer[i])) {
                is_number = 0;
                break;
            }
        }

        if (is_number) {
            float number = atoi(answer);
            float area = PI * number * number;
            printf("the area of the circle is: %.2fm2\n", area);
        } else {
            printf("Error: wrong answer.\n");
        }
        
    } while(1);

    return 0;
}
