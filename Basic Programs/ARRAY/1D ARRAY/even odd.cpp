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

int arrange(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(n%2==0)
			return 1;
	}
	return 0;
}
int main()
{
	int a[10],n,i,j=0,x,k=0;
	int b[10],c[10];

	for(i=0;i<10;i++)
	{
		x=rand()%90+10;
		a[i]=x;
	}
	for(i=0;i<10;i++)
	{
		if(arrange(a[i]))
		b[j++]=a[i];
		else
		c[k++]=a[i];
	}
	printf("\nOriginal Array:");
	show(a,10);
	printf("\nEven Array:%d\n",j);
	show(b,j);
	printf("\n Odd Array:%d\n",k);
	show(c,k);
}
