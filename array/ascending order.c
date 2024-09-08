#include<stdio.h>
int main()
{
	int i,size,arr[100],j,temp;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	
	printf("ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<size;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				 temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n ELEMENT OF ARRAY IN ASCENDING ORDER\n");
	for(i=0;i<size;i++)
	{
	printf("%d\t" ,arr[i]);
}
	return 0;
}
