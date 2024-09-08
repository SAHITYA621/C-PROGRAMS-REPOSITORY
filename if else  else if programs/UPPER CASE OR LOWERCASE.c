#include<stdio.h>

int main()
{
	char ch;
	
	printf("ENTER A CHARACTER =");
	scanf("%c" ,&ch);
	
	if( ch =='A' || ch<='Z'){
		printf("CHARACTER IS UPPERCASE");
	}
	else{
		printf("CHARACTER IS LOWERCASE");
	}
	
	return 0;
}
