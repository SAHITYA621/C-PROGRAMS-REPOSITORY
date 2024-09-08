#include<stdio.h>

int main(){
	
	char ch;
	
	printf("ENTER CHARACTER= ");
	scanf("%c",&ch);
	
	if((ch =='A' && ch <='Z') || (ch =='a' && ch <='z')){
	
	printf("ALPHABET IS CHARACTER");
}
	else{
	
	printf("ALPHABET IS NOT CHARACTER");
}
	return 0;
}
