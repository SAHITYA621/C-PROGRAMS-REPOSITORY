#include<stdio.h>

int main()
{
	char str[50] ,str2[50],i;
	
	printf("ENTER YOUR STRING:");
	scanf("%s" ,str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i] =str[i]-32;
		}
	}
	
	printf("UPPERCASE STRING: %s" ,str);
	
	return 0;
}
