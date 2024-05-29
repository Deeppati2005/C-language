#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0,product=1;
	printf("\nEnter the size:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else if(a[i]%2!=0)
		{
		product=product*a[i];
		}
	}
	printf("\nSum=%d\nProduct=%d",sum,product);
	
}
