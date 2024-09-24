#include <stdio.h>
#include <string.h>

struct Car
{
    char car_brand[45];
    int year_of_manufacture;
    char color[45];
    float price;
};
void show_car(struct Car c){
    printf("Car brand: %s\nColor: %s\nYear of manufacture: %d\nPrice: %.2f", c.car_brand, c.color, c.year_of_manufacture, c.price);
    return ;
}
int main(){
    struct Car my_car;
    printf("Enter the car brand: ");
    fgets(my_car.car_brand, 45, stdin);
    my_car.car_brand[strcspn(my_car.car_brand, "\n")] = '\0';
    printf("Enter the car color: ");
    fgets(my_car.color, 45, stdin);
    my_car.color[strcspn(my_car.color, "\n")] = '\0';
    printf("Enter the year of manufacture: ");
    scanf("%d", &my_car.year_of_manufacture);
    printf("Enter the car price: ");
    scanf("%f", &my_car.price);
    show_car(my_car);
    return 0;
}
