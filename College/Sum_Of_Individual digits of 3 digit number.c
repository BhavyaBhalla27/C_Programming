#include<stdio.h>
int main(){
	int num,sum = 0,temp;
	printf("Enter a three digit number please: ");
	scanf("%d",&num);
	while(num>0){
		temp = num%10;
		sum = sum + temp;
		num = num/10;
		
	}
	printf("The sum of the individual digits of the entered three digit number is %d",sum);
	return 0;
}