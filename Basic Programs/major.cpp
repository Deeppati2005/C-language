#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int m,n,i,j;
	printf("\n Enter the value of m & n:");
	scanf("%d%d",&m,&n);
	printf("\n Enter the eliments:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Major:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			printf("%4d",a[i][j]);
		}
	}
	printf("\n Minor:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			printf("%4d",a[i][j]);
		}
	}
}

