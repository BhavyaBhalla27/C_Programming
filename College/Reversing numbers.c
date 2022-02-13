#include<stdio.h>
int main(){
	int num,remainder,reverse=0;
	printf("Enter three digit number: ");
	scanf("%d",&num);
	while(num!=0){
		remainder=num%10;
		reverse = reverse*10 + remainder;
		num=num/10;
		
	}
	printf("Reverse order of digits is %d",reverse);
	return 0;
}