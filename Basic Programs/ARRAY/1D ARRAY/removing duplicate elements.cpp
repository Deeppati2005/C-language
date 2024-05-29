#include<stdio.h>
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
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
void remove(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;

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
	int a[20],n=20,i,count;
	printf("\nEnter the size:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	input(a,n);
	printf("After Removing the duplicate elements:");
	remove(a,n);
}
