#include<stdio.h>

int area(int side)
{
	return(side*side);
}
int main()
{
	int side,ans;
	
	printf("ENTER SIDE OF SQAURE:");
	scanf("%d",&side);
	ans=area(side);
	printf("AREA OF SQUARE=%d",ans);
	
	return 0;
}
