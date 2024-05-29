#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{ 
			if(i==1||j==i||j==5)
			printf("%2d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
}
