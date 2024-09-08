#include<stdio.h>


int main()
{
	
	int num,orignalnumber,remainder ,result=0;
	
	printf("ENTER INPUT = ");
	scanf("%d" ,&num);
	
	orignalnumber=num;
	
	while(orignalnumber!=0){
		
		remainder =orignalnumber% 10;
		
		result += remainder * remainder *remainder;
		
		orignalnumber/=10;
	}
	if(result == num){
	
	printf("%d is an Amstrong number." ,num);
	
}
	
	else
	printf("%d is not an Amstrong number" ,num);
	
	return 0;
}
