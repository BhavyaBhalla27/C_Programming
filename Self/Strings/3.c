#include<stdio.h>
int main(){
    char st1[30] = "Bhavya";
    char *ptr;
    ptr = st1;
    int i=0;
    while(*ptr!='\0'){
        ptr++;
        i++;
    }
    printf("Length of string is %d",i);
    return 0;
}