#include<stdio.h>
int main()
{
	int n,c=0;
	do{
		printf("\nEnter a  number:");
		scanf("%d",&n);
		if(c==0)
		c=n;
		else{
			if(n>c && n!=0)
			c=n;
		}
	}while(n!=0);
	printf("Greatest=%d",c);
}
