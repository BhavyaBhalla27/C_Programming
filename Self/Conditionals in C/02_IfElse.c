#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("Number entered is even");
    }
    else {
        printf("Number entered is odd");
    }
}