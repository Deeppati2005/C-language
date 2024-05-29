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
	int min,max,i;
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i]; 
		if(a[i]<min)
		min=a[i];
	}
	
		a[n-1]=max;
		a[0]=min;
	
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
