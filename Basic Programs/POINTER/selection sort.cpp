#include<stdio.h>
void selectionSorting(int*a,int n)
{
	int i,j,small,tmp;
	for(i=0;i<n;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+small))
			{
				small=j;
			}
		}
		if(small!=i)
		{
			tmp=*(a+i);
			*(a+i)=*(a+small);
			*(a+small)=tmp;
		}
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
	int a[]={15,12,97};
	selectionSorting(a,3);
	show(a,3);
}
