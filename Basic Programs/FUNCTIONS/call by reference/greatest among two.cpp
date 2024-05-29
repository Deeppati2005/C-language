#include<stdio.h>
int main()
{
	void greatest(int,int,int &);
	int a,b,g;
	printf("\nEnter the numbers:");
	scanf("%d%d",&a,&b);
	greatest(a,b,g);
	printf("Greatest=%d",g);
}
void greatest(int x,int y,int &z)
{
	z=x>y?x:y;
}
