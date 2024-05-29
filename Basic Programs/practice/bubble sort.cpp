#include<stdio.h>
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void show(int a[],int n)
{
	int i;
	printf("Original Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void bubble_sort(int a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int a[50],i,n;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	input(a,n);
	show(a,n);
	bubble_sort(a,n);
	
	
	
}
