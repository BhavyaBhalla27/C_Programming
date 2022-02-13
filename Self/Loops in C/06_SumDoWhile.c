#include<stdio.h>

int main(){
    int i = 1 , sum = 0 , n = 10;
    do{
        sum +=i;
        i++;
    }while(i<=n);

    printf("Sum = %d",sum);
    return 0;
}