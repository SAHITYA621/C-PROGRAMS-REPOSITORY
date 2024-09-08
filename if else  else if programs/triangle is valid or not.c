#include<stdio.h>

int main()
{
	int a ,b ,c;
	
	printf("ENTER SIDE 1 =");
	scanf("%d" ,&a);
	
	
	printf("ENTER SIDE 2=");
	scanf("%d" ,&b);
	printf("ENTER SIDE 3 =");
	scanf("%d" ,&c);
	if (a+b>c)
	{
		if(b+c>a)
		{
			if(a+c>b)
			{
				printf("TRIANGLE IS VALID");
			}
		
	
			else
			{
				
				printf("TRIANGLE IS NOT VALID");
			}
		}
			else
			{
				
				printf("TRIANGLE IS NOT VALID");
			}
		}
			else
			{
				
				printf("TRIANGLE IS NOT VALID");
			}
			
			return 0;
		}
	
	
	
	

