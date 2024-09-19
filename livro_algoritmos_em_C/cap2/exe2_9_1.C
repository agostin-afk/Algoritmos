#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int choice = 0;
    char team[45];
    printf("\t\tchoose your team number\n choices:\n1. Fortaleza\n2. Ceara\n3. Bahia\n4. Vitoria\n");
    scanf("%d", &choice);
    if(choice == 1){
        strcpy(team,"Fortaleza");
    }
    else if(choice == 2){
        strcpy(team, "Ceara");
    }
    else if(choice == 3){
        strcpy(team, "Bahia");
    }
    else if(choice == 4){
        strcpy(team, "Vitoria");
    }
    printf("your team: %s", team);
    

}