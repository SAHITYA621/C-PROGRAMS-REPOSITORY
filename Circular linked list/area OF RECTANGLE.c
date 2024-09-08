#include<stdio.h>

int main()
{
	int *ptr1,*ptr2,num1,num2,area=0;
	
	ptr1=&num1;
	ptr2=&num2;
	
	printf("ENTER LENGTH AND BREADTH OF RECTANGLE:");
	scanf("%d%d" ,ptr1,ptr2);
	
	area=*ptr1 * *ptr2;
	
	printf("AREA OF RECTANGLE:%d\n" ,area);
	
	return 0;
	
	
}
