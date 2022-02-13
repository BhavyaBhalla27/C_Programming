#include<stdio.h>
int main(){
    int a[10],i,num;
    printf("Enter the value of number for which you want to store the multiplication table in array: ");
    scanf("%d",&num);
    for(i=1;i<11;i++){
        a[i-1] = num*i;

    }
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}