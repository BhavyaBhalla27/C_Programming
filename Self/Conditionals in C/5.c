#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97){
        printf("It is a lower case");
    }
    else printf("it is a upper case");
}