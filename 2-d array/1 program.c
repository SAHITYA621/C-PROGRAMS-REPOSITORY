#include<stdio.h>
int main()
{
	int arr[100][100],i,j,n,size;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&size);
	
	printf("ENTER ARRAY ELEMENTS:");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d" ,&arr[i][j]);
		}
	}
	printf("DISPLAY TH ARRAY ELEMENTS\n");	
	return 0;
}
