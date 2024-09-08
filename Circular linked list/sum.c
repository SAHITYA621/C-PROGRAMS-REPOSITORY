#include<stdio.h>

int main()
{
	int *ptr1,*ptr2,sum,num1,num2;
	
	ptr1=&num1;
	ptr2=&num2;
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d" ,ptr1, ptr2);
	sum=*ptr1 + *ptr2;
	printf("SUM=%d\n" ,sum);
	return 0;
	
}
