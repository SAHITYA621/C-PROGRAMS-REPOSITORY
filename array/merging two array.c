#include<stdio.h>

int main()
{
	int arr[100],b[100],c[100],size2,size1,size3,i;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size1);
	
	printf("ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<size1;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	
	printf("ELEMENT OF a[i]\n");
	
	for(i=0;i<size1;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	printf("\n ENTER SIZE OF ARRAY:\n");
	scanf("%d",&size2);
	
	printf("\n ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("\n ELEMENT OF b[i]\n");
	
	for(i=0;i<size2;i++)
	{
		printf("%d\t" ,b[i]);
	}
	//process of merging two array
	size3=size1+size2;
	
	for(i=0;i<size1;i++)
	{
		c[i]=arr[i];
	}
	for(i=0;i<size2;i++)
	{
		c[i+size1]=b[i];
	}
	
	printf("\n ELEMENT OF MERGING ARRAY\n");
	for(i=0;i<size3;i++)
	{
		printf("%d\t" ,c[i]);
	}
	
	
	return 0;
}
