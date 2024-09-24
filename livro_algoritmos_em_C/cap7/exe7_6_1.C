#include <stdio.h>
#include <string.h>
struct Funcionario
{
    int age;
    float salary;
    char name[45];
};

void show(struct Funcionario n){
    printf("%s - ", n.name);
    printf("%d\n%.2f",n.age, n.salary);
}
int main(){
    struct Funcionario Agosto;
    printf("Enter name: ");
    fgets(Agosto.name, 45, stdin);
    Agosto.name[strcspn(Agosto.name, "\n")] = '\0';
    printf("Enter age: ");
    scanf("%d", &Agosto.age);
    printf("Enter salary: ");
    scanf("%f", &Agosto.salary);
    show(Agosto);
    return 0;
}