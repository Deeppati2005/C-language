#include<stdio.h>
int main()
{
	int a[5],t,i,j;
	for(i=0;i<5;i++)
	{
		printf("\n Enter the value:");
		scanf("%d",&a[i]);
	}
	printf("\n Before sorting:");
	for(i=0;i<5;i++)
	{
		printf("%6d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n");
	printf("\n After sorting:");
	for(i=0;i<5;i++)
	{
		printf("%6d",a[i]);
	}
}

