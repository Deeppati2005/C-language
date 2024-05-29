#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2c",j+64);
		}
		for(k=5;k>=1;k--)
		{
			printf("%2c",k+64);
		}
		printf("\n");
	}
	
}
