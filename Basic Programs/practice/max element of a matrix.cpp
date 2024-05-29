#include<stdio.h>
void input(int a[][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int max_element(int a[][100],int n)
{
	int i,j,max;
	max=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	return max;

}
int main()
{
	int a[100][100],n;
	printf("\nEnter the no of rows and coloumns of the matrix:");
	scanf("%d",&n);
	input(a,n);
	printf("Maximum element of the matrix is %d",max_element(a,n));
	
}
