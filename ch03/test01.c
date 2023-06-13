#include <stdio.h>

void main()
{
    int a = 1025;
    int *p = &a;
    char *p0;
    p0 = (char *)p;                        // typecasting
    printf("%p, %d\n", p, *p);             // 200, 1025
    printf("%p, %d\n", p + 1, *(p + 1));   // 204, -2454153
    printf("%p, %d\n", p0, *p0);           // 200, 1
    for(int i = 1; i <= 4; i++) {
        printf("%p, %d\n", p0 + i, *(p0 + i)); // 201, 4

    }
    // 1025= 00000000 00000000 00000100 00000001
}