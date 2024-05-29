#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("\nEnter the no.");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%2==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}
