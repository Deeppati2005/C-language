#include<stdio.h>
int main()
{
	int n,a,m=0,y=1;
	printf("\n Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		m=m+a;
		y=y*a;
		n=n/10;
	}
	if(m==y)
	{
		printf("SPY NO.");
	}
	else
	{
		printf("NOT A SPY NO.");
	}
}
