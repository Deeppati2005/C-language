#include<stdio.h>
struct student{
	char nm[40];
	int roll;
	float per;
}s;
int main() 
{
   printf("\n Enter the name:");
   gets(s.nm);
   printf("\n Enter the roll:");
   scanf("%d",&s.roll);
   printf("\n Enter the percent:");
   scanf("%f",&s.per);
   printf("\n name=%s , roll=%d , percent=%f",s.nm,s.roll,s.per);
}

