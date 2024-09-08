#include<stdio.h>

int main()
{
	int a=10;
	int *p;
	p=&a;
	
	printf("VALUE OF A =%d\n" ,a);
	printf("VALUE OF A=%d\n",*p);
	printf("ADDRESS OF A=%d\n",p);
	printf("address OF A =%d\n" ,&a);
	
	return 0;
}
