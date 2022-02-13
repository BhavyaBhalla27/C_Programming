#include<stdio.h>

int main(){
    int n,i = 10;
    printf("Enter: ");
    scanf("%d",&n);
    while(i>0){
        printf("%d X %d = %d \n",n,i,n*i);
        i--;

    }
    return 0;

}
