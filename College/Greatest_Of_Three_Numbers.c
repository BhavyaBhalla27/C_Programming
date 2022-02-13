#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the values of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d is greatest",a);
		
	}
	if (b>c&&b>a){
		printf("%d is greatest",b);
	}
	else
	printf("%d is greatest",c);
	return 0;
}