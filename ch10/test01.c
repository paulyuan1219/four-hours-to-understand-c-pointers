#include <stdio.h>
#include <string.h>

void main()
{
    int B[2][3] = {2, 3, 6, 4, 5, 8};
    int(*p)[3] = B;                                             // int* p = B is invalid
    printf("%p,%p\n", B, &B[0]);                              // 400
    printf("%p,%p,%p\n", *B, B[0], &B[0][0]);               // 400
    printf("%p,%p\n", B + 1, &B[1]);                          // 412
    printf("%p,%p,%p\n", *(B + 1), B[1], &B[1][0]);         // 412
    printf("%p,%p,%p\n", *(B + 1) + 2, B[1] + 2, &B[1][2]); // 420
    printf("%d\n", *(*B + 1));                                  // 3
}