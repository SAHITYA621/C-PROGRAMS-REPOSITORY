#include<stdio.h>

int main()
{
	int a =5,b=6;
	
	printf("Value of a =%d\n Value of b=%d\n", a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping value of a=%d\n After swapping value of b=%d" ,a,b);
	
	return 0;
}
