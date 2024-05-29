#include<stdio.h>
int main()
{
	int a[100],i,j,k,count=0;
	for(i=0,j=2;i<100;j++)
	{
		count=0;
		for(k=2;k<=j/2;k++)
		{
			if(j%k==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			a[i]=j;
			i++;
		}
	}
	printf("1st 100 Prime Nos are:\t");
	for(i=0;i<100;i++)
	{
		printf("%d\t",a[i]);
	}
}
