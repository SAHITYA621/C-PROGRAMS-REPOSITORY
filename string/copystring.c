#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[50],str2[50];
	printf("ENTER ANY STRING:");
	scanf("%s" ,&str);
	
	strcpy(str2,str);
	printf("FIRST STRING =%s\n" ,str);
	
	printf("SECOND STRING:%s\n" ,str);
	return 0;
}
