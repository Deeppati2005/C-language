#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	
};
int main()
{
	struct student s1={1,"Amit",65.45f};
	printf("\nRoll=%d",s1.roll);
	printf("\nname=%s",s1.name);
	printf("\nmarks=%.2f ",s1.marks);
	
}
