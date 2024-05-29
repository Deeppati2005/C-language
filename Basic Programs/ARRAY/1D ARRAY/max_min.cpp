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

void input(int a[],int n)
{
	srand(time(0));
	int i,max,min;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%90+10;
	}
}
void arrange(int a[],int n)
{	
	int minp,maxp,i;
	maxp=minp=0;
	int tmp;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[maxp])
		maxp=i;
		if(a[i]<a[minp])
		minp=i;
	}
	tmp=a[0];
	a[0]=a[minp];
	a[minp]=tmp;
	
	tmp=a[n-1];
	a[n-1]=a[maxp];
	a[maxp]=tmp;
	
}
int main()
{
	int a[10],n=10;
	printf("\nOriginal Array:");
	input(a,n);
	show(a,n);
	printf("\nMin and Max Array:");
	arrange(a,n);
	show(a,n);
		
}
