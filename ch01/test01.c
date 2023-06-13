#include <stdio.h>

void main()
{
    int a = 5;
    int *p = &a;
    printf("&p = %p, p = %p, *p = %d\n", &p, p, *p);
    printf("&a = %p, a = %d\n", &a, a);
    *p = 8;
    printf("&a = %p, a = %d\n", &a, a);
}