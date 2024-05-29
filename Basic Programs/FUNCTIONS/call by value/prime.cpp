#include<stdio.h>
int main()
{
	int prime(int);
	int a,P;
	printf("\nEnter the number:");
	scanf("%d",&a);
	P=prime(a);
	if(P==1)
	printf("prime");
	else
	printf("not prime");
}
int prime(int x)
{
	int y,count=0;
	for(y=2;y<=x;y++)
	{
		if(x%y==0)
		count++;
	}
	if(count==1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
