#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int **a,i,j,m,n,max;
	printf("\nEnter the coloumns & rows:");
	scanf("%d%d",&m,&n);
	a=(int **)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		*(a+i)=(int *)malloc(n*sizeof(int));
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(a+i)+j)=rand()%100;
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",*(*(a+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		max=*(*(a+i)+0);
		for(j=1;j<n;j++)
		{
			if(max<*(*(a+i)+j))
			{
				max=*(*(a+i)+j);
			}
		}
		printf("Maximum element of %d row is=%d\n",i+1,max);
	}
}
