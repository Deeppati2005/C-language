#include<stdio.h>
int main()
{
	int s;
	char ans;
	int count[5]={0},i=0,x=0,n=0;
	printf("\nEnter vote(1-5):");
	do{
		n++;
		scanf("%d",&s);
		if(s>=1 && s<=5)
		count[s-1]++;
		else
		x++;
		fflush(stdin);
		printf("\n Press y to cont..");
		scanf("%c",&ans);
	}while(ans=='y');
}
