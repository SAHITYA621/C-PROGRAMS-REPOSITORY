#include<stdio.h>
int main()
{
	int a[50],num,i,esum=0,osum=0;
	printf("enter the value for array size=\n");
	scanf("%d" ,&num);
	printf("enter the array element=\n");
	for(i=0;i<num;i++)
	{
		scanf("%d" ,&a[i]);
	}
	printf("array odd element list\n");
	for(i=0;i<num;i++)
	{
		if(a[i]%2==0)
		{
			esum=esum+a[i];
			
		}
		else
	{
	
			osum=osum+a[i];
		
		}
	}
	printf(" summ of even number=%d\n",esum);
	printf("sum of odd number=%d",osum);
	return 0;	
}
