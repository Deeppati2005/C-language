#include<stdio.h>
int main()
{
	int  n,f;
	printf("\n Enter the number:");
	scanf("%d",&n);
	for(f=1;f<=n;f++)
	{
		if(n%f==0)
		printf("%d\t",f);
	}
}
