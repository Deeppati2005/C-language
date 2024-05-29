#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,*c,i,n,c1=0,c2=0;
	printf("\nEnter the size:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2==0)
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	b=(int *)calloc(c1,sizeof(int));
	c=(int *)calloc(c2,sizeof(int));
	printf("\nArray of even elements:  ");
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2==0)
		{
			*(b+i)=*(a+i);
			printf("%d  ",*(b+i));
		}
	}
	printf("\nArray of odd elements:  ");
	for(i=0;i<n;i++)
	{
			if(*(a+i)%2!=0)
			{
				*(c+i)=*(a+i);
				printf("%d  ",*(c+i));
			}
	}
	
}
