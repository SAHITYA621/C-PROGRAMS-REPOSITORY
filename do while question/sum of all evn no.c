#include<stdio.h>
int main()
{
	int i=1,num,sum=0;
	printf("ENTER THE NUMBER=");
	scanf("%d",&num);
	do
	{
		if(i%2==0)
		{
			printf("even number=%d\n",i);
		sum=sum+i;
	 }
	 i++;
	 }
	while(i<=num);
	printf("sum of even number =%d",sum);
	return 0;
	}
