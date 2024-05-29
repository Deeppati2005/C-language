#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int **a,**b,**c,i,j,k,m,n;
	printf("\nEnter the no of coloumns and rows of the matrices:");
	scanf("%d%d",&m,&n);
	a=(int **)malloc(m*sizeof(int));
	
	for(i=0;i<m;i++)
	{
		*(a+i)=(int *)malloc(n*sizeof(int));
	}
	printf("\nEnter the elements of the 1st matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	b=(int **)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		*(b+i)=(int *)malloc(n*sizeof(int));
	}
	printf("\nEnter the elements of the 2nd matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	
	
	c=(int **)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		*(c+i)=(int *)malloc(n*sizeof(int));
	}
	
	printf("Additon of two matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			printf("%d  ",*(*(c+i)+j));
		}
		printf("\n");
	}
	printf("Multiplication of two matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=0;
			for(k=0;k<n;k++)
			{
				*(*(c+i)+j)+=*(*(a+i)+k) * (*(*(b+k))+j);
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",*(*(c+i)+j));
		}
		printf("\n");
	}
}
