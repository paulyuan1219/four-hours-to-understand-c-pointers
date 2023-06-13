#include<stdio.h>
void Func1(int A[]){} // int* A
void Func2(int A[][3]){} // int (*A)[3]
void Func3(int A[][2][2]){} // int (*A)[2][2]
int main(){
    int A[2] = {1, 2};
    Func1(A);
    int B[2][3] = {2, 4, 5, 6, 7, 8};
    Func2(B);
    int C[3][2][2] = {2, 5, 7, 9, 3, 4, 6, 1, 0, 8, 11, 13};
    Func3(C);
}
