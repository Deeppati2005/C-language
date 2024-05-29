#include<stdio.h>
void sort(int a[],int n)
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
		}

		if(small!=1)
		{
			tmp=a[i];
			a[i]=a[small];
			a[small]=tmp;
		}
	}
}
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}

int main()
{
	int a[10],n,i;
	printf("\nEnter the size:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore Sorting:");
	show(a,n);
	printf("\nAfter Sorting:");
	sort(a,n);
	show(a,n);
	return 0;
}

