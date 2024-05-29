#include<stdio.h>
int main()
{
	int i,j,n=15;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("\t%d",n--);
		}
	printf("\n");
	}
}
