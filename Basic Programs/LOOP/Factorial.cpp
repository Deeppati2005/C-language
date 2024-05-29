#include<stdio.h>
int main()
{
	int i=1,n,f=1;
	printf("\nEnter the number:");
	scanf("%d",&n);
	do{
		f=f*i;
		i++;
	}while(i<=n);
	printf("Factorial=%d",f);
}
