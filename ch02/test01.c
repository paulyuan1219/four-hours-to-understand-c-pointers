#include <stdio.h>

void main()
{
    int a = 10;
    int *p = &a;
    // Pointer arithmetic
    printf("%p\n", p);    // 204
    printf("%p\n", p + 1); // 208
}