#include<stdio.h>

int main(){
	
	int fact=1,num ,i;
	
	printf("ENTER THE FACTORIAL NUMBER =\n");
	scanf("%d" ,&num);
	
	while(i<=num){   //CONDITION LOOP
		fact =fact*i; //FORMULA
		i++;     //INCREMENT
	}
	
	printf("%d" ,fact);
		return 0;
}
