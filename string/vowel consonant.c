#include<stdio.h>

int main()
{
	char str[50],i;
	int len,vow,cons;
	
	printf("ENTER ANY STRING:");
	scanf("%s" ,&str);
	
	vow=0;
	cons=0;
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if((str[i]>='a' &&str[i]<='z') ||(str[i]>='A' && str[i]<='Z'))
		{
			switch(str[i])
			{
				case'a':
				case'e':
				case'i':
				case'o':
				case'u':
				case'A':
				case'E':
				case'I':
				case'O':
				case'U':
					vow++;
					break;
					default:
						cons++;
					
				
			}
		}
	}
	
	printf("TOTAL NUMBER OF VOWEL =%d\n",vow);
	printf("TOTAL NUMBER OF CONSONANT =%d\n" ,cons);
	
	return 0;
}
