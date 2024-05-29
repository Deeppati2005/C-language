#include<stdio.h>

void swap(int a[][5],int n=5)
{
	int i,j,max=0,sum=0,k=0,x;
	for(i=0;i<n;i++)
	{
			x=a[0][i];
			a[0][i]=a[n-1][i];
			a[n-1][i]=x;
	}
	printf("\nSwapping 1st row with the last row:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		
	}
	
	

int main()
{
	int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{-1,23,1,4,6},{2,3,4,8,9},{10,11,-2,-3,5}},n=5,i,j;
	printf("Original Matrix:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	swap(a,n);
	
	
}
