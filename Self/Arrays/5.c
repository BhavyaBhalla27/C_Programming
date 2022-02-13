#include<stdio.h>
void reverse(int a[],int size);
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int i;
    reverse(arr,7);
    for(i=0;i<7;i++){
        printf("The value at %d index is %d\n",i,arr[i]);
        
    }
    return 0;
}
void reverse(int a[],int size){
    int i,temp;
    for(i=0;i<(size/2);i++){
        temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
        
    }
}
