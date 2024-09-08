#include<stdio.h>
int multipication(int a, int b)
{
   return(a*b);
}
int main()
{
	int a,b,c;
	printf("ENTER THE VALUE OF A &B =");
	scanf("%d%d",&a,&b);
	c=multipication(a,b);
	printf(" product of two numbers=%d",c);
	return 0;
}
