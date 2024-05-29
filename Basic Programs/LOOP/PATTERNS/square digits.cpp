#include<stdio.h>
int main()
{
	int i,j,c=5,r=5;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf("%d",i);
		}
		for(j=i;j<=c;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
