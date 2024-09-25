#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x = 2, y = 8;
    int *p = &x, *q = &y;
    printf("A) %p - %d\nB) %p - %d\nC) %p - %d\nD) %p - %d\nE) %p - %p", &x, x, p, *p, &y, y, q, *q, p, q);
    return 0;
}