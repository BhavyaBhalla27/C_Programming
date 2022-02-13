#include<stdio.h>

void average(int *a, int *b);

int main(){
    int a = 88, b = 5;
    average(&a,&b);
    return 0;
}
void average(int *a , int *b){

    float avg,val1,val2;
    val1 = *a;
    val2 = *b;
    avg = (val1 + val2)/2;
    printf("average = %.2f", avg);

}