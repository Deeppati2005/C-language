#include<stdio.h>

void show(int a[][10],int m,int n)
{
	int i,j;
	printf("\nUpper Triangular:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>i)
			{
				printf("%5d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\nLower Triangular:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%5d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		
	}
}

int main()
{
	int a[10][10],i,j,m,n;
	printf("\nEnter the size of the matrix:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("original matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	show(a,m,n);
}
