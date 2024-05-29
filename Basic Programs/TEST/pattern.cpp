#include<stdio.h>
int main()
{
	int i,j,k=1,l;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%2d",k);
		}
		k=k+2;
		printf("\n");
	}
}
