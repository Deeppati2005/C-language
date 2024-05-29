#include<stdio.h>
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
void sum(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
}
int main()
{
	int a[10],b[10],s[10],n;
	printf("\nEnter the size of the arrays:");
	scanf("%d",&n);
	printf("\nEnter the elements of the 1st Array:\n");
	input(a,n);
	printf("\nEnter the elements of the 2nd Array:\n");
	input(b,n);
	sum(a,b,s,n);
	printf("\n First Array :\n");
	output(a,n);
	printf("\n Second Array :\n");
	output(b,n);
	printf("\n Sum of the two Arrays :\n");
	output(s,n);		
}
