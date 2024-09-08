
#include<stdio.h>
int main()
{
	int arr[100],*ptr1,i,n,sum=0;
	ptr1=arr;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr1);
		
		ptr1++;
	}
	ptr1=arr;
	for(i=0;i<n;i++)
	{
			sum=sum+*ptr1;
		ptr1++;
	}
	printf("sum of array=%d",sum);
	return 0;
}
