#include<stdio.h>
typedef struct complex{
	int real,img;
	
}comp;
void sum(comp a,comp b)
{
	comp c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	printf("Their sum is=%d+i%d\n",c.real,c.img);
}
void sub(comp a,comp b)
{
	comp c;
	if(a.real>=b.real&&a.img>=b.img)
	{
		c.real=a.real-b.real;
		c.img=a.img-b.img;
	}
	else
	{
		c.real=b.real-a.real;
		c.img=b.img-a.img;
	}
	printf("Their difference is=%d+i%d\n",c.real,c.img);
}
void mul(comp a,comp b)
{
	comp c;
	c.real=a.real*b.real-a.img*b.img;
	c.img=a.img*b.real+a.real*b.img;
	printf("Their product is %d+i%d\n",c.real,c.img);
}
void div(comp a,comp b)
{
	comp c;
    c.real = (a.real * b.real + a.img * b.img) / (b.real * b.real +b.img *b.img);
    c.img = (a.img*b.real-a.real*b.img) / (b.real*b.real+b.img*b.img);
    printf("Thier divison is %d+i%d\n",c.real,c.img);
}
int main()
{
	comp a,b;
	printf("\nEnter the 1st complex no:");
	scanf("%d%d",&a.real,&a.img);
	printf("\nEnter the 2nd complex no:");
	scanf("%d%d",&b.real,&b.img);
	printf("The 1st complex no:%d+i%d\n",a.real,a.img);
	printf("The 2nd complex no:%d+i%d\n",b.real,b.img);
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
