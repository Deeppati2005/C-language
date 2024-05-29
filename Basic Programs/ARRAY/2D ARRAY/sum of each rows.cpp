#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,sum=0;
	printf("\nEnter the no of rows and coloumns:");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	printf("\nSum of the %d row is =%d",i+1,sum);
	sum=0;
	}
}
