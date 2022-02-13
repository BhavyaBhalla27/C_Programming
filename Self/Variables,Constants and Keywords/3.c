#include<stdio.h>

int main(){
    float celcius;
     
    printf("Enter the temp in celcius: ");
    scanf("%f",&celcius);
    printf("Temp in farenheit is %f",(celcius*9/5) + 32);
    return 0;
}