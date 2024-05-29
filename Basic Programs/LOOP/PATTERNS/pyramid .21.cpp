#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<=5;i++)
	{
		for(j=65;j<=69-i;j++)
			printf("%2c",j);
		for(k=1;k<=i*2-1;k++)
			printf("  ");
		for(l=69-i;l>=65;l--)
			if(l!=69)
			printf("%2c",l);
		printf("\n");
	}
}
