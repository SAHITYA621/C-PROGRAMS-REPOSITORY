#include<stdio.h>

int main()

{
	int temp,a,b;
	printf("Value of a =");
	scanf("%d" ,&a);
	
	printf("Value of b=");
	scanf("%d" ,&b);
	
	temp =a;
	a=b;
	b=temp;
	
	printf("After swapping value of a=%d ,b=%d," ,a,b);
	
	return 0;
	
}
