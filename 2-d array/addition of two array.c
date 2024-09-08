#include<stdio.h>
int main()
{
	int i,j,arr[100][100],b[100][100],c[100][100],size;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	
	printf("ENTER ARRAY ELEMENTS:\n");
	
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
		scanf("%d",&arr[i][j]);
	}
		}
		printf("\n value of first array\n");
		for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	printf("%d\t" ,arr[i][j]);
}
printf("\n");
}
printf("\n Enter the value of second array\n");
for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
		scanf("%d",&b[i][j]);
	}
		}
		printf("\n Display the second array\n");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{	
		printf("%d\t",b[i][j]);
    }
    printf("\n");
}


//process of adding two array
for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
		c[i][j]=arr[i][j]+b[i][j];
	}
		}
	printf("DISPLAY THE SUM OF TWO ARRAY\n");
		for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
	{
	printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;	
}
