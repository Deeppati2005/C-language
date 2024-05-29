#include<stdio.h>
int main()
{
	int a[10],n,i,max,min,max2,min2;
	printf("\n Enter the size:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	max2=min2=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max2=max;
			max=a[i];
		}
		else if(a[i]>max2&&a[i]<max)
		{
			max2=a[i];		
		}
		if(a[i]<min)
		{
			min2=min;
			min=a[i];
		}
		else if(a[i]<min2&&a[i]>min)
		{
			min2=a[i];
		}
	}
	printf("\nSecond Max=%d\nSecond Min=%d",max2,min2);
}
