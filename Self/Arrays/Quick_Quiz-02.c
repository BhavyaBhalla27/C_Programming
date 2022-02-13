#include<stdio.h>

int main(){
    int i = 45;
    int *ptr = &i;
    int n = 21;
    int *ptr1 = &n;
    printf("The value of ptr before increment is %u\n",ptr);
    ptr++;
    printf("The value of ptr after increment is %u\n",ptr);
    printf("\n");
    printf("The value of ptr before decrement  is %u\n",ptr1);
    ptr1--;
    printf("The value of ptr after increment is %u\n",ptr1);
    printf("\n");
    printf("Subtracting from each other = %u\n",ptr - ptr1);
    if(ptr>ptr1){
        printf("ptr is greater than ptr1");
    }
    else printf("ptr is less than ptr1");
    return 0;
}