#include<stdio.h>
int main()
{
	int a[10],n,i,max,min;
	printf("\n Enter the size :");
	scanf("%d",&n);
	printf("\n Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];		
	}
	printf("\n MAX=%d,MIN=%d",max,min);
}
