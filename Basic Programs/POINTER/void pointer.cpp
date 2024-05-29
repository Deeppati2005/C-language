#include<stdio.h>
int main()
{
	int a=10;
	float b=2.5;
	char  c='A';
	void *p;
	p=&a;
	printf("%d\n",*(int *)p);
	p=&b;
	printf("%.2f\n",*(float *)p);
	p=&c;
	printf("%c\n",*(char *)p);
}
