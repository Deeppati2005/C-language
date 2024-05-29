#include<stdio.h>
int main()
{
	int a[10],b[10],i,n,j,rem,rev,k;
	printf("\n Enter size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element for [%d] position:",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		rev=0;
		for(j=a[i];j>0;j=j/10)
		{
			rev=0;
			rem=j%10;
			rev=(rev*10)+rem;
		}
			printf("%d",rev);
		
	}

}
