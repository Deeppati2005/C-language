#include<stdio.h>
int main()
{
	int prime(int);
	int i;
	printf("\nThe Twin Primes are:");
	for(i=2;i<=100;i++)
	{
		if(prime(i)&&prime(i+2))
		{
			printf("\n %d\t%d",i,i+2);
		}
	}
}
int prime(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
