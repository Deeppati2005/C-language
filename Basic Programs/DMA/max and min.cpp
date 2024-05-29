#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,max,min;
	printf("\nEnter the size:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	max=*(a+0);
	min=*(a+0);
	for(i=1;i<n;i++)
	{
		if(*(a+i)>max)
		{
			max=*(a+i);
		}	
	}
	printf("Max=%d",max);
	for(i=1;i<n;i++)
	{
		if(*(a+i)<min)
		{
			min=*(a+i);
		}
	}
	printf("\nMin=%d",min);
}
