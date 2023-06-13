
#include<stdio.h>
void Increment(int a){
    a = a+1;
    printf("%p\n", &a);
}
int main(){
    int a;
    a = 10;
    Increment(a);
    printf("a=%d\n", a);
    printf("%p\n", &a);
}
