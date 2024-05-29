#include<stdio.h>
int main()
{
	int a[50],i,j,n,max=0,c=0,x;
	printf("\nEnter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
			if(a[i]==a[j])
			{
				c++;
			}
		}
	
			if(max<c)
			{
				max=c;
				x=a[i];
			}
		
	}
	printf("max frequent digit =%d",x);
}
