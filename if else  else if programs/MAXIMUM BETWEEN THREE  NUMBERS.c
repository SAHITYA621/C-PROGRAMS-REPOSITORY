#include<stdio.h>

int main()

{
	int a,b,c;
	
	printf("Value of A = " );
	scanf("%d" ,&a);
	
	printf("Value of B = ");
	scanf("%d" , &b);
	
	printf("Value of C = ");
	scanf("%d" ,&c);
	
	if((a>b)&&(a>c))
	{
		printf("A is largest");
	} 
	
	else if((b>c) &&(b>a))
	{
		printf("B is largest");
	}
	else
	{
		printf("C is largest");
	}
	
	return 0;
	
	}
	



