#include<stdio.h>

int main()

{
	
	float a,b,c,d,e,per;
	
	printf("ENTER PHYSICS MARKS = ");
	scanf("%f" ,&a);
	
	printf("ENTER CHEMISTRY MARKS = ");
	scanf("%f" ,&b);
	
	printf("ENTER BIOLOGY MARKS = ");
	scanf("%f" ,&c);
	
	printf("ENTER MATHS MARKS = ");
	scanf("%f" ,&d);
	
	printf("ENTER COMPUTER MARKS = ");
	scanf("%f" ,&e);
	
	
	
	
	per = (a+b+c+d+e)/500*100;
	
	printf("%.2f\n",per);
	
	if(per>=90)
	{
		
		printf("GRADE A");
		
	}
	
	else if(per>=80)
		{
		
		printf("GRADE B");
		
	}
	
	
	else if(per>=70)
		{
		
		printf("GRADE C");
		
	}
	
	
	else if(per>=60)
		
		{
		
		printf("GRADE D");
		
	}
	
	
	else if(per>=50)
		{
		
		printf("GRADE E");
		
	}
	
	
	else if(per>=40)
		
		{
		
		printf("GRADE F");
		
	}
	
	
		else 
		{
		
		printf("FAIL");
		
	}
	
	return 0;
	
}
