#include<stdio.h>
int main(){
	char ch;
	printf("Enter the chararcter from a to z or A to Z: ");
	scanf("%d",&ch);
	
	switch(ch){
		case 'a': printf("Vowel detected"); break;
		case 'e': printf("Vowel detected"); break;
		case 'i': printf("Vowel detected"); break;
		case 'o': printf("Vowel detected"); break;
		case 'u': printf("Vowel detected"); break;
		case 'A': printf("Vowel detected"); break;
		case 'E': printf("Vowel detected"); break;
		case 'I': printf("Vowel detected"); break;
		case 'O': printf("Vowel detected"); break;
		case 'U': printf("Vowel detected"); break;
		default: printf("Consonant detected"); 
	}
	return 0;
}