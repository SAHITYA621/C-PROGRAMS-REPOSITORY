//product of array using pointers
#include<stdio.h>
int main()
{
	int arr[100],i,size;
	int *ptr1,ans=0,product;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	printf("ENTER ARRAY ELEMENTS:");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr1);
		ptr1++;
	}
	ptr1=arr;
	for(i=0;i<size;i++)
	{
		ans= product* *ptr1;
		ptr1++;
	}
	printf("PRODUCT:%d",ans);
	return 0;
}
