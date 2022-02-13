#include<stdio.h>

int main(){
    int num,fd,ld;
    printf("Enter a three digit number please: ");
    scanf("%d",&num);
    ld = num%10;
    fd = num/100;
    printf("last digit = %d\n",ld);
    printf("first digit = %d\n",fd);
    int sum;
    sum = ld + fd;
    printf("Sum of first digit and last digit of entered three digit number is = %d",sum);
    return 0;
}