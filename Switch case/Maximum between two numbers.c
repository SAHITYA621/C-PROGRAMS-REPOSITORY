#include<stdio.h>

int main(){
	
	int num;
	
	printf("ENTER THE NUMBER =");
	scanf("%d",&num );
	
	
	switch(num%2==0){
		
		case 1:
			printf("%d is even",num);
			break;
			
		default:
			printf("%d is odd",num);
	}
	
	return 0;
	
	}

