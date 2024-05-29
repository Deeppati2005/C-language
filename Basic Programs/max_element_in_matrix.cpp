#include<stdio.h>
int main()
{
	int max,i,j,n,m[n][n];
	printf("\n Enter the value of n:");
	scanf("%d%d",&n,&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	max=m[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m[i][j]>max)
			{
				max=m[i][j];
			}
		}
	}
	printf("\n Max=%d",max);
}

