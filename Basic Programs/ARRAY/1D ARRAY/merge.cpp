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
	int i,x;
	srand(time(0));
	for(i=0;i<n;i++)
	{
		x=rand()%90+10;
		a[i]=x;
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
void merge(int a[],int b[],int c[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}
}

int main()
{
	int a[100],b[100],s[200],m,n;
	printf("\n Enter the size of first array :");
	scanf("%d",&n);
	printf("\n Enter the size of second array :");
	scanf("%d",&m);
	printf("\n1st array:");
	input(a,n);
	show(a,n);
	printf("\n2nd array:");
	input(b,m);
	show(b,m);
	printf("\n Merged Array:");	
	merge(a,b,s,n,m);
	show(s,n+m);	
}



