#include<stdio.h>

int main(){
    int marks[5];   // allocate space for 4 variables
    printf("Enter marks of student 1: ");
    scanf("%d",&marks[0]);
    printf("Enter marks of student 2: ");
    scanf("%d",&marks[1]);
    printf("Enter marks of student 3: ");
    scanf("%d",&marks[2]);
    printf("Enter marks of student 4: ");
    scanf("%d",&marks[3]);
    printf("Enter marks of student 5: ");
    scanf("%d",&marks[4]);

    printf("You entered marks for student 1 as %d , student 2 as %d, student 3 as %d , student 4 as %d and student 5 as %d",
            marks[0],marks[1],marks[2],marks[3],marks[4]);

    return 0;
}