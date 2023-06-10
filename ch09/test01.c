#include <stdio.h>
#include <string.h>

void main()
{
    char *C = "Hello";
    printf("%s\n", C);
    C[0] = 'a';
    // C[0] = 'a'; is invalid
    printf("%s\n", C);
}