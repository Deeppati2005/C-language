#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("\nEnter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==n||j==1||j==(2*i-1))
			{
				printf("A");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
