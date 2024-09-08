#include<stdio.h>
int main()
{
	int i,size,arr[100],insert,pos,num;
	printf("ENTER SIZE OF ARRAY:");
	scanf("%d" ,&size);
	printf("ENTER ARRAY ELEMENTS :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ENTER ELEMENT TO INSERT:");
	scanf("%d" ,&insert);
	printf("ENTER ELEMENT POSITION:");
	scanf("%d",&pos);
	if(pos>size+1||pos<=0)
	{
	 printf("INVALID POSITION");	
	}
	else
	{
	for(i=size;i>=pos;i--)	
	{
	arr[i] =arr[i-1];
}
	arr[pos-1]=insert;
	size++;
printf("ARRAY ELEMENT AFTER INSERTION:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}	
}
	return 0;
}
