#include<stdio.h>
void linear_search(char a[],int n,char key)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			printf("\nFound at the index=%d",i);
		}
	}
	if(flag==0)
	printf("\nNot Found");
}
int main()
{
	char a[10],key;
	int n,i;
	printf("\nEnter the limt:");
	scanf("%d",&n);
	printf("\nEnter the character elements:\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&a[i]);
	}
	fflush(stdin);
	printf("\nEnter search item:");
	scanf("%c",&key);
	linear_search(a,n,key);
}
