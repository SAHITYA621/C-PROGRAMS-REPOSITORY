//print array elements using pointers

#include<stdio.h>

int main()
{
	int arr[100],*ptr1=arr,i,n;
	
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
			printf("ELEMENTS OF ARRAY:%d\n",*ptr1);
	ptr1++;
	}
	return 0;
}
