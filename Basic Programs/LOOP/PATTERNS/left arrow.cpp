#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(k==1)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(l=1;l<=9;l++)
	{
		printf("*");
	}
	printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			if(k==i)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
