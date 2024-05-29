#include<stdio.h>
int main()
{
	int Leap(int);
	int y,Y;
	printf("\nEnter the year:");
	scanf("%d",&y);
	Y=Leap(y);
	if(Y==1)
	{
		printf("It is a Leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
}
int Leap(int y)
{
	if(y%4==0&&y%100!=0||y%400==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
