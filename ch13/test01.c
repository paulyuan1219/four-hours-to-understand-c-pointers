#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int *)malloc(3 * sizeof(int));

    int *p0 = (int *)calloc(3, sizeof(int));

    int *p1 = (int *)realloc(p, 3 * sizeof(int));
    int *p2 = (int *)realloc(p1, 0);             // free(p1)
    int *p3 = (int *)realloc(NULL, sizeof(int)); // (int*)malloc(sizeof(int))

    printf("%p, %p, %p, %p, %p\n", p, p0, p1, p2, p3);
}
