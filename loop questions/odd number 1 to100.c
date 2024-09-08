#include<stdio.h>

int main()
{
	int i=1,sum=0,num;
	printf("enter the value of n =");
	scanf("%d",&num);
	printf("list of sum of all natural numbers's\n");
	while(i<=num)
	{
		sum=sum+i;
	    i++;
		     
	}
	
	printf("%d" ,sum);
    return 0;
}
