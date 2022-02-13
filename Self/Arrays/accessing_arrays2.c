#include<stdio.h>
int main(){
    int marks[]={56,78,32,13};
    int *ptr,i;
    ptr = &marks[0];
    for(i=0;i<4;i++){
        printf("Enter the marks of student %d: ",i);
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<4;i++){
        printf("Marks of students %d is %d\n",i,marks[i]);
    }
    return 0;
}