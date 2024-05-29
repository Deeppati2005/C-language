#include<stdio.h>
int main()
{
	int i,j,k,l=0;
	for(i=9;i>=1;i=i-2)
	{
		for(j=1;j<=l;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
		l=l+1;
	}
}
