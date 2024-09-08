#include<stdio.h>

int main()
{
	int a;
	
	printf("ENTER NO OF DAY=");
	scanf("%d", &a);
	
	if(a==1){
		printf("SUNDAY");
	}
	else if(a==2){
		
		printf("MONDAY");
	}
	
	else if(a==3){
		
		printf("TUESDAY");
	}

	else if(a==4){
		
		printf("WEDNESDAY");
	}
	
	else if (a==5){
		
		printf("THURSDAY");
	}
	
	else if(a==6){
		
		printf("FRIDAY");
	}
	else if(a==7){
		printf("SATURDAY");
	}
	
	else{
		printf("ERROR");
	}
	
	return 0;
}
