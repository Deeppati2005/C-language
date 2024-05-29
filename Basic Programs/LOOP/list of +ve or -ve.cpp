#include<stdio.h>
int main()
{
	int n,c1=0,c2=0;
	do{
		printf("\nEnter a  number:");
		scanf("%d",&n);
		if(n>0)
		c1++;
		else if(n<0)
		c2++;
	}while(n!=0);
	printf("positive=%d negavtive=%d",c1,c2);
}
