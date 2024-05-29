#include<stdio.h>
struct time
{
	int h,m,s;
};
int main()
{
	struct time t1,t2,t3;
	printf("\nEnter the time:");
	scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
	printf("\nEnter the time:");
	scanf("%d%d%d",&t2.h,&t2.m,&t2.s);
	t3.h=t1.h+t2.h;
	t3.m=t1.m+t2.m;
	t3.s=t1.s+t2.s;
	t3.m+=t3.s/60;
	t3.s%=60;
	t3.h+=t3.m/60;
	t3.m%=60;
	printf("Time=%dhours.%dminutes.%dseconds",t3.h,t3.m,t3.s);
}
