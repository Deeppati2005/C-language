#include<stdio.h>
int main()
{
	int lcm(int,int);
	int a,b,L;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	L=lcm(a,b);
	printf("LCM=%d",L);

}
int lcm(int x,int y)
{
	int i,p,m,q;
	m=x*y;
	for(i=1;i<=x&&i<=y;i++)
	{
		if(x%i==0&&y%i==0)
		p=i;
	}
	q=m/p;
	return q;
}
