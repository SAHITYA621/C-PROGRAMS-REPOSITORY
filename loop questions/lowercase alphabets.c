#include<stdio.h>

int main(){
	
	int fact=1,num ,i;
	
	printf("ENTER THE FACTORIAL NUMEBR =\n");
	scanf("%d" ,&num);
	
	while(i<=num){
		fact =fact*i;
		i++;
	}
	
	printf("%d" ,fact);
		return 0;
		
	
	
}
