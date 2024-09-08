#include<stdio.h>

int main()
{
	int *ptr1,num1,perimeter;
	ptr1=&num1;
	printf("ENTER SIDE OF SQUARE:");
	scanf("%d",ptr1);
	
	perimeter=4* *ptr1;
	
	printf("PERIMETER OF RECTANGLE:%d",perimeter);
	
	return 0;
}
