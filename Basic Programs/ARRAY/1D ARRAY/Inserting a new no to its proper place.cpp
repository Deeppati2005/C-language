#include<stdio.h>

void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%6d",a[i]);
	}
	printf("\n");
}

void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void insert(int a[],int &n,int &x)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				for(k=j;k<n;k++)
				{
					if(x>a[i]&&x<a[j])
					a[k]=x;
				}
				n++;
				j++;
			}
			if(a[i]>a[j])
			{
				for(k=j;k<n;k++)
				{
					if(x>a[k])
					a[k-1]=x;
				}
				n++;
				j++;
			}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
}

int main()
{
	int a[20],n=20,x;
	printf("\nEnter the size:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	input(a,n);
	printf("\nEnter the number:");
	scanf("%d",&x);
	printf("After sorting:");
	insert(a,n,x);
}
