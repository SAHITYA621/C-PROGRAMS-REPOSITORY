#include<stdio.h>
int main()
{
	int year;
	printf("YEAR IS :: ");
	
	scanf("%d" ,&year);
	
	if (year%4==0)
	{
		printf("LEAP YEAR");
	}
	
	else{
		printf("NOT LEAP YEAR");
	}
	return 0;
}
