//prime number array using pointer
#include<stdio.h>
int main()
{
	int arr[100],size,i,*ptr1=arr,prime;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d",&size);
	printf("ENTER ARRAY ELEMENT:");
    *ptr1=arr;
    for(i=0;i<size;i++)
    {
    	scanf("%d",&ptr1);
	}
	 for(i=0;i<size;i++)
    {	
	if(prime==0)
	{
		printf("NUMBER IS EVEN:%d\n",ptr1);
	}
	else{
		
		printf("NUMBER IS NOT PRIME:%d\n",ptr1);
	}
		ptr1++;
	}
	return 0;	
}
