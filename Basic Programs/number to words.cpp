#include<stdio.h>
int main()
{
	int n,a,r=0,j;
	char op;
	printf("\nEnter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	while(r>0)
	{
		j=r%10;
		
		switch(j)
		{
			case 0:printf("zero");
				break;
			case 1:printf(" One ");
				break;
			case 2:printf(" two ");
				break;
			case 3:printf(" three ");
				break;
			case 4:printf(" four ");
				break;
			case 5:printf(" five ");
				break;
			case 6:printf(" six ");
				break;
			case 7:printf(" seven ");
				break;
			case 8:printf(" eight ");
				break;
			case 9:printf(" nine ");
				break;
			default:printf("Wrong");
				break;
		}
		r=r/10;
	}
}
