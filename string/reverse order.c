#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],reverse[100];
	int len,i,index,wordstart,wordEnd;
	
	printf("ENTER ANY STRING:");
	gets(str);
	
	len =strlen(str);
	index =0;
	
	wordstart =len -1;
	wordEnd =len-1;
	
	while(wordstart >0)
	{
		if(str[wordstart>0])
		{
			i= wordstart +1;
			while(i<= wordEnd)
			{
				reverse[index] =str[i];
				i++;
				index++;
			}
			reverse[index++]=' ';
			wordEnd =wordstart -1;
		}
		
		wordstart--;
	}
	
	for(i=0;i<=wordEnd;i++)
	{
		reverse[index]=str[i];
		index;
	}
	
	reverse[index] ='\0';
	
	printf("Original string \n%s\n\n" ,str);
	printf("REVERSE ORDER WORDS \n%s" ,reverse);
	
	return 0;
}
