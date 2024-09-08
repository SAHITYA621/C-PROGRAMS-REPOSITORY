#include<stdio.h>
int main(){
	
	int amount,n500,n100,n50,n20,n10,n5,n2,n1;
	n500=n100=n50=n20=n10=n5=n2=n1=0;
	
	printf("ENTER AMOUNT:");
	scanf("%d",&amount);
	if(amount>=500)
	{
		n500 =amount/500;
		amount=amount-n500*500;
	}
	
	if(amount>=100)
	{
		n100=amount/100;
		amount =amount -n100*100;
	}
	if(amount>=50) 
	{
		n50=amount/50;
		amount =amount -n50*50;
	}
	
	if(amount>=10)
	{
		n10= amount/10;
		amount=amount -n10*10;
	}
	if(amount>=5)
	{
		n5= amount/5;
		amount =amount-n5*5;
	}
	if (amount>=2)
	{
		
		n2 = amount/2;
		amount = amount -n2*2;
	}
	if (amount>=1)
	{
		n1= amount;
	}
	
	printf("TOTAL NO OF NOTES =\n");
	printf("500=%d\n",n500);
	printf("100=%d\n",n100);
	printf("50=%d\n",n50);
	printf("20=%d\n",n20);
	printf("10=%d\n",n10);
	printf("5=%d\n",n5);
	printf("2=%d\n",n2);
	printf("1=%d\n",n1);
	
	return 0;
}
