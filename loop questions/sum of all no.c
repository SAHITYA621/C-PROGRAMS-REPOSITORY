#include<stdio.h>

int main()

{
	
	int num,i=1,sum=0;
	
	printf("ENTER THE NUMBER=");
	scanf("%d" ,&num);
	printf("SUM OF NUMBERS BETWEEN 1 TO N\n");
		while(i<=num)
	{
			if(i%2==0)
			sum=sum+i;
			 i++;
		}
	printf("%d\n" ,sum);

	
	
	return 0;
}
