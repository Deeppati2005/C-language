#include<stdio.h>
int main()
{
	int i,j,k,l,n,a;
	printf("\nEnter the no of lines:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		a=i-1;
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(l=a;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	}
