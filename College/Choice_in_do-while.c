#include<stdio.h>
int main(){
	char ch;
	int number;
	do{
		printf("Enter the number: ");
		scanf("%d",&number);
		printf("Square of the number is %d\n",number*number);
		fflush(stdin);
		printf("Do you want to calculate square of a number (y/n): ");
		scanf("%c",&ch);
	}while(ch=='y');
	return 0;
}