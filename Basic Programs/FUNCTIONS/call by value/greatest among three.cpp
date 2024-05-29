#include<stdio.h>
int main()
{
	int gr(int,int,int);
	int a,b,c,G;
	printf("\nEnter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	G=gr(a,b,c);
	printf("Greatest=%d",G);
}
int gr(int x,int y,int z)
{
	int g=x>y?x>z?x:z:y>z?y:z;
	return g;
}
