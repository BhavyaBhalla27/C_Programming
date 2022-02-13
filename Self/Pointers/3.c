#include<stdio.h>

void changeValue(int *num);

int main(){
    int num = 5;
    printf("Value before is %d\n",num);
    
    changeValue(&num);
    
    return 0;
}

void changeValue(int *num){
    
    int value,c;
    value = *num;
    c = 10*value;

    printf("Value after is %d", c );
}