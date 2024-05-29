#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter the no:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	printf("\n perfect no");
	else
	printf("\n Not");
}

