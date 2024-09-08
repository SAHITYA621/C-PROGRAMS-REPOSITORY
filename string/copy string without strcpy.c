#include<stdio.h>

int main()
{
	char str[50],str2[50],i;
	printf("ENTER ANY STRING:");
	scanf("%s" ,&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		str2[i] =str[i];
	}
	
	str2[i]='\0';
	
	printf("FIRST STRING:%s\n" ,str);
	printf("SECOND STRING:%s\n" ,str2);
	
	return 0;
} 
