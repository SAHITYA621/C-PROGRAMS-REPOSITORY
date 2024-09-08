#include<stdio.h>

int main(){
	
	char ch='A';
	
	do{
		
		printf("%c\n" ,ch);  //PROCESS(1)
		
		ch++;
	}
	
	while(ch<='Z');        //CONDITION(2)

return 0;
}
