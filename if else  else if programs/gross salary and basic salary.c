#include<stdio.h>

int main()
{
	float b ,HRA ,DA,gross;
	
	printf("ENTER BASIC SALARY =");
	scanf("%f" ,&b);
	
	if(b<=10000)
	{
		
		DA =(b*80)/100;
		HRA =(b*20)/100;
		
	}
	
	else if(b<=20000)
	{
		
		DA=(b*90)/100;
		HRA=(b*25)/100;
	}
	
	else
	{
		DA=(b*95)/100;
		HRA=(b*30)/100;
	}
	
	gross=b+HRA+DA;
	
	printf("GROSS SALARY =%.2f",gross);
	
	return 0;
}
