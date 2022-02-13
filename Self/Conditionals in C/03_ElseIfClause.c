#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18 && age<=45){
        printf("You can drive");
    }
    else if (age>45 && age<=70){
        printf("You are getting old and should consider hiring a driver");
    }
    else if ((age>70 && age<=120) || (age>0 && age<18)){
        printf("You dont have to drive now.");
    }
    else if (age<0 || age>120) printf("Enter a valid age");
    return 0;
}