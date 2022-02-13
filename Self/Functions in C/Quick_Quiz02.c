#include<stdio.h>

void library();

int main(){
    library();
    return 0;
}

void library(){
    int a;
    printf("Enter the side of square: ");
    scanf("%d",&a);
    printf("Area = %d",a*a);
}