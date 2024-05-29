#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int c[5]={10,12,5,6,2};
	int *p[3],i,j;
	p[0]=a;
	p[1]=b;
	p[2]=c;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
