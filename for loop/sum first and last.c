#include<stdio.h>

int main()
{
	
	int sum=0,n,first,last;
	
	printf("ENTER THE FIRST DIGIT=");
	scanf("%d",&n);
	
	last=n%10;
	
	first=n;
	
	while(n>=10)
	{
		
		n=n/10;
	}
	
	first=n;
	
	sum=first+last;
	
	printf("SUM OF FIRST AND LAST DIGIT=%d\n",sum);
	
	return 0;
	
}
