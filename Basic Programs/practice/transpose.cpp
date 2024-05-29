#include<stdio.h>
int  main()
{
	int a[10][10],t[10][10],i,j,m,n;
	printf("\nEnter the no of rows and coloumns of a matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("Transpose matrix:\n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			printf("%d\t",t[j][i]);
		}
		printf("\n");
	}
}
