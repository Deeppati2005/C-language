#include<stdio.h>

void swap(int a[][5],int n=5)
{
	int i,j,max=0,sum=0,k=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		if(sum>max)
		{
			max=sum;
			k=i;
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",a[k][j]);
	}
	printf("\nSum of the row=%d",max);
}
int main()
{
	int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{-1,23,1,4,6},{2,3,4,8,9},{10,11,-2,-3,5}},n=5,i,j;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nRow which has max sum:");
	swap(a,n);
	
	
}
