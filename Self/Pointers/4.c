#include<stdio.h>

void sum(int *a, int *b);

int main(){
    int a = 3, b = 5;
    sum(&a,&b);
    return 0;
}
void sum(int *a , int *b){

    int calcsum,val1,val2;
    val1 = *a;
    val2 = *b;
    calcsum = val1 + val2;
    printf("Sum = %d", calcsum);

}