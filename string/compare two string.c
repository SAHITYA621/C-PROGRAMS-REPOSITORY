#include<stdio.h>

int main()
{
	char str[50],str2[50],res;
	printf("ENTER FIRST STRING:");
	scanf("%s",&str);
	printf("ENTER SECOND STRING:");
	scanf("%s" ,&str2);
	res=strcmp(str,str2);s
	if(res==0)
	{
		printf("BOTH STRING ARE EQUAl:");
	}
	else
	{
		printf("BOTH STRING ARE NOT EQUAL:");
	}
	return 0;
}
