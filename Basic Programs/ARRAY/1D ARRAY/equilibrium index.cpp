#include<stdio.h>
int main()
{
	int a[50],i,j,k,n,lsum=0,rsum=0,p=0;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		lsum=0;
		rsum=0;
		for(j=0;j<i;j++)
		{
			lsum=lsum+a[j];
		}
		for(k=i+1;k<n;k++)
		{
			rsum+=a[k];
		}
		printf("lsum=%d\n",lsum);
		printf("rsum=%d\n",rsum);
		if(lsum==rsum)
		{
			p=i;
			break;
		}
	}
	if(p==0)
	{
		printf("No equilibrium index");
	}
	else
	{
		printf("Equilibrium index is at %d",p);
	}
}
