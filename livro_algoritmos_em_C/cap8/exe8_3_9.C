#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int number_int = 0;
    float number_float = 0.0;
    char string[45];
    printf("%p\n%p\n%p", &number_int, &number_float, &string); 
    
    
    return 0;
}