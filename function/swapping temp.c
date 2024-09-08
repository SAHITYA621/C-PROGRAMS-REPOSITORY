#include<stdio.h>
double swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
    printf("A:%d\nB:%d",a,b);
}
int main()
{
	int a,b,ans;
	printf("ENTER VALUE OF A AND B:");
	scanf("%d%d" ,&a,&b);
	printf("\nAFTER SWAPPING:\n");
	swap(a,b);
	return 0;
}
