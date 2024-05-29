#include<stdio.h>
int main()
{
	
	int n,a,i,c,j;
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("Digit\tFrequency");
	for(i=0;i<=9;i++)
	{
		c=0;
		for(j=n;j!=0;j=j/10)
		{
			a=j%10;
			if(a==i)
			c++;
		}
		if(c>0)
		printf("%d\t%d\n",i,c);
	}
}
