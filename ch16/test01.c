#include <stdio.h>
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    int c;
    int (*p)(int, int); // int* p(int, int)
    p = &Add;           // p = Add
    c = (*p)(2, 3);     // c = p(2, 3)
    printf("%d\n", c);
}

/*
typedef int (*ADD)(const int&, const int&);
ADD padd = Add;    
*/