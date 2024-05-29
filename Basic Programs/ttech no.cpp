#include<stdio.h>
int main()
{
	int i,n,r=0,a,j,s;
	printf("Tech Number=");
	for(i=1000;i<=9999;i++)
	{
		a=i/100;
		j=i%100;
		s=a+j;
		if(i==(s*s))
		{
			printf("%d\t",i);
		}
	}

}
