#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	printf("\nEnter the size:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("\nElements are:");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(a+i));
	}
}
