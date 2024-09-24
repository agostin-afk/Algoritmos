#include <stdio.h>

void show_credits(float value){
    printf("\nCredits: %.2f", value);
    return ;
}
void subtract_credits(float *credits, float value){
    *credits -= value;
    return ;
}
void add_credits(float *credits, float value){
    *credits += value;
    return ;
}

int main(){
    int choice = 0;
    float credit = 500.0;
    float aux = 0.0;
    printf("\tMenu\n1. show credits\n2. subtract credits\n3. add credits\n4. exit ");
    while(1){    
        printf("\nEnter a choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            show_credits(credit);
            break;
        
        case 2:
            printf("Enter a value: ");
            scanf("%f", &aux);
            subtract_credits(&credit, aux);
            show_credits(credit);
            break;
        
        case 3:
            printf("Enter a value: ");
            scanf("%f", &aux);
            add_credits(&credit, aux);
            show_credits(credit);
            break;
        
        case 4:
            printf("Exit...");
            return 0;
            break;
        
        default:
            printf("Error: invalid choice");
            break;
        }
    }
}