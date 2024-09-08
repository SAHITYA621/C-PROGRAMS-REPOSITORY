#include<stdio.h>
int main()
{
	int a[10],n,i;
	
	printf("ENTER THE SIZE OF ARRAY =\n");
	scanf("%d" ,&n);
	
	printf("ENTER ELEMENTS OF ARRAY =\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d" ,&a[i]);
	}
	
	printf("REVERSE ORDER:\n");
	
	for(i=10;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}  
