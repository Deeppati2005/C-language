#include<stdio.h>
int main()
{
	int lcm(int,int,int);
	int a,b,c,L;
	printf("\nEnter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	L=lcm(a,b,c);
	printf("Lowest commonn multiple=%d",L);

}
int lcm(int x,int y,int z)
{
	int i,p,m,q,hcf;
	m=x*y*z;
	for(i=1;i<=x&&i<=y&&i<=z;i++)
	{
		if(x%i==0&&y%i==0&&z%i==0)
		p=i;
		
	}
	q=m/p;
	return q;
}
