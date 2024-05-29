#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("\n Enter the number:");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
		if(n%i==0)
		{
		count++;
		}
		i++;
	}
	if(count==1)
	{
		printf("\n Prime number");
	}
	else
	{
		printf("\n not Prime number");
	}
	
}
