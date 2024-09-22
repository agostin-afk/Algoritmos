#include <stdio.h>

int main(){
    int count = 0, count_child = 0, many_child = 0, salary_over_100 = 0;
    float salary = 0, bigger_salary = 0;
    float sum_salary = 0;
    do{
        printf("Enter the salary: ");
        scanf("%f", &salary);
        if(salary < 0){
            count = 1;
            break;
        }
        else if(salary > bigger_salary){
            bigger_salary = salary;
        }
        if(salary > 100){
            salary_over_100 ++;
        }
        sum_salary += salary;
        printf("Enter how many children you have: ");
        scanf("%d", &many_child);
        count_child += many_child;
        count ++;
    }
    while(1);
    printf("\nMean salary: %.2f\nAverage children: %.2f\nBigger salary: %.2f\nSalary over 100.00: %d", sum_salary/count, (float)count_child/count, bigger_salary, salary_over_100);
    return 0;
    
}