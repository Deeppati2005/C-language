#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter no of lines:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%2c",'*');
			}
			else
			{
				printf("%2c",'#');
			}
		}
		printf("\n");
	}

}
