#include<stdio.h>
int main(){
    char str[] = {'B','H','A','V','Y','A','\0'};
    char *ptr;
    ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr ++;
    }
}
