#include<stdio.h>
struct time{
	int hours;
	int minutes;// create the structure 
	int second;
};
int main()
{
	struct time time1,time2,result;
	printf("ENTER TIME IN HOURS MINUTE AND SECOND:\n");
	scanf("%d%d%d",&time1.hours,&time1.minutes,&time1.second);//enter user defined time minute and seconds
	
	printf("ENTER TIME IN HOURS MINUTE AND SECOND:\n");
	scanf("%d%d%d",&time2.hours,&time2.minutes,&time2.second);//enter user defined time minutes and seconds
	
	result.second=time1.second+ time2.second;//addition of time 1second+time2 seconds
	result.minutes=time1.minutes+time2.minutes+result.second/60;//addition of time 1minutes +time2 minutes+result seconds
	result.hours=time1.hours+ time2.hours+result.minutes/60;//addition of time 1hours +time2 hours+result minutes
	
	result.minutes%=60;
	result.second%=60;
	
	printf("DISPLAY THE RESULT:%02d:%02d:%02d",result.hours,result.minutes,result.second);
	
	return 0;
}
