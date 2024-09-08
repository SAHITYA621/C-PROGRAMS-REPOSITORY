#include<stdio.h>

int main(){
	int rec,per,si,eoo ;
	int h,breadth,ans=0,l,r,s,p,ra,t,num,a,b;
	
	printf("MENU:\nENTER 1 for AREA OF RETANGLE\nENTER 2 FOR PERIMETER OF SQUARE\nENTER 3 FOR SWAPPING OF TWO NO WITHOUT THIRD VARIABLE\nENTER 4 FOR SIMPLE INTEREST\nENTER EVEN OR ODD NO\n");
	scanf("%d",&r);
	switch(r)
	{
		
	case 1:
	printf("enter the value of l and b=\n");
	scanf("%d%d",&l ,&breadth);
	ans=l*breadth;
	printf("area of reactangle %d" ,ans);
	
	break;

	case 2:
		printf("enter the value of s=\n",s);
		scanf("%d" ,&s);
		ans=4*s;
		printf("%d" ,&ans);
	break;
	
	case 3:
		
	printf("Value of a=");
	scanf("%d" ,&a);
	printf("Value of b=");
	scanf("%d" ,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping value of a=%d\n After swapping value of b=%d",a,b);
	
	
case 4:

	printf("PRINCIPLE p =");
	scanf("%d" ,&p);
	
	printf("RATE r=");
	scanf("%d" ,&ra);
	
	printf("TIME t =");
	scanf("%d" ,&t);
	
	s=(p*r*t)/100;
	
	printf("SIMPLE INTEREST = %d" ,s);
	scanf("%d",&s);
	
	break;

case 5:
printf("enter the value =\n");
scanf("%d" ,&eoo);
if(num%2==0){
	printf("EVEN");
}

else{
	printf("ODD");
}
break;
}
	return 0;
}

