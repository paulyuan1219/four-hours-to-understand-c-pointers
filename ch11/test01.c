#include <stdio.h>
#include <string.h>

void main()
{
    int C[3][2][2] = {2, 5, 7, 9, 3, 4, 6, 1, 0, 8, 11, 13};
    int(*p)[2][2] = C;
    int(*p1)[2] = C[0];
    printf("%p\n", C);                                       // 800
    printf("%p,%p,%p\n", *C, C[0], &C[0][0]);                // 800
    printf("%d,%d\n", *(C[0][1] + 1), C[0][1][1]);           // 9
    printf("%d,%d,%d\n", *(C[1] + 1), C[1][1], &C[1][1][0]); // 824
}