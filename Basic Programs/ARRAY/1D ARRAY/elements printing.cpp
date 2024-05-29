#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size:");
	scanf("%d",&n);
	int a[n],i;
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements are:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
}
