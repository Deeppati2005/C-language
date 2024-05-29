#include<stdio.h>
#include<math.h>
int main()
{
	float p,r;
	double ci;
	int t,n;
	printf("\n Enter the value of p & r & t & n: ");
	scanf("%f%f%d%d",&p,&r,&t,&n);
	ci=pow((p*(1+(r/n))),n*t);
	printf("ci=%lf",ci);
}

