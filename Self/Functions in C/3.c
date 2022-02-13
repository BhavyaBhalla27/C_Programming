#include<stdio.h>

float force(float mass);

int main(){
    float mass;
    printf("Enter the mass of the body: ");
    scanf("%f",&mass);
    printf("Force = %.2f",force(mass));

    return 0;
}

float force(float mass){
    float force;
    force = mass * 9.8;
    return force;
}