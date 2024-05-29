#include<stdio.h>
int main()
{
	int amount,notes,i;
	int denomination[10]={2000,500,200,100,50,20,10,5,2,1};
	printf("\nEnter the amount of bill:");
	scanf("%d",&amount);
	printf("\nNo of Notes\tDenomination\tAmount\n");
	for(i=0;i<8;i++)
	{
		notes=amount/denomination[i];
		if(notes!=0)
		{
			amount=amount%denomination[i];
			printf("\n%d\t\tx%d\t\t=%d",notes,denomination[i],notes*denomination[i]);	
		}
	}
	
}
