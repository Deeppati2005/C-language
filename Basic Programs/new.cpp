#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}
int prime(int n)
{
	int i;
	if(n==0 || n==1)
	return 1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a[20],b[20],c[20];
	int i,x,j=0,k=0;
	srand(time(0));
	for(i=0;i<20;i++)
	{
		x=rand()%90+10;
		a[i]=x;
	}
	for(i=0;i<20;i++)
	{
		if(prime(a[i]))
		b[j++]=a[i];
		else
		c[k++]=a[i];
	}
	printf("\n original array:\n");
	show(a,20);
	printf("\n prime array:%d\n",j);
	show(b,j);
	printf("\n composite array:%d\n",k);
	show(c,k);
}
