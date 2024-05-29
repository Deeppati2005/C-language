#include<stdio.h>
void linear_search(int a[],int n,int key)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			printf("\nFound at the index=%d",i);
		}
	}
	if(flag==0)
	printf("\nNot Found");
}
int main()
{
	int a[10],n,i,key;
	printf("\nEnter the limt:");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter search item:");
	scanf("%d",&key);
	linear_search(a,n,key);
}
