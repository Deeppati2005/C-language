#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("\nEnter the no of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=1;
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",l);
			l=l+1;
		}
		printf("\n");
	}
}
