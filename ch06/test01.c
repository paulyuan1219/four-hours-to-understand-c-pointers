#include <stdio.h>

void main()
{
    int A[5] = {2, 4, 5, 8, 1};
    int *p = &A[0];           // int* p = A
    printf("%p\n", p);        // 200
    printf("%d\n", *p);       // 2
    printf("%p\n", p + 2);    // 208
    printf("%d\n", *(p + 2)); // 5
}