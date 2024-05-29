#include<stdio.h>
int main()
{
	int a[100],target[100];
	int i=0,j,sum=0,flag=0,k,n,tmp=0;
	printf("\nEnter the sizes of the arrays:");
	scanf("%d",&n);
	printf("\nEnter the 1st array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the 2nd array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&target[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(target[j]>target[j+1])
			{
				tmp=target[j];
				target[j]=target[j+1];
				target[j+1]=tmp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
		a[i]=sum;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==target[i])
		{
			flag=0;
		}
		else
		{
			flag++;
		}
	}
	if(flag==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
}
