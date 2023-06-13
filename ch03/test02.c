#include <stdio.h>

void main()
{
    int a = 1025;
    void *p1;
    p1 = &a;
    printf("%p\n", p1); // 200
    printf("%d\n", *(int *)p1);
    printf("%p\n", p1 + 1);
    printf("%d\n", *(int *)(p1+1));

    for(int i = 0; i < 16; i ++) {
        printf("%p\n", p1 + i);
    }

    // 1025= 00000000 00000000 00000100 00000001
}