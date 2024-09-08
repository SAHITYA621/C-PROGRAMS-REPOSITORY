#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,num1,num2,ans=0;
	
	ptr1=&num1;
	ptr2=&num2;
	
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",ptr1,ptr2);
	
	ans=*ptr1 * *ptr2;
	
	printf("PRODUCT:%d",ans);
	
	return 0;	
}
