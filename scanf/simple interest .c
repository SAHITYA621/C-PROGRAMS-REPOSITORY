#include<stdio.h>

int main()
{
	int s ,p,r,t;
	
	printf("PRINCIPLE p =");
	scanf("%d" ,&p);
	
	printf("RATE r=");
	scanf("%d" ,&r);
	
	printf("TIME t =");
	scanf("%d" ,&t);
	
	s=(p*r*t)/100;
	
	printf("SIMPLE INTEREST s =%d" ,s);
	
	return 0;
}
