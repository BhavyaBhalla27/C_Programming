#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("Enter the value of first string: ");
    scanf("%s",&st1);
    
    printf("Enter the value of second string character by character: ");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';
    strcmp(st1,st2);
    printf("%d",strcmp(st1,st2)); //returns 0 if strings are equal.
    return 0;

}