#include<stdio.h>
int main()
{
	int prime(int);
	int i,j,n,k=2;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;k++)
		{
			if(prime(k))
			{
				printf("%4d",k);
				j++;
			}
		}
		printf("\n");
	}
}
int prime(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
