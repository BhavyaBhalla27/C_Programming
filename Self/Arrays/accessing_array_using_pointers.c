#include<stdio.h>
int main(){
    int marks[]={34,68,76,90};
    int *ptr;
    ptr = &marks[0];
    printf("Marks at 0th index is %d\n",*ptr);
    ptr++;
    printf("Marks at 1st index is %d\n",*ptr);
    ptr++;
    printf("Marks at 2nd index is %d\n",*ptr);
    ptr++;
    printf("Marks at 3rd index is %d",*ptr);
    ptr++;

    return 0;
}