#include<stdio.h>
int main()
{
	int prime(int);
	int n,i,c=0;
	printf("\n Enter a No:");
	scanf("%d",&n);
	for(i=2;;i++)
	{
		if(prime(i))
		c++;
		if(c==n)
		{
			printf("\n The %dth prime no=%d",n,i);
			break;
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
