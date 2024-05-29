#include<stdio.h>
int main()
{
	int n,a,sum;
	printf("\n Enter the number:");
	scanf("%d",&n);
	while(n>9)
	{
		sum=0;
		while(n)
		{
			a=n%10;
			sum=sum+a;
			n=n/10;
		}
		n=sum;
	}
	if(n==1)
	{
		printf("\n Magic number");
	}
	else
	{
		printf("\nNot a Magic number");
	}
}
