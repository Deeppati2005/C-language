#include<stdio.h>
int main()
{
	int a[50][50],i,j,n,sum=0;
	printf("\nEnter the size and the elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("%d",sum);
}
