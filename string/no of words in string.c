#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int i,words;
	
	printf("ENTER ANY STRING:");
	gets(str);
	
	i=0;
	words=1;
	while(str[i] != '\0')
	{
		if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
		{
			words++;
		}
		i++;
	}
	
	printf("TOTAL NO OF WORDS=%d" ,words);
	
	return 0;
}
