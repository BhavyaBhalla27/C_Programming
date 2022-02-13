#include<stdio.h>

int main(){
    int i = 1 , sum = 0 , n = 8, b ;
    for(i = 1;i<11;i++){
        b = 8*i;
        sum = sum + b;
    }
    printf("Sum = %d",sum);
    return 0;
}