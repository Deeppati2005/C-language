#include<stdio.h>
int main()
{
	int max1,max2,n;
	do{
		printf("\nEnter a number:");
		scanf("%d",&n);
		if(max1==0)
		max1=n;
		else{
			if(n>max1&&n!=0)
			{
				max2=max1;
				max1=n;
			}
		else{
			if(n>max2&&n!=0)
				max2=n;
		}
	}
		}while(n!=0);
	
	printf("second greatest=%d",max2);
}
