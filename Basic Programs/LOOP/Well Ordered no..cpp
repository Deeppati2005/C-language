#include<stdio.h>
int main()
{
	int i,j,k,l=0,n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	i=n%10;
	n=n/10;
	for(j=n;j>0;j=j/10)
	{
		k=j%10;
		if(k>i)
		{
			l++;
		}
		k=i;
	}
	if(l==0)
	{
		printf("\nWell Ordered No.");
	}
	else
	{
		printf("\nNot Well Ordered No.");
	}
}
