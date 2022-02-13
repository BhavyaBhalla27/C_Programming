#include<stdio.h>

int main(){
    int age;
    int vipPass;
    
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Do you have a vipPass?: ");
    scanf("%d",&vipPass);
    if ((age>=18 && age<=70) || vipPass == 1){
        printf("You can drive as you are above 18 and below 70");
    }
    else printf("You can not drive as you are above 70");
    return 0;
}