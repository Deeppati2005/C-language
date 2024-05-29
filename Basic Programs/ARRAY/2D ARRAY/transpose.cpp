#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,i,j;
	printf("\nEnter the no of rows and coloumns of the matrix:");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	printf("Transpose Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
