#include <stdio.h>

void main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p);       // 6
    printf("%p\n", *q);       // 225
    printf("%d\n", *(*q));    // 6
    printf("%p\n", *(*r));    // 225
    printf("%d\n", *(*(*r))); // 6
}