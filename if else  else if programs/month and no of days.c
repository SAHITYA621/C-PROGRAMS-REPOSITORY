#include<stdio.h>

int main(){
	
	int a;
	
	printf("ENTER MONTH NO =");
	scanf("%d" ,&a);
	
	if(a==1){
		
		printf("JANUARY AND NO OF DAYS 31");
	}
	 else if(a==2){
		
		printf("FEBURARY AND NO OF DAYS 28");
	}
	 else if(a==3){
		
		printf("MARCH AND NO OF DAYS 31");
	}
	else if(a==4){
		
		printf("APRIL AND NO OF DAYS 30");
	}
	else if(a==5){
		
		printf("MAY AND NO OF DAYS 31");
	}
	else if(a==6){
		
		printf("JUNE AND NO OF DAYS 30");
	}
	else if(a==7){
		
		printf("JULY AND NO OF DAYS 31");
	}
	else if(a==8){
		
		printf("AUGUST AND NO OF DAYS 31");
	}
	else if(a==9){
		
		printf("SEPTEMBER AND NO OF DAYS 31");
	}
	else if(a==10){
		
		printf("OCTOBER AND NO OF DAYS 31");
	}
	else if(a==11){
		
		printf("NOVEMBER AND NO OF DAYS 30");
	}
	else if(a==12){
		
		printf("DECEMBER AND NO OF DAYS 31");
	}
	
	return 0;
}
