#include<stdio.h>

	void diagonal(int a[][10],int n)
	{
		int i,j;
		printf("Major Diagonal:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
		printf("Minor Diagonal:\n");
		for(i=0;i<n;i++)
		{
				printf("%d\t",a[i][n-i-1]);
		}
		
	}
	
int main()
{
	int a[10][10],n,i,j;
	printf("\nEnter the size of the matrix:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	diagonal(a,n);
}

