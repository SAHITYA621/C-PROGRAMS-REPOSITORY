//C program to search an element in an array
#include<stdio.h>
int main()
{
	int i,size,arr[100],found,toSearch;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	
	printf("ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<size;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	printf("\n ENTER ELEMENT TO SEARCH: ");
	scanf("%d",&toSearch);
	found=0;
	
	for(i=0;i<size;i++)
	{
		if(arr[i] == toSearch)
		{
			found =1;
			break;
		}
	}
	if(found ==1)
	{
		printf("\n%d is  found at position %d" ,toSearch,i+1);
	}
	else
	{
		printf("\n%d is not found in the array" ,toSearch);
	}
	return 0;
}
