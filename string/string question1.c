#include<stdio.h>

int main()
{
	char str[]="SAHITYA";//datatype char is used for variable
	printf("%s\n" ,str);//%s is used for string
	
	int l=0;
	l=strlen(str);
	printf("LENGTH OF A STRING IS %d",l);
	return 0;
}
