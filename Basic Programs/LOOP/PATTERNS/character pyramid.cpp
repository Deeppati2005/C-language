#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=2*i;j>=i;j--)
		{
			printf("%2c",j+64);
		}
		printf("\n");
	}
}
