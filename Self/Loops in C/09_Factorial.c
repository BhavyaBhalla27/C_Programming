#include<stdio.h>

int main(){
    int i = 1, n = 8 , factorial = 1 ;
    while(i<=n){
        factorial*=i;
        i++;
    }
    printf("Answer = %d",factorial);
    return 0;
}