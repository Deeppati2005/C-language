#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,*c,n,i,sum=0;
	printf("\nEnter the size:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	b=(int *)calloc(n,sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}
	c=(int *)calloc(n,sizeof(int));
	printf("Sum of two 1D array is:");
	for(i=0;i<n;i++)
	{
		*(c+i)=*(a+i)+*(b+i);
		printf("%d  ",*(c+i));	
	}
}
