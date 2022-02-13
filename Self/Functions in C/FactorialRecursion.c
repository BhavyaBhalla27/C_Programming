#include<stdio.h>

int factorial(int x);

int main(){
    int x = 5;
    int a = factorial(x);
    printf("Factorial of %d is = %d",x,a);
    return 0;
}

int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}