#include<stdio.h>

int main(){
    int physics,chem,math;
    float total;
    printf("Enter physics marks: ");
    scanf("%d",&physics);
    printf("Enter chem marks: ");
    scanf("%d",&chem);
    printf("Enter math marks: ");
    scanf("%d",&math);
    total = (physics + math + chem)/3;

    if((total<40) || physics<33 || chem<33 || math<33){
        printf("you are fail");
    }
    else printf("You are pass");
}