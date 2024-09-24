#include <stdio.h>
#include <string.h>

struct Contacts
{
    char name[45];
    char email[45];
    int phone_number;
};

void add_contact(struct Contacts *c, int *count){
    getchar();
    printf("Enter a name: ");
    fgets(c[*count].name, 45, stdin);
    c[*count].name[strcspn(c[*count].name, "\n")] = '\0';
    printf("Enter a phone number: \n");
    scanf("%d", &c[*count].phone_number);
    getchar();
    printf("Enter a email: \n");
    fgets(c[*count].email, 45, stdin);
    c[*count].email[strcspn(c[*count].email, "\n")] = '\0';
    (*count)++;
    return ;
}
void show_contact(struct Contacts *c, int *count){
    int number_id = 0;
    printf("Enter the number of contact: \n");
    scanf("%d", &number_id);
    if(number_id >= *count){
        printf("Please enter a valid number.\n");
        return ;
    }
    else{
        printf("Name: %s\nEmail: %s\nNumber: %d\n", c[number_id].name, c[number_id].email, c[number_id].phone_number);
    }
    return ;
}


int main(){
    struct Contacts contatc[100];
    int count = 0, choice = 0;
    while(1){
        printf("\tMenu:\n");
        printf("1. Add a new contact\n2. show a contatc\n3. exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                add_contact(contatc, &count);
                break;
            case 2:
                show_contact(contatc, &count);
                break;
            case 3:
                printf("Exit...");
                return 0;
            default:
                printf("Error: wrong choice.");
                return 0;
        }
    }
    return 0;
}