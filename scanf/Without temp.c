#include<stdio.h>

int main()
{
	int a ,b;
	
	printf("Value of a=");
	scanf("%d" ,&a);
	printf("Value of b=");
	scanf("%d" ,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping value of a=%d\n After swapping value of b=%d",a,b);
	
	return 0;
	
}
