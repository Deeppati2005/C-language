#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show(int x[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("%4d",x[i]);
	}
	printf("\n");
}
void input(int x[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&x[i]);
	}
}
	

void merge(int x[],int y[],int z[],int m,int n)
{
	int i,j=0,k=m+n-1;
	for(i=0;i<m;i++)
	{   
		if(x[i]%2==1) 
		z[j++]=x[i];                                                                                                                                                                   
		else
		z[k--]=x[i];
	}
		for(i=0;i<n;i++)
	{   
		if(y[i]%2==1) 
		z[j++]=y[i];                                                                                                                                                                   
		else
		z[k--]=y[i];
	}
	
}

int main()
{
	int x[10],y[10],z[20],m,n;
	printf("\nEnter the size of 1st array:");
	scanf("%d",&m);
	printf("\nEnter the size of 2nd array:");
	scanf("%d",&n);
	printf("\n 1st Array:");
	input(x,m);
	printf("\n 2nd Array:");
	input(y,n);
	printf("\nMerged Array:");
	show(x,m);
	show(y,n);
	merge(x,y,z,m,n);
	show(z,m+n);
	
}
