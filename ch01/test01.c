#include <stdio.h>

void main()
{
    int a;
    int *p;
    p = &a;
    a = 5;
    printf("p = %d\n", p);  // 204
    printf("addr(a) = %d\n", &a); // 204
    printf("addr(p) = %d\n", &p); // 64
    printf("(*p) = %d\n", *p); // 5
    *p = 8;
    printf("a = %d\n", a); // 8
}