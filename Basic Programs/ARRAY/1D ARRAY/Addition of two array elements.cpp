#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,n;
	printf("\nEnter the size of the arrays:");
	scanf("%d",&n);
	printf("\nEnter the elements of the 1st Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements of the 2nd Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Sum of two array elements are:\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}
}
