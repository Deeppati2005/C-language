#include<stdio.h>
void input(int a[][10],int b[][10],int n)
{
	int i,j;
	printf("\nEnter the 1st matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the 2nd matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}
void show(int a[][10],int b[][10],int n)
{
	int i,j;
	printf("1st Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("2nd matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
void product(int a[][10],int b[][10],int n)//function to multiply two matrices
{
	int c[10][10],i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("product of two 2D matrices:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int a[10][10],b[10][10],n;
	printf("\nEnter the sizes of the matrices(n X n):");
	scanf("%d",&n);
	input(a,b,n);
	show(a,b,n);
	product(a,b,n);
	
}
