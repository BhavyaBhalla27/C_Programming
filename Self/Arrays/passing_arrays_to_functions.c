#include<stdio.h>
void printArray(int *ptr, int n);
int main(){
    int arr[] = {1,24,67,34,23};
    printArray(arr,5);
    return 0;
}
void printArray(int *ptr, int n){
    int i;
    for(i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    
}
    
