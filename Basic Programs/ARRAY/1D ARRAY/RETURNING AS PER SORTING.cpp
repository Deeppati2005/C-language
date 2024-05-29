#include<stdio.h>
int sort(int a[],int n)
{
	int i,x=0,y=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			x++;
		}
		else if(a[i]>a[i+1])
		{
			y++;
		}
	}
		if(x==n-1)
		{
			return 1;
		}
		else if(y==n-1)
		{
			return 0;
		}
		else 
		{
			return -1;
		}
		
}
int main()
{
	int a[10]={4,3,2,1,5,6,8,7,9};
	int i,n=10,p;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	p=sort(a,n);
	printf("\n\n%d",p);
}
