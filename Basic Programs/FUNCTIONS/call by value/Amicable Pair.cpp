#include<stdio.h>
int main()
{
	int sum(int);
	int a,b;
	printf("\nEnter the two numbers:");
	scanf("%d%d",&a,&b);
	if(sum(a)==b&&sum(b)==a)
	{
		printf("An Amicable pair");
	}
	else
	{
		printf("Not an Amicable pair");
	}
}
int sum(int x)
{
	int s=0,i;
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		{
			s=s+i;
		}
	}
	return s;
}
