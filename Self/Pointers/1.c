#include<stdio.h>

int main(){
    int i = 23;
    printf("The address of i is %u\n",&i);
    printf("The value at the given address %u is %d",&i,*(&i));
    return 0;
}