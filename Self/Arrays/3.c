#include<stdio.h>
int main(){
    int a[10],i;
    for(i=1;i<11;i++){
        a[i-1] = 5*i;

    }
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}