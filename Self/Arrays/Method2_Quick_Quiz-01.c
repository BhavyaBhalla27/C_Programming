#include<stdio.h>

int main(){
    int marks[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("You entered marks for student 1 as %d , student 2 as %d, student 3 as %d , student 4 as %d and student 5 as %d",
            marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}