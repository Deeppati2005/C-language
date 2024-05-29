#include<stdio.h>
struct emp
{
	int eid;
	char name[50];
	int b;
};
int main()
{
	struct emp c;
	printf("\nEnter the employee id:");
	scanf("%d",&c.eid);
	printf("\nEnter the employee name:");
	scanf("%s",&c.name);
	printf("\nEnter the employee's basic:");
	scanf("%d",&c.b);
	int d=(c.b*40)/100;
	int h=(c.b*20)/100;
	int g=c.b+d+h;
	printf("\nDA of the employee is %d/-\nHRA of the employee is %d/-\nGS of the employee is %d/-",d,h,g);
}
