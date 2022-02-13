#include<stdio.h>
int main(){
	int i=1,num=7,factorial = 1;
	while(i<=num){
		factorial=factorial*i;
		i++;
		
	}	
	printf("Factorial of the number is %d",factorial);
	return 0;
}