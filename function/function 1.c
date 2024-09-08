#include<stdio.h>
int sum(int a, int b)
{
   return(a-b);
}
int main()
{
	int a,b,c;
	printf("ENTER THE VALUE OF A &B =");
	scanf("%d%d",&a,&b);
	c=diff(a,b);
	printf("sum of two numbers=%d",c);
	return 0;
}
