#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("\nEnter the no:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Prime No");
	}
	else
	{
		printf("Not a Prime no");
	}
}
