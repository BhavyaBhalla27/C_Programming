#include<stdio.h>

float temp_in_far(float celcius);

int main(){

    float celcius; 
    printf("Enter the temp in celcius: ");
    scanf("%f",&celcius);
    printf("Temp in far = %f",temp_in_far(celcius));


    return 0;
}

float temp_in_far(float celcius){
    float far;
    far = 9*celcius/5 + 32;
    return far;
}
