#include<stdio.h>
int main()
{
	int arr[100],i,size,b[100];
	printf("ENTER THE SIZE OF ARRAY:\n");
	scanf("%d" ,&size);
	printf("ENTER ARRAY ELEMENTS:\n");
	for(i=0;i<size;i++)
	{
	  scanf("%d",&arr[i]);	
	}
	printf("element of a[i]\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	//PROCESS OF COPYING ARRAY
	for(i=0;i<size;i++)
	{
	b[i]=arr[i];
	}
	printf("\n element of COPYING ARRAY b[i]\n");
	for(i=0;i<size;i++)
	{
	printf("%d\n",b[i]);
	}
	return 0;
}
