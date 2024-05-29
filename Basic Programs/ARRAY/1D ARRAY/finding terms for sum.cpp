#include<stdio.h>
	void search(int a[],int n,int key)
	{
		int i,j,sum=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
			if(a[i]+a[j++]==key)
			printf("%d\n%d",a[i],a[j]);
			}
		}
	}
int main()
{
	int a[20],n,i,x,key;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number:");
	scanf("%d",&key);
	search(a,n,key);
	
}
