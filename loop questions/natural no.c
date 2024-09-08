#include<stdio.h>

int main(){
	
	int i,n;
	printf("ENTER THE VALUE FOR N= ");
	scanf("%d" ,&n);
	
	i=n;
	printf("LIST OF ALL NATURAL NUMBERS IN REVERSE\n");
	
	while(i>=1)
	{
		printf("%d\n" ,i);
		
		i--;
		
	}
	
	return 0;
		
	
	
}
