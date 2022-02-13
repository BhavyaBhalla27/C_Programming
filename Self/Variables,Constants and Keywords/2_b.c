#include<stdio.h>

int main(){
    float radius;
    float height;
    printf("Enter the radius please: ");
    scanf("%f",&radius);
    printf("Enter the height please: ");
    scanf("%f",&height);
    printf("Area = %f",3.14*radius*radius*height);
    return 0;
}