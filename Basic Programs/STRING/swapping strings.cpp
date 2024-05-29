#include<stdio.h>
#include<string.h>
int  main()
{
	char a[50],b[50],c[50];
	printf("\nEnter the string:");
	gets(a);
	printf("\nEnter the string:");
	gets(b);
	printf("Before swap:\na=%s\nb=%s\n",a,b);
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("\nAfter swap:\n");
	printf("a=");
	puts(a);
	printf("b=");
	puts(b);
	
	
}
