#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=11;i++)
	{
		printf("%d AM\t",i);
	}
	printf("\n\n");
	printf("%d NOON",12);
	printf("\n\n");
	for(j=13;j<=23;j++)
	{
		printf("%d PM\t",j);
	}
	printf("\n\n");
	printf("%d MIDNIGHT",24);
}
