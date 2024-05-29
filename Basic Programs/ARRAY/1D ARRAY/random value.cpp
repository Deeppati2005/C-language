#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int a[20],n,i,j=0,k=0,x;
	int b[20],c[20];
	 for(i=0;i<20;i++)
	{
		x=rand()%90+10;//
		a[i]=x;
	}
	for(i=0;i<20;i++)
	{
		if(prime(a[i]))
		b[j++]=a[i];//if a[i] is prime then only j will be incremented
		else
		c[k++]=a[i];//otherwise k will be incremented
	}
	printf("\n Original Array :");
	show(a,20);
	printf("\n Prime Array :%d\n",j);
	show(b,j);
	printf("\n Composite Array :%d\n",k);
	show(c,k);	
}
