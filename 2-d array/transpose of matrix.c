#include<stdio.h>
int main()
{
	int i,j,size,arr[100][100],b[100][100];
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&size);
	printf("ENTER ARRAY ELEMENTS:\n");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	scanf("%d",&arr[i][j]);
	}
	}
	printf("DISPLAY ELEMENTS OF ARRAY:\n");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	printf("%d\t",arr[i][j]);
}
printf("\n");
}
//process of transpose of matrix
for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{
		b[j][i]=arr[i][j];
	}
}
	printf("AFTER TRANSPOSE OF MATRIX:\n");
	
	for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{
	printf("%d\t" ,b[i][j]);
	}
	printf("\n");
}
	return 0;
}
