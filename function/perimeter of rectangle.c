#include<stdio.h>
int perimeter(int l,int b)
{
	return 2*(l+b);
}
int main()
{
	int l,b,ans;
	printf("ENTER VALUE OF LENGTH & BREADTH=");
	scanf("%d%d",&l,&b);
	ans=perimeter(l,b);
	printf("PERIMETER OF RECTANGLE=%d",ans);
	return 0;
}

