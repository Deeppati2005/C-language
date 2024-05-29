#include<stdio.h>
int main()
{
	int hcf(int,int);
	int a,b,HCF;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	HCF=hcf(a,b);
	printf("HCF=%d",HCF);

}
int hcf(int x,int y)
{
	int i,p;
	for(i=1;i<=x&&i<=y;i++)
	{
		if(x%i==0&&y%i==0)
		p=i;
	}
	return p;
}
