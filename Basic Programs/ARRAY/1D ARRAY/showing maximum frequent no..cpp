#include<stdio.h>

void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int frequent(int a[],int n)
{
	int i,j,count1=0,count2=0,maxelement;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count1++;
			}
		}
	
		if(count2<count1)
		{
			count2=count1;
			maxelement=a[i];
		}
	}
	printf("The most frequent digit's Frequency is:%d",count2);
return 	maxelement;
}
int main()
{
	int a[20],n=20,i,count;
	printf("\nEnter the size:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	input(a,n);
	printf(" and the Digit:%d",frequent(a,n));
}
