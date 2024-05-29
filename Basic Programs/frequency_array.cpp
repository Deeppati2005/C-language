#include<stdio.h>
int main()
{
	int a[100],i,n,c=0,t;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the eliment to find:");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			c++;
		}
	}
	printf("\n frequency=%d",c);
}

