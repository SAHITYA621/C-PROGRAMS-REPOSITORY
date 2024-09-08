#include<stdio.h>

int main(){
	
	char op;
	int a,b,ans=0;
	printf("ENTER THE OPERATOR:\n");
	scanf("%c" ,&op );
	printf("ENTER A AND B\n");
	switch(op){
		
		case '+':
			scanf("%d\n %d",&a,&b);
			ans=a+b;
			printf("%d" ,ans);
			break;
			
		case '-':
			scanf("%d\n %d" ,&a ,&b);
			ans=a-b;
			printf("%d" ,ans);
			break;
			
		case '*':
			
			scanf("%d\n %d" ,&a ,&b);
			ans=a*b;
			printf("%d" ,ans);
			break;
			
		case '/':
			scanf("%d\n %d" ,&a ,&b);
			ans=a/b;
			printf("%d" ,ans);
			break;
			
		case '%':
			scanf("%d\n %d" ,&a ,&b);
			ans=a%b;
			printf("%d" ,ans);
			break;
	}
	
	return 0;
}
