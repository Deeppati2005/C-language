#include<stdio.h>
int main()
{
	int a[]={1,2,3};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);//a[i]=(a+i)=100+1=104
	}
}
