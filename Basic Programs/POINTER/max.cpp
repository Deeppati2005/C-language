#include<stdio.h>
void fmax(int *a,int n)
{
	int i,max;
	n=5;
	max=*(a+0);
	for(i=1;i<n;i++)
	{
		if(max<*(a+i))
		{
			max=*(a+i);
		}
	}
	printf("MAX=%d\n",max);
}
void fmin(int *a,int n)
{
	int i,min;
	n=5;
	min=*(a+0);
	for(i=1;i<n;i++)
	{
		if(min>*(a+i))
		{
			min=*(a+i);
		}
	}
	printf("MIN=%d",min);
}
int main()
{
	int a[]={1,2,3,4,5};
	fmax(a,5);
	fmin(a,5);
}
