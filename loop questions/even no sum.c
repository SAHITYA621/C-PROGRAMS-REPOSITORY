#include<stdio.h>

int main()

{
	
	int num,i=1;
	
	printf("ENTER THE NUMBER=");
	scanf("%d" ,&num);
	printf("MULTIPICATION TABLE OF NUMBER\n");
		while(i<=10){
		
		
	printf("%d*%d= %d\n" ,num,i,num*i);
	
	i++;
}
	return 0;
}
