#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show(int a[],int n)
{
	int i,x,count=0;
	for(i=0;i<n;i++)
	{
		printf("%4d\t",a[i]);
	}
	printf("\n");
}
void input(int a[],int n)
{
	srand(time(0));
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100000;
	}
}
int frequency(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	return count;
}
int main()
{
	
	int a[100],n=100,i,count[6]={0},x;
	printf("\nThe elements are:");
	input(a,n);
	show(a,n);
	for(i=0;i<n;i++)
	{
		x=frequency(a[i]);
		count[x-1]++;
	}
	for(i=0;i<6;i++)
	{
		printf("\nDigit :%d\t Frequency:%d",i+1,count[i]);
	}
}
