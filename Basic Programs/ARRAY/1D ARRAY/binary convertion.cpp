#include<stdio.h>
void binary(int a[],int n)
{
	int i,count=0;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	n=i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
}
int main()
{
	int a[10],n;
	printf("\nEnter the decimal no:");
	scanf("%d",&n);
	printf("\nBinary Form is:");
	binary(a,n);
}
