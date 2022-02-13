// sum of first n natural numbers = n + sum(n-1)

#include<stdio.h>

int sum(int num);

int main(){
    int num;
    printf("Enter till which natural number you want the sum: ");
    scanf("%d",&num);
    printf("Sum = %d",sum(num));

    return 0;
}

int sum(int num){
    int result;
    result = num + sum(num-1);
    return result;

    if(num < 0){
        return -1;
    }
    else if(num == 0){
        return 0;
    }
    else{
        printf("%d",result);
    }
}