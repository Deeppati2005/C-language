#include<stdio.h>
int main()
{
	int x,b,y,count=0,c;
	printf("\nEnter the x:");
	scanf("%d",&x);
	for(b=2;b>0;b++)
	{
		c=0;
		for(y=2;y<b;y++)
		{
			if(b%y==0)
			c=1;
		}
		if(c==0)
		{
			count++;
		}
		if(count==x)
		{
			printf("%d",b);
		}
	}
}

