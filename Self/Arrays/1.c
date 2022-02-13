#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr = a;
    if(a[2]==*(ptr+2)){
        printf("TRUE");
    }
    else printf("FALSE");
    return 0;
}