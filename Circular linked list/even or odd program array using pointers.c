#include<stdio.h>
int main()
{
	int arr[100], *ptr1=arr,i,size;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d", &size);
	printf("ENTER ARRAY ELEMENTS:");
	for (i=0; i<size; i++)
	{
		scanf("%d",ptr1);
		ptr1++;
	}
	ptr1=arr;
	for (i=0; i<size; i++)
	{
	if (*ptr1%2==0)
	{
		printf("%d is EVEN\n",*ptr1);		
	}
	else
	{
		printf("%d is ODD\n",*ptr1);
	}
		ptr1++;
	}
	return 0;
}
