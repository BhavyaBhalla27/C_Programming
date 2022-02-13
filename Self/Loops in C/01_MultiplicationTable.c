#include<stdio.h>

int main(){
    int n,i = 1;
    printf("Enter: ");
    scanf("%d",&n);
    while(i<11){
        printf("%d X %d = %d \n",n,i,n*i);
        i++;

    }
    return 0;

}
