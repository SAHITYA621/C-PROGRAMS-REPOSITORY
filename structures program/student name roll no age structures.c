#include<stdio.h>
struct Student{
char name[50];
int age;
int marks;	
};
int main()
{
	struct Student s1;
	s1.name[]="SAHITYA";
	s1.age=20;
	s1.marks=100;
	
	printf("STUDENT NAME:%s\n",s1.name);
	printf("STUDENT AGE:%d\n",s1.age);
	printf("MARKS:%d\n",s1.marks);
	
	return 0;
}
