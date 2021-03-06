#include<stdio.h>
void printTable(int mulTable[], int num, int n);
int main(){
    int mulTable[3][10];
    printTable(mulTable[0],2,10);
    printTable(mulTable[0],7,10);
    printTable(mulTable[0],9,10);
    return 0;
}
void printTable(int mulTable[],int num,int n){
    int i;
    printf("The multiplication table of %d is: \n",num);
    for(i=0;i<n;i++){
        mulTable[i] = num*(i+1);
    }
    for(i=0;i<n;i++){
        printf("%dX%d = %d\n",num,i+1,mulTable[i]);
    }
    printf("*********************************************\n\n");
}