#include<stdio.h>
void input(int a[],int n)
{
	int i;
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void show(int a[],int n)
{
	int i;
	printf("\nOriginal Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void selection_sort(int a[],int n)
{
	int i,j,small,tmp;
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[small])
			{
				small=j;
			}
			if(small!=i)
			{
				tmp=a[i];
				a[i]=a[small];
				a[small]=tmp;
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
	selection_sort(a,n);	
}
