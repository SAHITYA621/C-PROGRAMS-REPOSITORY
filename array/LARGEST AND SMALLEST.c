//WAP TO FIND LARGEST AND SMALLEST NO IN AN ARRAY

#include<stdio.h>

int main()
{
	int a[100],i,n,max,min;
	
	printf("ENTER THE SIZE OF ARRAY =");
	scanf("%d" ,&n);
	
	printf("ENTER ARRAY ELEMENTS =\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d" , &a[i]);
		
	}
	max=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf("MAXIMUM VALUE OF ARRAY: %d\n" ,max);
		
		
	min=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
		printf("MINMIMUM VALUE OF ARRAY: %d" ,min);
		
		return 0;
	}
