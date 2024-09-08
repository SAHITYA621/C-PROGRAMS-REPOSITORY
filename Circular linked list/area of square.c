#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,num1,num2,area;
	ptr1=&num1;
	ptr2=&num2;
	printf("ENTER SIDES OF SQUARE:");
	scanf("%d%d",ptr1,ptr2);
	area= *ptr1 * *ptr2;
	printf("AREA OF SQUARE:%d",area);
	return 0;
		
}
