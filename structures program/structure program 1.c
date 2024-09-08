#include<stdio.h>
struct Mystructure
{
	int myNum;
	char myletter;
};
int main()
{
	struct Mystructure s1;
	s1.myNum=13;
	s1.myletter='B';
	printf("MY number:%d\n",s1.myNum);
	printf("MY letter:%c\n",s1.myletter);
	
	return 0;
}
