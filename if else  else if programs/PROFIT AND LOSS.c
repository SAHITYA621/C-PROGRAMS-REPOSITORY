#include<stdio.h>

int main(){
	
	int SP,CP,a;
	
	printf("ENTER SELLING PRICE = \n");
	scanf("%d",&SP);
	printf("ENTER COST PRICE = ");
	scanf("%d",&CP);
	
	
	
	if(SP>CP)
	{
		
		a=SP-CP;
		
		printf("PROFIT");
	}
	else if(CP>SP)
	{
		
		a=CP-SP;
		
		printf("LOSS");
	}
	else
	{
		printf("no profit no loss");
	}
	return 0;
	
	
}
