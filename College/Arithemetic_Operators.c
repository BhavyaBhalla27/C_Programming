#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Sum = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);    //Gives integer value as integer/integer = integer
    printf("Division = %d\n",a/b);
    c = a%b;
    printf("Remainder = %d",c);
    
    return 0;
    
    
}