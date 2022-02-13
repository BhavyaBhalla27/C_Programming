#include<stdio.h>
int positiveNumber(int a[],int size);
int main(){
    int a[] = {-90,-54,32,-94,-2,52,67};
   
    printf("The number of positive integers in the array is: ");
    positiveNumber(a,7);
}
int positiveNumber(int a[],int size){
    int i,j=0;
    for(i=0;i<size;i++){
        if(a[i]>0){
            j++;
        }
    }
    printf("%d",j);
}