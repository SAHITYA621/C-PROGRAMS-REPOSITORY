#include<stdio.h>

int main(){
	
	int i,n,first=0,second=1,next=0;
	printf("ENTER THE INPUT:");
	scanf("%d",&n);
	printf("FIBONACCI SERIES:");
	for(i=0;i<n;i++)
	{
		
		printf("%d\n" ,next);
		next=first+second;
		first=second;
		second =next;
	}
	
	return 0;
}
