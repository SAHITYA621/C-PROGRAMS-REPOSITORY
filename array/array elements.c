//write a c program to print no of elements in an array
#include<stdio.h>

int main()
{

int a[100],i,n;
printf("ENTER THE SIZE OF ARRAY= ");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}	
	for(i=0;i<n;i++)
{
	printf("ARRAY ELEMENTS a[%d]=%d\n",i,a[i]);
	
	}	
	return 0;
}
