#include <stdio.h>

int main(){
    float salary = 0.0, new_salary = 0.0;
    printf("Enter your old salary: ");
    scanf("%f", &salary);
    if (salary > 1000.0){
        printf("This salary exceeds the allowable increase.");
        return 0;
    }
    new_salary = salary *1.10;
    printf("Your new salary: %.2f", new_salary);
    
    return 0;

}