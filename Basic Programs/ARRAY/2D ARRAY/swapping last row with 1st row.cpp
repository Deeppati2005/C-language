#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,x,n;
	printf("\nEnter the size of the matrices:");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Oringinal Array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nAfter swapping 1st row with last row:\n");
	for(i=0;i<n;i++)
	{
			x=a[0][i];
			a[0][i]=a[m-1][i];
			a[m-1][i]=x;
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
