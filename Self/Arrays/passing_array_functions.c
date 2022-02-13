#include<stdio.h>
void showArray(int a[],int n);
int main(){
    int a[]={34,56,43,12.90};
    showArray(a,5);
    return 0;
}
void showArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("The value of element at %d index is %d\n",i,a[i]);
    }
}