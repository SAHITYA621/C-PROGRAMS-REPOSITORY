#include<stdio.h>

int main()
{
	int temp, a=5,b=6;
	
	printf("Value of a =%d\n Value of b=%d\n" , a,b);
	
	temp =a;
	a=b;
	b=temp;
	printf("After swapping value of a=%d, b=%d", a,b);
	
	return 0;
}
