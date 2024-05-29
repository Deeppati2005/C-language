#include<stdio.h>
union abc{
	int a;
	float b;
	char c;
};
int main()
{
	union abc a1={65};
	printf("a=%d,b=%.2f,c=%c",a1.a,a1.b,a1.c);
}
