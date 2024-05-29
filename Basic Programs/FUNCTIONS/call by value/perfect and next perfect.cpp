#include<stdio.h>
int main()
{
	int perfect(int);
	int n,P,j,i;
	printf("\nEnter the number:");
	scanf("%d",&n);
	P=perfect(n);
	if(P==1)
	{
		printf("Perfect Number");
	}
	else
	{
		for(i=n+1;;i++)
		{
			if(perfect(i))
			{
				printf("\n Next Perfect no =%d",i);
				break;
			}
		}
	}
}

	int perfect(int x)
{
	int i,sum=0;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		sum=sum+i;
	}
	if(sum==x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
