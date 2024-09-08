#include<stdio.h>

int main()

{
	int a ,b,c;
	
	printf("Value of b=");
	scanf("%d" , &b);
	
	printf("Value of c=");
	scanf("%d" ,&c);
	
	a= b%c;
	
	printf("Answer a = %d" ,a);
	
	return 0;
}
