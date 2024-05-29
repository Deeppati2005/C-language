#include<stdio.h>
int main()
{
	int perfect(int);
	int a[100],i,n,b,t;
	printf("\n Enter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the eliments:");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b=perfect(n);
	if(b==perfect(a[i]))
	printf("\n Perfect no=%d",a[i]);
	else
	printf("\n Not");
	return 0;
}
int perfect(int n)
{
	int i,sum;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
