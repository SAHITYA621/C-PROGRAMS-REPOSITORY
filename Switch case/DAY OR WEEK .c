#include<stdio.h>

int main(){
	
	int month;
	
	printf("ENTER THE VALUE OF BETWEEN 1 T0 12 =");
	scanf("%d" ,&month);
	
	switch(month)
	{
		case 1 :
			printf("JANUARY AND NO OF DAYS IS 31\n");
			break;
			
		case 2:
			printf("FEBURARY AND NO OF DAYS IS 28 AND NO OF DAYS IS 29\n");
			break;
			
		case 3:
			printf("MARCH AND NO OF DAYS IS 31\n");
			break;
			
		case 4:
			
			printf("APRIL AND NO OF DAYS IS 30\n");
			break;
			
		case 5:
			
		printf("MAY AND NO OF DAYS IS 31\n");
			
			break;
			
		case 6:
			
			printf("JUNE AND NO OF DAYS IS 30\n");
			
			break;
			
			case 7:
			
			printf("JULY AND NO OF DAYS IS 31\n");
			
			break;
			
			case 8:
			
			printf("AUGUST AND NO OF DAYS IS 31\n");
			
			break;
			
			case 9:
			
			printf("SEPTEMBER AND NO OF DAYS IS 30\n");
			
			break;
			
			case 10:
			
			printf("OCTOBER AND NO OF DAYS IS 31\n");
			
			break;
			
			case 11:
			
			printf("NOVEMBER AND NO OF DAYS IS 30\n");
			
			break;
			
			case 12:
			
			printf("DECEMBER AND NO OF DAYS IS 31\n");
			
			break;
			
			
			
		default:
			printf("ENTER THE CORRECT DAY VALUE\n");
		}
		
		return 0;
	}
	

