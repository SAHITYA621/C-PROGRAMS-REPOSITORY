#include<stdio.h>

int main()
{
	int size,i,arr[100],pos;
	
	printf("ENTER SIZE OF ARRAY =");
	scanf("%d" ,&size);
	
	printf("ENTER ARRAY ELEMENTS =");
	
	for(i=0;i<size;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	printf("ENTER THE ELEMENT POSITION TO DELETE:");
	scanf("%d" ,&pos);
	
	if(pos<0|| pos>size)
	{
		printf("INVALID POSITION");
	}
	
	else
	{
		for(i=pos-1;i<size-1;i++)
		{
			arr[i] =arr[i+1];
		}
		size--;
		printf("/n ELEMENT OF ARRAY AFTER DELETION \n");
		
		for(i=0;i<size;i++)
		{
			printf("%d\t" ,arr[i]);
		}
	}
	 
	return 0;
}
