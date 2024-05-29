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

void arrange(int a[],int n)
{
	int i,k=0;
	int tmp[100];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		tmp[k++]=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		tmp[k++]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=tmp[i];
	}
}
int main()
{
	int a[30],n,i,j=0,x,k=0;

	for(i=0;i<30;i++)
	{
		x=rand()%90+10;
		a[i]=x;
	}
	printf("\nOriginal Array:");
	show(a,30);
	printf("\nEven After Odd:");
	arrange(a,30);
	show(a,30);
}
