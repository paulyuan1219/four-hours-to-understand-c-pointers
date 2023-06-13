#include <stdio.h>
int SumOfElement(int A[])
{
    int i, sum = 0;
    int size = sizeof(A) / sizeof(A[0]);
    printf("%lu, %lu, %d\n", sizeof(A), sizeof(A[0]), size);
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    printf("%lu, %lu\n", sizeof(A), sizeof(A[0]));
    int total = SumOfElement(A);
    printf("%d\n", total);
    printf("%lu\n", sizeof(int *));
}

/*
In the given code snippet, the sizeof(A) expression returns the size of the poi
nter A instead of the size of the array. In C, when you pass an array as a func
tion argument, it decays into a pointer to its first element. Therefore, 
sizeof(A) gives you the size of the pointer, which is typically 8 bytes on a 
64-bit system.

Output: 
20, 4
8, 4, 2
3
8
*/