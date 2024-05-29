#include<stdio.h>
void lsearch(int a[],int n,int key)
{
	int i,loc=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			loc=i;
		}
	}
	if(loc==-1)
	{
		printf("\n Not found");
	}
	else
	{
		printf("\n Found at index=%d",loc);
	}
}
int main()
{
	int a[10],n,i,key;
	printf("\n Enter the size:");
	scanf("%d",&n);
	printf("\n Enter the eliments:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the serach item:");
	scanf("%d",&key);
	lsearch(a,n,key);
}
