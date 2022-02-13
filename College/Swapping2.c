#include<stdio.h>

int main(){
    int a = 10, b = 20;
    b = a + b;
    a = b - a;
    b = b - a;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}