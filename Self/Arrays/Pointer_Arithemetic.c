#include<stdio.h>

int main(){
    int i = 34;
    int *ptr = &i;
    char val = 'c';
    char *ptr2 = &val;
    float val2 = 4.6;
    float *ptr3 = &val2;

    printf("The value of ptr is %u\n",ptr);
    printf("The value of ptr2 is %u\n",ptr2);
    printf("The value of ptr3 is %u\n",ptr3);
    ptr ++;         // adds 4 to the address as integer in my architecture is of 4 bytes.
    ptr ++;         // adds 4 to the address as integer in my architecture is of 4 bytes i.e total 8 
    ptr --;         // subtracts 4 to the address as integer in my architecture is of 4 bytes.
    ptr2 ++;        // adds 1 to the address as char in my architecture is of 1 bytes.
    ptr3++;         // adds 4 to the address as float in my architecture is of 4 bytes.
    printf("The value of ptr is %u\n",ptr);
    printf("The value of ptr2 is %u\n",ptr2);
    printf("The value of ptr3 is %u\n",ptr3);
    return 0;
}
