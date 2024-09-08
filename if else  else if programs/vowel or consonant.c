#include<stdio.h>

int main()
{
	
	char ch;
	
	printf("ENTER VOWEL = ");
	scanf("%c" ,&ch);
	
	if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' && ch =='a'|| ch =='e' || ch =='i' || ch =='o' || ch =='u')
		
		
		printf("IT IS A VOWEL");
	
	else
		printf("It IS NOT A VOWEL");
	
	return 0;
}
