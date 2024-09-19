#include <stdio.h>
#include <stdlib.h>

void drawLogo() {
    printf("*****************************************\n");
    printf("*                                       *\n");
    printf("*          A C M E   C O R P            *\n");
    printf("*                                       *\n");
    printf("*       ####   ##   ##  #####           *\n");
    printf("*      ##      ###  ##  ##              *\n");
    printf("*      ##  ##  ## # ##  #####           *\n");
    printf("*      ##   #  ##  ###  ##              *\n");
    printf("*       ####   ##   ##  #####           *\n");
    printf("*                                       *\n");
    printf("*****************************************\n");
}

void showMenu(){

    printf("\n\tACME Corp - Admin Menu\n");
    printf("1. View financial reports\n");
    printf("2. Manage employee data\n");
    printf("3. Process transactions\n");
    printf("4. Exit\n");
}
int main(){
    int choice = 0;
    drawLogo();
    showMenu();

    printf("Enter you choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Opening financial reports...");
        break;
    
    case 2: 
        printf("Opening employee data management");
        break;
    case 3:
        printf("Processing transactions");
        break;
    case 4:
        printf("Exiting...");
        exit(0);
    default: 
        printf("Invalid choice! please try again\n");
    }

}