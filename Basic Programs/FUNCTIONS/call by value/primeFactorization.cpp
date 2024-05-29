#include<stdio.h>
int main()
{
	void prime(int);
	int n,i;
	printf("\nEnter the number:");
	scanf("%d",&n);
	prime(n);
}
void prime(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%4d",i);
			n=n/i;
			i=1;
		}
	}
}
