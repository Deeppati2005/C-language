#include<stdio.h>
int main()
{
	int square(int);
	int x,y,z,s;
	printf("\n Entre the value of x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	s=square(x)+square(y)+square(z);
	printf("\n Value=%d",s);
}
int square(int x)
{
	return x*x;
}

