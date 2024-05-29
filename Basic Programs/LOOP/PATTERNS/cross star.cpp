#include<stdio.h>
int main()
{
	int i,j,k=0;
	for(i=1;i<=10;i++)
	{
		if(i>=1&&i<=5)
		{
			k++;
		}
		else if(i==6)
		{
			k==5;
		}
		else 
		{ 
			k--; 
		}
		for(j=1;j<=10;j++)
		{ 
			if(j<=k||j>10-k)
			printf("* ");
			else 
			printf("  ");
		}
		printf("\n");
	}
}
