#include<stdio.h>

int perimeter(int side)
{
	return 4*(side);
}
int main()
{
	int side,ans;
	printf("ENTER VALUE OF SIDE:");
	scanf("%d",&side);
	ans=perimeter(side);
	printf("PERIMETER OF SQUARE:%d",ans);
	return 0;
}
