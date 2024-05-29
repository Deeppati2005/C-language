#include<stdio.h>
int main()
{
	int prime(int);
	int a,P,i;
	for(i=2;i<=99;i++)
	{
		if(prime(i))
		{
			printf("%d\t",i);
		}
	}

}
int prime(int x)
{
	int y,count=0;
	for(y=2;y<=x;y++)
	{
		if(x%y==0)
		count++;
	}
	if(count==1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
