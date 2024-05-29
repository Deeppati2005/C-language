#include<stdio.h>
int main()
{
	int a[25],i,j,n,flag=0,count=0;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				flag++;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	printf("No of distinct elt=%d",count);
	
}
