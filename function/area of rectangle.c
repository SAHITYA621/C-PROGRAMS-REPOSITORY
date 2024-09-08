#include<stdio.h>

int area(int l, int b)
{
	return(l*b);
}
int main()
{
	int l,b,ans;
	printf("ENTER LENGTH AND BREADTH OF RECTANGLE:");
	scanf("%d%d",&l,&b);
	ans=area(l,b);
	printf("AREA OF RECTANGLE:%d",ans);
	return 0;
}
