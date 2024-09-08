#include<stdio.h>
int main()
{

char str[50],i;
int alp=0,dig=0,other=0;
printf("ENTER YOUR STRING:");
scanf("%s",&str);

while(str[i]!='\0')
{
	if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
	{
		alp++;
	}
	
	else if(str[i]>='0' &&str[i]<='9')
	{
		dig++;
	}
	
	else
	{
		other++;
	}
	i++;
}
printf("Alphabets=%d\n",alp);
printf("Digit=%d\n",dig);
printf("Other=%d\n",other);

return 0;
}

