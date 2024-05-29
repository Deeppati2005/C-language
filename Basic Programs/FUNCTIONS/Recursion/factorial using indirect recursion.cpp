#include<stdio.h>
int main()
{
	int fun1(int);
	int fun2(int);
	int a,f;
	printf("\nEnter the number:");
	scanf("%d",&a);
	f=fun1(a);
	printf("Factorial=%d",f);
}
int fun1(int x)
{
	if(x<=1)
	return 1;
	else
	return x*fun2(x-1);
}
int fun2(int x)
{
	if(x<=1)
	return 1;
	else
	return x*fun1(x-1);
}
