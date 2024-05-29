#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<=5;i++)
	{
		for(j=65;j<=69-i;j++)
			printf("%2c",j);
		for(k=68;k>=65;k--)
		{
			if(k<j)
			printf("%2c",k);
			else
			printf("    ");
		}
		printf("\n");
	}
}
