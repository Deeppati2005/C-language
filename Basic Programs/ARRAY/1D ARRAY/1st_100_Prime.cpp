#include<stdio.h>
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
	int i,j,a[100];
	for(i=0,j=2;i<100;j++)
	{
		if (prime(j))
		{
			a[i]=j;
			i++;
		}
	}
	printf("\n1st 100 Prime Nos are:");	
	show(a,100);
}
