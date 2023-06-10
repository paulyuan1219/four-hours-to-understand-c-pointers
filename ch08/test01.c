#include <stdio.h>
#include <string.h>

void main()
{
    char C[] = "John";
    // char C[4] = "John" is invalid, char C[]={'J', 'o', 'h', 'n', '\0'} is valid.
    printf("%zu\n", sizeof(C)); // 5
    printf("%zu\n", strlen(C)); // 4

    char c1[] = "hello";
    char *c2;
    c2 = c1;
    // c1 = c2; is invalid
}