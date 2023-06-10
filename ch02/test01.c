#include <stdio.h>

void main()
{
    int a = 10;
    int *p = &a;
    // Pointer arithmetic
    printf("%d\n", p);    // 204
    printf("%d\n", p + 1); // 208
}