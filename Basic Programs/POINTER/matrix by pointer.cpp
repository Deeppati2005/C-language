#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int b[3]={2,3,4};
	int c[3]={2,3,4};
	int *p[3],i,j;
	p[0]=a;
	p[1]=b;
	p[2]=c;
	printf("Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

}
