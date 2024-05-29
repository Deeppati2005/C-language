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
		int i;
		for(i=0;i<n;i++)
		{
			a[i]=rand()%900+100;
		}
}
int buzz(int n)
{ 	
	int i;
	if(n%7==0||n%10==7)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int a[1000],n=10,i;
	printf("\nOriginal Array:");
	input(a,n);
	show(a,n);
	printf("\nBuzz numbers:");
	for(i=0;i<n;i++)
	{
		if(buzz(a[i]))
		printf("%4d",a[i]);
	}
}
