#include<stdio.h>

int main(){
	
	int num,count=1,rem=0,sum=0;
	
	printf("ENTER THE NUMBER= ");
	scanf("%d",&num);
	for(;num!=0;)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		
	}
	
	printf("SUM OF DIGIT= %d" ,sum);
	
return 0;	
	}
	
