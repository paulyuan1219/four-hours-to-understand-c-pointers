
#include<stdio.h>
void Increment(int a){
    a = a+1;
    printf("%u\n", &a);
}
int main(){
    int a;
    a = 10;
    Increment(a);
    printf("a=%d\n", a);
    printf("%u\n", &a);
}
