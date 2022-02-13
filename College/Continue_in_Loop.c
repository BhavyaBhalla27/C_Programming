#include<stdio.h>
int main(){
	int i;
	for(i=0;i<=8;i++){
		if(i==3){
			continue;
		}
		printf("%d\n",i);
		
}
printf("Control outside the loop");
return 0;
}
