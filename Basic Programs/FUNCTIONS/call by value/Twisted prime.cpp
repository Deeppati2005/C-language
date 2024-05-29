#include<stdio.h>
int main()
{
	int prime(int);
	int rev(int);
	int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	if(prime(n))
	{
		if(prime(rev(n)))
		{
			printf("\nTwisted prime");
		}
		else
		{
			printf("\nThe number is prime but not twisted");
		}
	}
		else
		{
			printf("\n The given number is not prime");
		}
	}
int rev(int n)
{
	int i,a,r=0;
	for(i=n;i>0;i=i/10)
	{
		a=i%10;
		r=r*10+a;
	}
	return r;
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
