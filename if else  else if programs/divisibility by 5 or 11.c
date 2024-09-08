#include<stdio.h>

int main()
{
	
	int a;
	
	printf("Number a=");
	scanf("%d",&a);
	
	
	if(a%5==0){
		
		printf("NUMBER IS DIVISIBLE BY 5");
	}
	
	else if(a%11==0){
		
		printf("NUMBER IS DIVISIBLE BY 11");
	}
	
	else{
		printf("NUMBER IS NOT DIVISIBLE BY 5 AND 11");
	}
	
	return 0;
}
