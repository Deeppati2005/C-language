#include<stdio.h>
int main()
{
	int i,j,k=1,n=9;
	for(i=n;i>=4;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",'*');
		}
		for(j=1;j<=k;j++)
		{
			printf("%d*",k);
		}
		k++;
		for(j=i-1;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
