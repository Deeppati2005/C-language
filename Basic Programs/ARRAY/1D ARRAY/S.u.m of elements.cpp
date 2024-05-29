#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	printf("\n Enter the size :");
	scanf("%d",&n);
	printf("\n Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("\n sum=%d",sum);
}
