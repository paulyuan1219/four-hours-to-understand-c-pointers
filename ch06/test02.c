#include <stdio.h>

void main()
{
    int A[] = {2, 4, 5, 8, 1};
    int i;
    int *p = A;
    p++; // A++ is invalid
    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &A[i]);
        printf("%p\n", A + i);
        printf("%d\n", A[i]);
        printf("%d\n", *(A + i));
    }
}