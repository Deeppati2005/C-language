#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,m,n,i,j;
	printf("\nEnter the no of coloumns & rows:");
	scanf("%d%d",&m,&n);
	a=(int**)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		*(a+i)=(int *)malloc(n*sizeof(int));
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",*(*(a+i)+j));
		}
		printf("\n");
	}
	
}
