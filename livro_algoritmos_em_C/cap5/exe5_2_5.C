#include <stdio.h>
#include <string.h>

int main(){
    float numeric_data[4] = {0};
    char name[45] = {0};
    for(int i = 0; i < 4; i++){
        if(name[0] == '\0'){
            printf("Enter student's name: ");
            fgets(name, 45, stdin);
            name[strcspn(name, "\n")] = '\0';
            i--;
        }
        else{
            if(i == 0){
                printf("Enter student's ID: ");
                int aux = 0;
                scanf("%d", &aux);
                numeric_data[i] = aux;
            }
            else{
                printf("Enter student's score: ");
                float aux = 0;
                scanf("%d", &aux);
                numeric_data[i] = aux;
            }
            while (getchar() != '\n');
        }
    }
    printf("\n\nStudent's name: %s", name);
    printf("\nStudent's ID: %d\nStudent's scores:", (int)numeric_data[0]);
    
    for(int i = 1; i <= 3; i++){
        printf("\n\t%.1f", numeric_data[i]);
    }
    return 0;
}