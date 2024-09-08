#include<stdio.h>

int main()
{
	char str[50],str2[50],i;
	printf("ENTER YOUR UPPERCASE STRING:");
	scanf("%s" ,&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z');
		{
			str[i]=str[i]+32;
		}
	}
printf("LOWERCASE LETTER:%s" ,str);

return 0;
}

