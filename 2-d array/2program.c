//MATRIX 
#include<stdio.h>
int main()
{
	int arr[100][100],i,j,size;
	printf("ENTER THE SIZE OF ARRAY");
	scanf("%d" ,&size);
	printf("ENTER ELEMENTS OF ARRAY");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d" ,&arr[i][j]);
		}
	}
		printf("\n disply matrix of a\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t" ,arr[i][j]);
	}
	printf("\n");
}
	return 0;
}
