#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Bhavya";
    char st2[30];
    printf("The length of st1 is %d\n",strlen(st1));
    strcpy(st2,st1);
    printf("The value of st2 is %s\n",st2);
    strcat(st1,st2);
    printf("The value in st1 is %s\n",st1);
    strcmp(st1,st2);
    printf("%d\n",strcmp(st2,st1));
    return 0;
}