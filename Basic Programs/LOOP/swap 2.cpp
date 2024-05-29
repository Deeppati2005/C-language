#include<stdio.h>
int main()
{
	int a,b;
	printf("\n ENter two numbers:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%db=%d",a,b);
	
}
