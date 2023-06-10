#include <stdio.h>
int SumOfElement(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElement(A, size);
    printf("%d\n", total);
}
