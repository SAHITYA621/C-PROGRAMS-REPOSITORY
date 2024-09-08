#include<stdio.h>

int main()
{
	int arr[100],i,size,sum=0;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&size);
	printf("ENTER ARRAY ELEMENTS:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("SUM=%d\n",sum);
	
	return 0;
}
