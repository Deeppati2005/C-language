#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,sum;
	printf("\nEnter the size of the matrix:");
	scanf("%d",&n);
	printf("\nEnter the elements");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Diagonal Elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d\t",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nRow wise sum:\n");
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
		printf("%d row's sum is %d\n",i+1,sum);
	}
	printf("\nColoumn wise sum:\n");
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j][i];
		}
		printf("%d Coloumn's sum is %d\n",i+1,sum);
	}
}
