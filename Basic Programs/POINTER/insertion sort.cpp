#include<stdio.h>
void insertionSorting(int*a,int n)
{
	int i,j,small,tmp;
	for(i=0;i<n;i++)
	{
		tmp=*(a+i);
		j=i-1;
		while(tmp<*(a+j)&&j>=0)
		{
			*(a+j+1)=*(a+j);
			j--;
		}
		*(a+j+1)=tmp;
	}
}
void show(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
}
int main()
{
	int a[]={10,5,4,8,6,2,1,7};
	insertionSorting(a,8);
	show(a,8);
}
