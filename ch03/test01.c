#include <stdio.h>

void main()
{
    int a = 1025;
    int *p = &a;
    char *p0;
    p0 = (char *)p;                        // typecasting
    printf("%u, %d\n", p, *p);             // 200, 1025
    printf("%u, %d\n", p + 1, *(p + 1));   // 204, -2454153
    printf("%u, %d\n", p0, *p0);           // 200, 1
    printf("%u, %d\n", p0 + 1, *(p0 + 1)); // 201, 4
    printf("%u, %d\n", p0 + 2, *(p0 + 2)); // 201, 4
    printf("%u, %d\n", p0 + 3, *(p0 + 3)); // 201, 4
    printf("%u, %d\n", p0 + 4, *(p0 + 4)); // 201, 4
    // 1025= 00000000 00000000 00000100 00000001
}