#include<stdio.h>
void binary_search(int a[],int n,int key)
{
	int i,flag=0,low,high,mid;
	low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			flag=1;
			printf("\nFound at the index %d",mid);
			break;
		}
		if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
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
	binary_search(a,n,key);
}
