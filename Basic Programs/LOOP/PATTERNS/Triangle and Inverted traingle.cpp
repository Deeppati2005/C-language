#include<stdio.h>
int main()
{
	int i,j,n,choice;
	printf("\nEnter '1'for a Triangle and '2'for Inverted Traingle:");
	scanf("%d",&choice);
	printf("\nEnter the number:");
	scanf("%d",&n);
	switch(choice)
	{
		case 1: for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
				printf("%d",i);
				}
			printf("\n");
			}
			break;
		case 2:for(i=n;i>=1;i--)
			{
				for(j=i;j>=1;j--)
				{
					printf("%d",i);
				}
				printf("\n");
 			}
 			break;
 			default:printf("!!Wrong Input!!");
 }
	
}
