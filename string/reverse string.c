#include<stdio.h>
int main()
{
	char str[50],reverse[50];
	int i,strIndex,revIndex,len;
	
	printf("ENTER ANY STRING:");
	gets(str);
	
	i=0;
	while(str[i]!='\0') i++;
	
	len =i;
	
	revIndex =0;
	strIndex =len -1;
	while(strIndex>=0)
	{
		reverse[revIndex]=str[strIndex];
		
		strIndex--;
		revIndex++;
	}
	
	reverse[revIndex]='\0';
	
	printf("\nOriginal string =%s\n" ,str);
	printf("Reverse string =%s" ,reverse);
	
	return 0;
}
