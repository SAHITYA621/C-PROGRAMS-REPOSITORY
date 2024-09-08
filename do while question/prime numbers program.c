#include<stdio.h>

int main()
{
	
	int i,n=2,prime=0;
	
	printf("ENTER THE NUMBER=");
	scanf("%d",&i);
	
	while(n<i){
		
		if(i%n==0){
			
			prime++;
		}
		
		n++;
	}
	
	if(prime==0)
	{
		
		printf("NUMBER IS EVEN");
	}
	
	else{
		
		printf("NUMBER IS NOT PRIME");
	}
	
	return 0;
}
