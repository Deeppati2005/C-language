#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}
	}
	
}
