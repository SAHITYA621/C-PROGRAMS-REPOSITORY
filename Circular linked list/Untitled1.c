//product of array using pointers
#include<stdio.h>
int main()
{
	int arr[100],i,size,product=1;
	int *ptr1=arr;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&size);
	printf("ENTER ARRAY ELEMENTS:");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr1);
		ptr1++;
	}
	ptr1=arr;
	for(i=0;i<size;i++)
	{
		product*= *ptr1;
		ptr1++;
	}
	printf("PRODUCT:%d",product);
	return 0;
}
