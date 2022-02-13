#include<stdio.h>

int main(){
    int n;
    int i = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=n; i ; i--){
        printf("%d\n",i);
    }
    return 0;
}