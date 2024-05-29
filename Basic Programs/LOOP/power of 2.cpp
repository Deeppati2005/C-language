#include<stdio.h>
int main()
{
	int n,a,flag=0;
	printf("\nEnter the no:");
	scanf("%d",&n);
	while(n!=1)
	{
		a=n%2;
		if(a!=0)
		{
			flag=1;
			break;
		}
		n=n/2;
	}
	if(flag==0)
	{
		printf("POWER OF 2");
	}
	else
	{
		printf("NOT THE POWER OF 2");
	}
}
