#include<stdio.h>
int main()
{
	int i,size,arr[100],freq[100],count,j;
	
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	
	printf("ENTER ARRAY ELEMENT:");
	
	for(i=0;i<size;i++)
	{
		scanf("%d" ,&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count =1;
		
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				
				freq[j]=0;
			}
			
			
		}
		if(freq[i]!=0)
		{
			freq[i] =count;
		}
	}
	printf("\n FREQUENCY OF ALL ELEMENTS OF ARRAY\n");
	
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times \n" ,arr[i],freq[i]);
		}
	}
	return 0;
}
